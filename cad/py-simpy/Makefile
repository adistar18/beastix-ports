# $NetBSD: Makefile,v 1.18 2015/01/04 02:13:16 mef Exp $

DISTNAME=		SimPy-2.3.1
PKGNAME=		${PYPKGPREFIX}-${DISTNAME:tl}
CATEGORIES=		cad math
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=simpy/} \
			http://pypi.python.org/packages/source/S/SimPy/

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://simpy.readthedocs.org/en/latest/
COMMENT=		Discrete event simulation framework
LICENSE=		gnu-lgpl-v2.1

PYTHON_VERSIONS_INCOMPATIBLE=	33 34 # not yet ported as of 2.3

TEST_ENV+=	PYTHONPATH=${WRKSRC:Q}/build/lib

# needs py-test (pkgsrc/devel/py-test)
#do-test:
#	${SETENV} ${TEST_ENV} ${PYTHONBIN} -c "import SimPy; SimPy.test()"

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
