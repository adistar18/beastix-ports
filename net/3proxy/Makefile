# $NetBSD: Makefile,v 1.7 2015/03/13 16:35:39 tnn Exp $
#

DISTNAME=	3proxy-0.5.3k
PKGNAME=	${DISTNAME:C/k$/.11/}
PKGREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://3proxy.ru/${DISTNAME:S/3proxy-//}/
EXTRACT_SUFX=	.tgz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://3proxy.ru/
COMMENT=	Multi-protocol proxy
# 3proxy-0.5.* is dual-licenced under GPL or custom terms.  It's not
# clear exactly which version of the GPL is intended; ${WRKSRC}/License
# says "current version of GNU GPL" without specifying a numeric version
# number.  3proxy-0.6.* will have a different license.
LICENSE=	3proxy-0.5-license

WRKSRC=		${WRKDIR}
MAKE_FILE=	Makefile.unix

INSTALLATION_DIRS=	sbin ${PKGMANDIR}/man5 ${PKGMANDIR}/man8

# We install only 3proxy and its man pages.  There are several other
# binaries which we don't install, because the 3proxy executable
# provides a superset of the functionality of the others.  We also don't
# install the HTML pages, because they provide no more information than
# the man pages.
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/3proxy ${DESTDIR}${PREFIX}/sbin/.
	${INSTALL_MAN} ${WRKSRC}/man/3proxy.8 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man8/.
	${INSTALL_MAN} ${WRKSRC}/man/3proxy.cfg.3 \
			${DESTDIR}${PREFIX}/${PKGMANDIR}/man5/3proxy.cfg.5

.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
