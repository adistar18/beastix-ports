# $NetBSD: Makefile,v 1.13 2014/10/09 14:06:57 wiz Exp $

DISTNAME=	ccze-0.2.1
PKGREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	ftp://bonehunter.rulez.org/pub/ccze/stable/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://bonehunter.rulez.org/software/ccze/
COMMENT=	Log coloriser, fast and light on resources

INCOMPAT_CURSES=	NetBSD-1.5*-* NetBSD-1.6*-*

GNU_CONFIGURE=	yes
USE_TOOLS+=	gmake
BUILDLINK_TRANSFORM+=	rm:-Wmulticharacter

LDFLAGS.SunOS+=	-lsocket -lnsl

.include "../../devel/ncurses/buildlink3.mk"
.include "../../devel/pcre/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
