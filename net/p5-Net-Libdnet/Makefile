# $NetBSD: Makefile,v 1.13 2015/02/26 14:36:35 mef Exp $
#

DISTNAME=	Net-Libdnet-0.98
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Net/}
#MASTER_SITES=	http://search.cpan.org/CPAN/authors/id/V/VM/VMAN/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Net-Libdnet/
COMMENT=	Perl interface to libdnet
LICENSE=	2-clause-bsd

PERL5_PACKLIST=	auto/Net/Libdnet/.packlist
USE_LANGUAGES+=	c

DEPENDS+= p5-Class-Gomor-[0-9]*:../../devel/p5-Class-Gomor

.include "../../net/libdnet/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
