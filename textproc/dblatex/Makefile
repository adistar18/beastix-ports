# $NetBSD: Makefile,v 1.18 2014/12/10 12:27:27 wiz Exp $

DISTNAME=	dblatex-0.3.2
PKGREVISION=	3
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=dblatex/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://dblatex.sourceforge.net/
COMMENT=	DocBook to LaTeX Publishing
LICENSE=	gnu-gpl-v2

DEPENDS+=	ImageMagick-[0-9]*:../../graphics/ImageMagick
DEPENDS+=	teTeX-bin-[0-9]*:../../print/teTeX3-bin
DEPENDS+=	libxslt-[0-9]*:../../textproc/libxslt
DEPENDS+=	tex-ifxetex-[0-9]*:../../print/tex-ifxetex

USE_LANGUAGES=	# none
USE_TOOLS+=	gmake

.include "options.mk"

REPLACE_PYTHON+=	scripts/dblatex lib/dbtexmf/dblatex/xetex/*.py
PYTHON_VERSIONS_INCOMPATIBLE=	33 34 # not yet ported as of 0.3.2

SUBST_CLASSES+=		man
SUBST_MESSAGE.man=	Fixing man page installation path.
SUBST_STAGE.man=	pre-configure
SUBST_FILES.man=	setup.py
SUBST_SED.man+=		-e 's,share/man/man1,${PKGMANDIR}/man1,'
SUBST_SED.man+=		-e "s,'python','${PYTHONBIN}',"

do-test:
	cd ${WRKSRC}/tests/mathml && gmake

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
