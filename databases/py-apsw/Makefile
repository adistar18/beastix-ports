# $NetBSD: Makefile,v 1.3 2014/12/31 13:57:25 wiz Exp $

DISTNAME=	apsw-3.8.4.2-r1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/-r/pl/}
PKGREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	https://github.com/rogerbinns/apsw/releases/download/${DISTNAME:C/^[^-]*-//1}/
EXTRACT_SUFX=	.zip

MAINTAINER=	rhialto@falu.nl
HOMEPAGE=	http://rogerbinns.github.io/apsw/
COMMENT=	Python wrapper for SQLite
LICENSE=	zlib

USE_LANGUAGES=	c

BUILDLINK_API_DEPENDS.sqlite3+= sqlite3>=3.8.3
.include "../../databases/sqlite3/buildlink3.mk"
.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
