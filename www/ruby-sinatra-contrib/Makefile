# $NetBSD: Makefile,v 1.4 2014/03/14 19:30:07 taca Exp $

DISTNAME=	sinatra-contrib-1.4.2
CATEGORIES=	www

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://github.com/sinatra/sinatra-contrib/
COMMENT=	Collection of useful Sinatra extensions
LICENSE=	mit

DEPENDS+=	${RUBY_PKGPREFIX}-backports>=2.0:../../devel/ruby-backports
DEPENDS+=	${RUBY_PKGPREFIX}-rack-protection-[0-9]*:../../www/ruby-rack-protection
DEPENDS+=	${RUBY_PKGPREFIX}-rack-test-[0-9]*:../../www/ruby-rack-test
DEPENDS+=	${RUBY_PKGPREFIX}-sinatra>=1.4.2<1.5:../../www/ruby-sinatra
DEPENDS+=	${RUBY_PKGPREFIX}-tilt>=1.3<2:../../textproc/ruby-tilt
DEPENDS+=	${RUBY_PKGPREFIX}-multi_json-[0-9]*:../../textproc/ruby-multi_json

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
