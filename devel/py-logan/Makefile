# $NetBSD: Makefile,v 1.5 2015/04/01 02:39:02 rodent Exp $

DISTNAME=	logan-0.6.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	https://pypi.python.org/packages/source/l/logan/

MAINTAINER=	rodent@NetBSD.org
HOMEPAGE=	http://github.com/dcramer/logan
COMMENT=	Toolkit for building standalone Django applications
LICENSE=	apache-2.0

DEPENDS+=	${PYPKGPREFIX}-flake8-[0-9]*:../../devel/py-flake8

USE_LANGUAGES=	# none
PYTHON_VERSIONS_INCOMPATIBLE=	26

.include "options.mk"

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
