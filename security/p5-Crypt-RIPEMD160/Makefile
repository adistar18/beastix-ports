# $NetBSD: Makefile,v 1.25 2014/10/09 14:06:54 wiz Exp $
#

DISTNAME=		Crypt-RIPEMD160-0.05
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		3
CATEGORIES=		security perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Crypt/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Crypt-RIPEMD160/
COMMENT=		Perl5 module of the RIPEMD160 hash function
LICENSE=		${PERL5_LICENSE}

PERL5_PACKLIST=		auto/Crypt/RIPEMD160/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
