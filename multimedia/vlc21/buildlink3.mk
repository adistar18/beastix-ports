# $NetBSD: buildlink3.mk,v 1.1 2014/12/13 11:15:45 wiz Exp $

BUILDLINK_TREE+=	vlc

.if !defined(VLC_BUILDLINK3_MK)
VLC_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.vlc+=	vlc>=2.0.6nb2
BUILDLINK_PKGSRCDIR.vlc?=	../../multimedia/vlc2

.endif	# VLC_BUILDLINK3_MK

BUILDLINK_TREE+=	-vlc
