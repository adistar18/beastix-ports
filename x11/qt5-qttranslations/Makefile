# $NetBSD: Makefile,v 1.12 2015/02/21 23:35:42 ryoon Exp $

DISTNAME=	qttranslations-opensource-src-${QTVERSION}
PKGNAME=	qt5-qttranslations-${QTVERSION}
PKGREVISION=	1
COMMENT=	Qt5 translations

MAKE_ENV+=		QTDIR=${QTDIR}
INSTALL_ENV+=		INSTALL_ROOT=${DESTDIR}

.include "../../x11/qt5-qtbase/Makefile.common"

.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
