# $NetBSD: Makefile,v 1.36 2014/08/21 21:35:06 wiz Exp $

.include "../../x11/qt4-qscintilla/Makefile.common"

PKGNAME=	qt4-${DISTNAME:tl:S/-gpl-/-/}
COMMENT=	Scintilla C++ editor class for Qt

WRKSRC=		${WRKDIR}/${DISTNAME}/Qt4Qt5

USE_TOOLS+=	gmake
MAKE_ENV+=	QTPREFIX=${QTDIR}
INSTALLATION_DIRS=	${QTDIR}/lib ${QTDIR}/include

do-configure:
	(cd ${WRKSRC} && ${QTDIR}/bin/qmake -o Makefile qscintilla.pro)

do-install:
	(mkdir ${DESTDIR}${QTDIR}/include/Qsci)
	${LIBTOOL} --mode=install ${INSTALL_DATA} \
		${WRKSRC}/libqscintilla2.la ${DESTDIR}${QTDIR}/lib
	${INSTALL_DATA} ${WRKSRC}/Qsci/qsci*.h ${DESTDIR}${QTDIR}/include/Qsci

.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
