# $NetBSD: Makefile,v 1.1 2015/01/14 21:01:18 adam Exp $

PKGNAME=	${DISTNAME:C/-/94-/}
COMMENT=	Robust, next generation, object-relational DBMS

DEPENDS+=	postgresql94-client>=${PKGVERSION_NOREV}:../../databases/postgresql94-client
DEPENDS+=	postgresql94-docs>=${PKGVERSION_NOREV}:../../databases/postgresql94-docs
DEPENDS+=	postgresql94-server>=${PKGVERSION_NOREV}:../../databases/postgresql94-server

META_PACKAGE=	yes

.include "Makefile.common"

.include "../../mk/bsd.pkg.mk"
