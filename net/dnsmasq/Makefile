# $NetBSD: Makefile,v 1.26.4.1 2015/04/29 18:40:55 spz Exp $
#

DISTNAME=		dnsmasq-2.67
PKGREVISION=		3
CATEGORIES=		net
MASTER_SITES=		http://www.thekelleys.org.uk/dnsmasq/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.thekelleys.org.uk/dnsmasq/doc.html
COMMENT=		Lightweight, easy to configure DNS forwarder
LICENSE=		gnu-gpl-v3

RCD_SCRIPTS=		dnsmasq
CONF_FILES=		${PREFIX}/share/examples/dnsmasq/dnsmasq.conf.example \
			${PKG_SYSCONFDIR}/dnsmasq.conf

.include "../../mk/bsd.prefs.mk"

DNSMASQ_USER?=		dnsmasq
.if ${OPSYS} == "Interix"
DNSMASQ_GROUP?=		nogroup
.else
DNSMASQ_GROUP?=		dnsmasq
.endif

PKG_GROUPS=		${DNSMASQ_GROUP}
PKG_USERS=		${DNSMASQ_USER}:${DNSMASQ_GROUP}
PKG_GECOS.${DNSMASQ_USER}=	DNS\ forwarder\ user

PKG_OPTIONS_VAR=	PKG_OPTIONS.dnsmasq
PKG_SUPPORTED_OPTIONS=	dbus inet6
PKG_SUGGESTED_OPTIONS=	inet6
PLIST_VARS+=	dbus

.include "../../mk/bsd.options.mk"

.if !empty(PKG_OPTIONS:Mdbus)
USE_TOOLS+=	pkg-config
CFLAGS+=	-DHAVE_DBUS
.include "../../sysutils/dbus/buildlink3.mk"
CONF_FILES+=	${PREFIX}/share/examples/dnsmasq/dnsmasq-dbus.conf \
		${PKG_SYSCONFDIR}/dbus-1/system.d/dnsmasq-dbus.conf
PLIST.dbus=	yes
.endif

.if empty(PKG_OPTIONS:Minet6)
CFLAGS+=	-DNO_IPV6
.endif

# Override the defaults
AUTO_MKDIRS=yes
CFLAGS+=		-DCONFFILE='"${PKG_SYSCONFDIR}/dnsmasq.conf"'
BUILD_MAKE_FLAGS+=	COPTS=${CFLAGS:Q}
INSTALL_MAKE_FLAGS+=	PREFIX="${PREFIX}"
INSTALL_MAKE_FLAGS+=	MANDIR="${PREFIX}/${PKGMANDIR}"
INSTALL_MAKE_FLAGS+=	LOCALEDIR="${PREFIX}/${PKGLOCALEDIR}"

# Upstream wants to use nawk, but awk should work just fine here.
BUILD_MAKE_FLAGS+=	AWK="${AWK}"
INSTALL_MAKE_FLAGS+=	AWK="${AWK}"

post-install:
	${INSTALL_DATA} ${WRKSRC}/dnsmasq.conf.example \
		${DESTDIR}${PREFIX}/share/examples/dnsmasq/
.if !empty(PKG_OPTIONS:Mdbus)
	${INSTALL_DATA} ${WRKSRC}/dbus/dnsmasq.conf \
		${DESTDIR}${PREFIX}/share/examples/dnsmasq/dnsmasq-dbus.conf
.endif

.include "../../mk/bsd.pkg.mk"
