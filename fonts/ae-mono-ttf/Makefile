# $NetBSD: Makefile,v 1.3 2014/06/01 16:35:32 wiz Exp $
#

DISTNAME=	ae_fonts_mono
PKGNAME=	ae-mono-ttf-${VERSION}
PKGREVISION=	1
CATEGORIES=	fonts
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=arabeyes/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	kamelderouiche@yahoo.com
HOMEPAGE=	http://www.arabeyes.org/project.php?proj=Khotot
COMMENT=	Collection of PCF fonts that include Arabic glyphs

NO_BUILD=	yes
NO_CONFIGURE=	yes
USE_LANGUAGES=	# none
VERSION=	1.0

FONTS_DIRS.x11=		${PREFIX}/share/fonts/X11/ae-mono-ttf

INSTALLATION_DIRS=	share/fonts/X11/ae-mono-ttf

do-install:
	${INSTALL_DATA} ${WRKSRC}/10x21.bdf ${DESTDIR}${FONTS_DIRS.x11}
	${INSTALL_DATA} ${WRKSRC}/10x21.pcf ${DESTDIR}${FONTS_DIRS.x11}

.include "../../mk/bsd.pkg.mk"
