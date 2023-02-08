// Emacs style mode select   -*- C -*-
//-----------------------------------------------------------------------------
//
// Copyright(C) 1993-1997 Id Software, Inc.
// Copyright(C) 1997 Midway Home Entertainment, Inc
// Copyright(C) 2007-2012 Samuel Villarreal
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
//-----------------------------------------------------------------------------

#ifndef __INFO__
#define __INFO__

#include <stdint.h>

// Needed for action function pointer handling.
#include "d_think.h"

typedef enum {
	SPR_SPOT,
	SPR_PLAY,
	SPR_SARG,
	SPR_FATT,
	SPR_POSS,
	SPR_TROO,
	SPR_HEAD,
	SPR_BOSS,
	SPR_SKUL,
	SPR_BSPI,
	SPR_CYBR,
	SPR_PAIN,
	SPR_RECT,
	SPR_MISL,
	SPR_PLSS,
	SPR_BFS1,
	SPR_LASS,
	SPR_BAL1,
	SPR_BAL3,
	SPR_BAL2,
	SPR_BAL7,
	SPR_BAL8,
	SPR_APLS,
	SPR_MANF,
	SPR_TRCR,
	SPR_DART,
	SPR_FIRE,
	SPR_RBAL,
	SPR_PUF2,
	SPR_PUF3,
	SPR_PUFF,
	SPR_BLUD,
	SPR_A027,
	SPR_TFOG,
	SPR_BFE2,
	SPR_ARM1,
	SPR_ARM2,
	SPR_BON1,
	SPR_BON2,
	SPR_BKEY,
	SPR_RKEY,
	SPR_YKEY,
	SPR_YSKU,
	SPR_RSKU,
	SPR_BSKU,
	SPR_ART1,
	SPR_ART2,
	SPR_ART3,
	SPR_STIM,
	SPR_MEDI,
	SPR_SOUL,
	SPR_PINV,
	SPR_PSTR,
	SPR_PINS,
	SPR_SUIT,
	SPR_PMAP,
	SPR_PVIS,
	SPR_MEGA,
	SPR_CLIP,
	SPR_AMMO,
	SPR_RCKT,
	SPR_BROK,
	SPR_CELL,
	SPR_CELP,
	SPR_SHEL,
	SPR_SBOX,
	SPR_BPAK,
	SPR_BFUG,
	SPR_CSAW,
	SPR_MGUN,
	SPR_LAUN,
	SPR_PLSM,
	SPR_SHOT,
	SPR_SGN2,
	SPR_LSRG,
	SPR_CAND,
	SPR_BAR1,
	SPR_LMP1,
	SPR_LMP2,
	SPR_A031,
	SPR_A030,
	SPR_A032,
	SPR_A033,
	SPR_A034,
	SPR_BFLM,
	SPR_RFLM,
	SPR_YFLM,
	SPR_A006,
	SPR_A021,
	SPR_A003,
	SPR_A020,
	SPR_A014,
	SPR_A016,
	SPR_A008,
	SPR_A007,
	SPR_A015,
	SPR_A001,
	SPR_A012,
	SPR_A010,
	SPR_A018,
	SPR_A017,
	SPR_A026,
	SPR_A022,
	SPR_A028,
	SPR_A029,
	SPR_A035,
	SPR_A036,
	SPR_TRE3,
	SPR_TRE2,
	SPR_TRE1,
	SPR_A013,
	SPR_A019,
	SPR_A004,
	SPR_A005,
	SPR_A023,
	SPR_SAWG,
	SPR_PUNG,
	SPR_PISG,
	SPR_SHT1,
	SPR_SHT2,
	SPR_CHGG,
	SPR_ROCK,
	SPR_PLAS,
	SPR_BFGG,
	SPR_LASR,
	SPR_S015,
	SPR_S016,
	SPR_S003,
	SPR_S039,
	SPR_S025,
	SPR_S033,
	SPR_S034,
	SPR_S035,
	SPR_S005,
	SPR_S006,
	SPR_S007,
	SPR_S008,
	SPR_S009,
	SPR_S010,
	SPR_S011,
	SPR_S012,
	SPR_S013,
	SPR_S014,
	SPR_S017,
	SPR_S018,
	SPR_S019,
	SPR_S020,
	SPR_S021,
	SPR_S022,
	SPR_S023,
	SPR_S024,
	SPR_S028,
	SPR_S029,
	SPR_S031,
	SPR_S032,
	SPR_S027,
	SPR_S036,
	SPR_S037,
	SPR_S038,
	SPR_S040,
	SPR_S041,
	SPR_S026,
	SPR_S002,
	SPR_S030,
	SPR_CPOS,
	SPR_SKEL,
	SPR_ARCR,
	SPR_POW1,
	SPR_SPID,
	SPR_TEST,
	SPR_A64A,
	SPR_GECH,
	SPR_DKHL,
	SPR_DKHF,
	SPR_BR64,
	SPR_BQ64,
	SPR_AV64,
	SPR_VFIR,
	SPR_MPOS,
	SPR_POS4,
	SPR_SKON,
	SPR_BRMT,
	SPR_QDMG,
	SPR_FRCK,
	SPR_NLGN,
	SPR_NLBX,
	SPR_NLGP,
	SPR_64SG,
	SPR_BSTK,
	SPR_FACE,
	SPR_HDB6,
	SPR_NBAR,
	SPR_NPIL,
	SPR_NPL1,
	SPR_NPL2,
	SPR_NPL3,
	SPR_ORBN,
	SPR_ORBB,
	SPR_ORBR,
	SPR_ORBY,
	SPR_NPL4,
	SPR_TLMP,
	SPR_TLP1,
	SPR_DGOT,
	SPR_HANG,
	SPR_VEST,
	NUMSPRITES
} spritenum_t;

typedef enum {
	S_NULL,
	S_PLAY,
	S_PLAY_RUN1,
	S_PLAY_RUN2,
	S_PLAY_RUN3,
	S_PLAY_RUN4,
	S_PLAY_ATK1,
	S_PLAY_ATK2,
	S_PLAY_PAIN,
	S_PLAY_PAIN2,
	S_PLAY_DIE1,
	S_PLAY_DIE2,
	S_PLAY_DIE3,
	S_PLAY_DIE4,
	S_PLAY_DIE5,
	S_PLAY_DIE6,
	S_PLAY_XDIE1,
	S_PLAY_XDIE2,
	S_PLAY_XDIE3,
	S_PLAY_XDIE4,
	S_PLAY_XDIE5,
	S_PLAY_XDIE6,
	S_PLAY_XDIE7,
	S_PLAY_XDIE8,
	S_PLAY_XDIE9,
	S_PBOT_STND,
	S_PBOT_RUN1,
	S_PBOT_RUN2,
	S_PBOT_RUN3,
	S_PBOT_RUN4,
	S_PBOT_ATK1,
	S_PBOT_ATK2,
	S_PBOT_ATK3,
	S_PBOT_ATK4,
	S_PBOT_ATK5,
	S_PBOT_ATK6,
	S_PBOT_PAIN,
	S_PBOT_PAIN2,
	S_PBOT_PATK1,
	S_PBOT_PATK2,
	S_PBOT_PATK3,
	S_PBOT_PATK4,
	S_PBOT_PATK5,
	S_PBOT_PATK6,
	S_SARG_STND,
	S_SARG_STND2,
	S_SARG_RUN1,
	S_SARG_RUN2,
	S_SARG_RUN3,
	S_SARG_RUN4,
	S_SARG_RUN5,
	S_SARG_RUN6,
	S_SARG_RUN7,
	S_SARG_RUN8,
	S_SARG_ATK1,
	S_SARG_ATK2,
	S_SARG_ATK3,
	S_SARG_PAIN1,
	S_SARG_PAIN2,
	S_SARG_DIE1,
	S_SARG_DIE2,
	S_SARG_DIE3,
	S_SARG_DIE4,
	S_SARG_DIE5,
	S_SARG_DIE6,
	S_SARG_RUN0,
	S_SARG_ATK0,
	S_SARG_PAIN0,
	S_SARG_DIE0,
	S_SARG_RAISE1,
	S_SARG_RAISE2,
	S_SARG_RAISE3,
	S_SARG_RAISE4,
	S_SARG_RAISE5,
	S_SARG_RAISE6,
	S_FATT_STND,
	S_FATT_STND2,
	S_FATT_RUN1,
	S_FATT_RUN2,
	S_FATT_RUN3,
	S_FATT_RUN4,
	S_FATT_RUN5,
	S_FATT_RUN6,
	S_FATT_RUN7,
	S_FATT_RUN8,
	S_FATT_RUN9,
	S_FATT_RUN10,
	S_FATT_RUN11,
	S_FATT_RUN12,
	S_FATT_ATK1,
	S_FATT_ATK2,
	S_FATT_ATK3,
	S_FATT_ATK4,
	S_FATT_ATK5,
	S_FATT_ATK6,
	S_FATT_ATK7,
	S_FATT_PAIN,
	S_FATT_PAIN2,
	S_FATT_DIE1,
	S_FATT_DIE2,
	S_FATT_DIE3,
	S_FATT_DIE4,
	S_FATT_DIE5,
	S_FATT_DIE6,
	S_FATT_RAISE1,
	S_FATT_RAISE2,
	S_FATT_RAISE3,
	S_FATT_RAISE4,
	S_FATT_RAISE5,
	S_FATT_RAISE6,
	S_POSS1_STND,
	S_POSS1_STND2,
	S_POSS1_RUN1,
	S_POSS1_RUN2,
	S_POSS1_RUN3,
	S_POSS1_RUN4,
	S_POSS1_RUN5,
	S_POSS1_RUN6,
	S_POSS1_RUN7,
	S_POSS1_RUN8,
	S_POSS1_ATK1,
	S_POSS1_ATK2,
	S_POSS1_ATK3,
	S_POSS1_PAIN,
	S_POSS1_PAIN2,
	S_POSS1_DIE1,
	S_POSS1_DIE2,
	S_POSS1_DIE3,
	S_POSS1_DIE4,
	S_POSS1_DIE5,
	S_POSS1_XDIE1,
	S_POSS1_XDIE2,
	S_POSS1_XDIE3,
	S_POSS1_XDIE4,
	S_POSS1_XDIE5,
	S_POSS1_XDIE6,
	S_POSS1_XDIE7,
	S_POSS1_XDIE8,
	S_POSS1_XDIE9,
	S_POSS1_RAISE1,
	S_POSS1_RAISE2,
	S_POSS1_RAISE3,
	S_POSS1_RAISE4,
	S_POSS1_RAISE5,
	S_POSS2_STND,
	S_POSS2_STND2,
	S_POSS2_RUN1,
	S_POSS2_RUN2,
	S_POSS2_RUN3,
	S_POSS2_RUN4,
	S_POSS2_RUN5,
	S_POSS2_RUN6,
	S_POSS2_RUN7,
	S_POSS2_RUN8,
	S_POSS2_ATK1,
	S_POSS2_ATK2,
	S_POSS2_ATK3,
	S_POSS2_PAIN,
	S_POSS2_PAIN2,
	S_POSS2_DIE1,
	S_POSS2_DIE2,
	S_POSS2_DIE3,
	S_POSS2_DIE4,
	S_POSS2_DIE5,
	S_POSS2_XDIE1,
	S_POSS2_XDIE2,
	S_POSS2_XDIE3,
	S_POSS2_XDIE4,
	S_POSS2_XDIE5,
	S_POSS2_XDIE6,
	S_POSS2_XDIE7,
	S_POSS2_XDIE8,
	S_POSS2_XDIE9,
	S_POSS2_RAISE1,
	S_POSS2_RAISE2,
	S_POSS2_RAISE3,
	S_POSS2_RAISE4,
	S_POSS2_RAISE5,
	S_TROO_STND,
	S_TROO_STND2,
	S_TROO_RUN1,
	S_TROO_RUN2,
	S_TROO_RUN3,
	S_TROO_RUN4,
	S_TROO_RUN5,
	S_TROO_RUN6,
	S_TROO_RUN7,
	S_TROO_RUN8,
	S_TROO_MELEE1,
	S_TROO_MELEE2,
	S_TROO_MELEE3,
	S_TROO_ATK1,
	S_TROO_ATK2,
	S_TROO_ATK3,
	S_TROO_PAIN,
	S_TROO_PAIN2,
	S_TROO_DIE1,
	S_TROO_DIE2,
	S_TROO_DIE3,
	S_TROO_DIE4,
	S_TROO_DIE5,
	S_TROO_XDIE1,
	S_TROO_XDIE2,
	S_TROO_XDIE3,
	S_TROO_XDIE4,
	S_TROO_XDIE5,
	S_TROO_XDIE6,
	S_TROO_XDIE7,
	S_TROO_XDIE8,
	S_TROO_RAISE1,
	S_TROO_RAISE2,
	S_TROO_RAISE3,
	S_TROO_RAISE4,
	S_TROO_RAISE5,
	S_HEAD_STND,
	S_HEAD_STND2,
	S_HEAD_STND3,
	S_HEAD_STND4,
	S_HEAD_RUN1,
	S_HEAD_RUN2,
	S_HEAD_RUN3,
	S_HEAD_RUN4,
	S_HEAD_RUN5,
	S_HEAD_RUN6,
	S_HEAD_RUN7,
	S_HEAD_RUN8,
	S_HEAD_ATK1,
	S_HEAD_ATK2,
	S_HEAD_ATK3,
	S_HEAD_ATK4,
	S_HEAD_PAIN,
	S_HEAD_PAIN2,
	S_HEAD_PAIN3,
	S_HEAD_DIE1,
	S_HEAD_DIE2,
	S_HEAD_DIE3,
	S_HEAD_DIE4,
	S_HEAD_DIE5,
	S_HEAD_DIE6,
	S_HEAD_RAISE1,
	S_HEAD_RAISE2,
	S_HEAD_RAISE3,
	S_HEAD_RAISE4,
	S_HEAD_RAISE5,
	S_HEAD_RAISE6,
	S_BOSS1_STND,
	S_BOSS1_STND2,
	S_BOSS1_RUN1,
	S_BOSS1_RUN2,
	S_BOSS1_RUN3,
	S_BOSS1_RUN4,
	S_BOSS1_RUN5,
	S_BOSS1_RUN6,
	S_BOSS1_RUN7,
	S_BOSS1_RUN8,
	S_BOSS1_ATK1,
	S_BOSS1_ATK2,
	S_BOSS1_ATK3,
	S_BOSS1_PAIN,
	S_BOSS1_PAIN2,
	S_BOSS1_DIE1,
	S_BOSS1_DIE2,
	S_BOSS1_DIE3,
	S_BOSS1_DIE4,
	S_BOSS1_DIE5,
	S_BOSS1_DIE6,
	S_BOSS1_RAISE1,
	S_BOSS1_RAISE2,
	S_BOSS1_RAISE3,
	S_BOSS1_RAISE4,
	S_BOSS1_RAISE5,
	S_BOSS1_RAISE6,
	S_BOSS2_STND,
	S_BOSS2_STND2,
	S_BOSS2_RUN1,
	S_BOSS2_RUN2,
	S_BOSS2_RUN3,
	S_BOSS2_RUN4,
	S_BOSS2_RUN5,
	S_BOSS2_RUN6,
	S_BOSS2_RUN7,
	S_BOSS2_RUN8,
	S_BOSS2_ATK1,
	S_BOSS2_ATK2,
	S_BOSS2_ATK3,
	S_BOSS2_PAIN,
	S_BOSS2_PAIN2,
	S_BOSS2_DIE1,
	S_BOSS2_DIE2,
	S_BOSS2_DIE3,
	S_BOSS2_DIE4,
	S_BOSS2_DIE5,
	S_BOSS2_DIE6,
	S_BOSS2_RAISE1,
	S_BOSS2_RAISE2,
	S_BOSS2_RAISE3,
	S_BOSS2_RAISE4,
	S_BOSS2_RAISE5,
	S_BOSS2_RAISE6,
	S_SKUL_STND,
	S_SKUL_STND2,
	S_SKUL_STND3,
	S_SKUL_RUN1,
	S_SKUL_RUN2,
	S_SKUL_RUN3,
	S_SKUL_ATK1,
	S_SKUL_ATK2,
	S_SKUL_ATK3,
	S_SKUL_ATK4,
	S_SKUL_PAIN,
	S_SKUL_PAIN2,
	S_SKUL_DIE1,
	S_SKUL_DIE2,
	S_SKUL_DIE3,
	S_SKUL_DIE4,
	S_SKUL_DIE5,
	S_SKUL_DIE6,
	S_SKUL_DIE7,
	S_SKUL_DIE8,
	S_SKUL_DIE9,
	S_SKUL_DIE10,
	S_BSPI_STND,
	S_BSPI_STND2,
	S_BSPI_RUN1,
	S_BSPI_RUN2,
	S_BSPI_RUN3,
	S_BSPI_RUN4,
	S_BSPI_RUN5,
	S_BSPI_RUN6,
	S_BSPI_RUN7,
	S_BSPI_RUN8,
	S_BSPI_RUN9,
	S_BSPI_ATK1,
	S_BSPI_ATK2,
	S_BSPI_ATK3,
	S_BSPI_PAIN,
	S_BSPI_PAIN2,
	S_BSPI_DIE1,
	S_BSPI_DIE2,
	S_BSPI_DIE3,
	S_BSPI_DIE4,
	S_BSPI_DIE5,
	S_BSPI_DIE6,
	S_BSPI_RAISE1,
	S_BSPI_RAISE2,
	S_BSPI_RAISE3,
	S_BSPI_RAISE4,
	S_BSPI_RAISE5,
	S_BSPI_RAISE6,
	S_CYBR_STND,
	S_CYBR_RUN1,
	S_CYBR_RUN2,
	S_CYBR_RUN3,
	S_CYBR_RUN4,
	S_CYBR_RUN5,
	S_CYBR_RUN6,
	S_CYBR_RUN7,
	S_CYBR_RUN8,
	S_CYBR_ATK1,
	S_CYBR_ATK2,
	S_CYBR_ATK3,
	S_CYBR_ATK4,
	S_CYBR_ATK5,
	S_CYBR_ATK6,
	S_CYBR_PAIN,
	S_CYBR_DIE1,
	S_CYBR_DIE2,
	S_CYBR_DIE3,
	S_CYBR_DIE4,
	S_CYBR_DIE5,
	S_CYBR_DIE6,
	S_CYBR_DIE7,
	S_CYBR_DIE8,
	S_CYBR_DIE9,
	S_CYBR_TITLE1,
	S_CYBR_TITLE2,
	S_CYBR_TITLE3,
	S_PAIN_STND,
	S_PAIN_RUN,
	S_PAIN_ATK1,
	S_PAIN_ATK2,
	S_PAIN_ATK3,
	S_PAIN_ATK4,
	S_PAIN_PAIN,
	S_PAIN_PAIN2,
	S_PAIN_DIE1,
	S_PAIN_DIE2,
	S_PAIN_DIE3,
	S_PAIN_DIE4,
	S_PAIN_DIE5,
	S_PAIN_DIE6,
	S_PAIN_DIE7,
	S_PAIN_DIE8,
	S_RECT_STND,
	S_RECT_STND2,
	S_RECT_STND3,
	S_RECT_STND4,
	S_RECT_RUN1,
	S_RECT_RUN2,
	S_RECT_RUN3,
	S_RECT_RUN4,
	S_RECT_RUN5,
	S_RECT_RUN6,
	S_RECT_RUN7,
	S_RECT_RUN8,
	S_RECT_RUN9,
	S_RECT_RUN10,
	S_RECT_RUN11,
	S_RECT_RUN12,
	S_RECT_ATK1,
	S_RECT_ATK2,
	S_RECT_ATK3,
	S_RECT_ATK4,
	S_RECT_PAIN,
	S_RECT_DIE1,
	S_RECT_DIE2,
	S_RECT_DIE3,
	S_RECT_DIE4,
	S_RECT_DIE5,
	S_RECT_DIE6,
	S_RECT_DIE7,
	S_FAKEITEM,
	S_ROCKET,
	S_ROCKET_DIE1,
	S_ROCKET_DIE2,
	S_ROCKET_DIE3,
	S_ROCKET_DIE4,
	S_ROCKET_DIE5,
	S_ROCKET_DIE6,
	S_ROCKET_DIE7,
	S_PLASMA1,
	S_PLASMA2,
	S_PLASMA_DIE1,
	S_PLASMA_DIE2,
	S_PLASMA_DIE3,
	S_PLASMA_DIE4,
	S_PLASMA_DIE5,
	S_PLASMA_DIE6,
	S_BFGBALL1,
	S_BFGBALL2,
	S_BFGBALL_DIE1,
	S_BFGBALL_DIE2,
	S_BFGBALL_DIE3,
	S_BFGBALL_DIE4,
	S_BFGBALL_DIE5,
	S_BFGBALL_DIE6,
	S_LASER1,
	S_LASER2,
	S_TBALL1,
	S_TBALL2,
	S_TBALL3,
	S_TBALL_DIE1,
	S_TBALL_DIE2,
	S_TBALL_DIE3,
	S_TBALL_DIE4,
	S_TBALL_DIE5,
	S_TBALL_DIE6,
	S_NBALL1,
	S_NBALL2,
	S_NBALL3,
	S_NBALL_DIE1,
	S_NBALL_DIE2,
	S_NBALL_DIE3,
	S_NBALL_DIE4,
	S_NBALL_DIE5,
	S_NBALL_DIE6,
	S_CBALL1,
	S_CBALL2,
	S_CBALL3,
	S_CBALL_DIE1,
	S_CBALL_DIE2,
	S_CBALL_DIE3,
	S_CBALL_DIE4,
	S_CBALL_DIE5,
	S_BGBALL1,
	S_BGBALL2,
	S_BGBALL_DIE1,
	S_BGBALL_DIE2,
	S_BGBALL_DIE3,
	S_BGBALL_DIE4,
	S_BGBALL_DIE5,
	S_BGBALL_DIE6,
	S_BRBALL1,
	S_BRBALL2,
	S_BRBALL_DIE1,
	S_BRBALL_DIE2,
	S_BRBALL_DIE3,
	S_BRBALL_DIE4,
	S_BRBALL_DIE5,
	S_BRBALL_DIE6,
	S_APLS1,
	S_APLS2,
	S_APLS_DIE1,
	S_APLS_DIE2,
	S_APLS_DIE3,
	S_APLS_DIE4,
	S_APLS_DIE5,
	S_APLS_DIE6,
	S_MANF1,
	S_MANF2,
	S_MANF3,
	S_MANF_DIE1,
	S_MANF_DIE2,
	S_MANF_DIE3,
	S_MANF_DIE4,
	S_MANF_DIE5,
	S_MANF_DIE6,
	S_TRCR1,
	S_TRCR2,
	S_TRCR_DIE1,
	S_TRCR_DIE2,
	S_TRCR_DIE3,
	S_TRCR_DIE4,
	S_TRCR_DIE5,
	S_TRCR_DIE6,
	S_TRCR_DIE7,
	S_DART,
	S_RFIRE1,
	S_RFIRE2,
	S_RFIRE3,
	S_RFIRE4,
	S_RBALL1,
	S_RBALL2,
	S_RBALL_DIE1,
	S_RBALL_DIE2,
	S_RBALL_DIE3,
	S_RBALL_DIE4,
	S_RBALL_DIE5,
	S_RBALL_DIE6,
	S_PUF21,
	S_PUF22,
	S_PUF23,
	S_PUF24,
	S_PUF25,
	S_PUF31,
	S_PUF32,
	S_PUF33,
	S_PUF34,
	S_PUF35,
	S_PUFF1,
	S_PUFF2,
	S_PUFF3,
	S_PUFF4,
	S_PUFF5,
	S_PUFF6,
	S_BLOOD1,
	S_BLOOD2,
	S_BLOOD3,
	S_BLOOD4,
	S_CORPSE,
	S_TFOG1,
	S_TFOG2,
	S_TFOG3,
	S_TFOG4,
	S_TFOG5,
	S_TFOG6,
	S_TFOG7,
	S_TFOG8,
	S_TFOG9,
	S_TFOG10,
	S_TFOG11,
	S_TFOG12,
	S_BFGEXP1,
	S_BFGEXP2,
	S_BFGEXP3,
	S_BFGEXP4,
	S_BFGEXP5,
	S_BFGEXP6,
	S_ARMOR1A,
	S_ARMOR1B,
	S_ARMOR2A,
	S_ARMOR2B,
	S_BONUS1A,
	S_BONUS1B,
	S_BONUS1C,
	S_BONUS1D,
	S_BONUS2A,
	S_BONUS2B,
	S_BONUS2C,
	S_BONUS2D,
	S_BONUS2E,
	S_BONUS2F,
	S_BKEY1,
	S_BKEY2,
	S_RKEY1,
	S_RKEY2,
	S_YKEY1,
	S_YKEY2,
	S_YSKULL1,
	S_YSKULL2,
	S_RSKULL1,
	S_RSKULL2,
	S_BSKULL1,
	S_BSKULL2,
	S_ARTIFACT1A,
	S_ARTIFACT1B,
	S_ARTIFACT1C,
	S_ARTIFACT1D,
	S_ARTIFACT1E,
	S_ARTIFACT1F,
	S_ARTIFACT1G,
	S_ARTIFACT1H,
	S_ARTIFACT2A,
	S_ARTIFACT2B,
	S_ARTIFACT2C,
	S_ARTIFACT2D,
	S_ARTIFACT2E,
	S_ARTIFACT2F,
	S_ARTIFACT2G,
	S_ARTIFACT2H,
	S_ARTIFACT3A,
	S_ARTIFACT3B,
	S_ARTIFACT3C,
	S_ARTIFACT3D,
	S_ARTIFACT3E,
	S_ARTIFACT3F,
	S_ARTIFACT3G,
	S_ARTIFACT3H,
	S_STIM,
	S_MEDI,
	S_SOUL1,
	S_SOUL2,
	S_SOUL3,
	S_SOUL4,
	S_SOUL5,
	S_SOUL6,
	S_PINV1,
	S_PINV2,
	S_PINV3,
	S_PINV4,
	S_PINV5,
	S_PINV6,
	S_PSTR,
	S_PINS1,
	S_PINS2,
	S_PINS3,
	S_PINS4,
	S_PINS5,
	S_PINS6,
	S_SUIT1,
	S_SUIT2,
	S_PMAP1,
	S_PMAP2,
	S_PMAP3,
	S_PMAP4,
	S_PVIS1,
	S_PVIS2,
	S_MEGA1,
	S_MEGA2,
	S_MEGA3,
	S_MEGA4,
	S_MEGA5,
	S_MEGA6,
	S_CLIP,
	S_AMMO,
	S_RCKT,
	S_BROK,
	S_CELL,
	S_CELP,
	S_SHEL,
	S_SBOX,
	S_BPAK,
	S_BFUG,
	S_CSAW,
	S_MGUN,
	S_LAUN,
	S_PLSM,
	S_SHOT,
	S_SHOT2,
	S_LSRG,
	S_PROP_FIRE1,
	S_PROP_FIRE2,
	S_PROP_FIRE3,
	S_PROP_FIRE4,
	S_PROP_FIRE5,
	S_CANDLE1,
	S_CANDLE2,
	S_BARREL,
	S_BARREL_DIE1,
	S_BARREL_DIE2,
	S_BARREL_DIE3,
	S_BARREL_DIE4,
	S_EXP1A,
	S_EXP1B,
	S_EXP1C,
	S_EXP1D,
	S_EXP1E,
	S_EXP2A,
	S_EXP2B,
	S_EXP2C,
	S_EXP2D,
	S_EXP2E,
	S_LAMP1,
	S_LAMP2,
	S_BTORCH1,
	S_BTORCH2,
	S_BTORCH3,
	S_BTORCH4,
	S_BTORCH5,
	S_YTORCH1,
	S_YTORCH2,
	S_YTORCH3,
	S_YTORCH4,
	S_YTORCH5,
	S_RTORCH1,
	S_RTORCH2,
	S_RTORCH3,
	S_RTORCH4,
	S_RTORCH5,
	S_POLELONG,
	S_POLESHORT,
	S_BFLAME1,
	S_BFLAME2,
	S_BFLAME3,
	S_BFLAME4,
	S_BFLAME5,
	S_RFLAME1,
	S_RFLAME2,
	S_RFLAME3,
	S_RFLAME4,
	S_RFLAME5,
	S_YFLAME1,
	S_YFLAME2,
	S_YFLAME3,
	S_YFLAME4,
	S_YFLAME5,
	S_GORE1,
	S_GORE2,
	S_GORE3,
	S_GORE4,
	S_GORETWITCH1,
	S_GORETWITCH2,
	S_GORE5,
	S_GORE6,
	S_GORE7,
	S_GORE8,
	S_GOREHOOK1,
	S_GORECAGE,
	S_GOREHOOK2,
	S_GOREHOOK3,
	S_GOREMACE1,
	S_GOREHEAD1,
	S_GOREHEAD2,
	S_GORE9,
	S_GARGOYLE1,
	S_GARGOYLE2,
	S_TECHLAMP1,
	S_TECHLAMP2,
	S_TREE3,
	S_TREE2,
	S_TREE1,
	S_GORE10,
	S_GOREMACE,
	S_GORE11,
	S_GOREHEAD3,
	S_GORE12,
	S_SAWA,
	S_SAWB,
	S_SAWDOWN,
	S_SAWUP,
	S_SAW1,
	S_SAW2,
	S_SAW3,
	S_PUNCH,
	S_PUNCHDOWN,
	S_PUNCHUP,
	S_PUNCH1,
	S_PUNCH2,
	S_PUNCH3,
	S_PUNCH4,
	S_PUNCH5,
	S_PISTOL,
	S_PISTOLDOWN,
	S_PISTOLUP,
	S_PISTOL1,
	S_PISTOL2,
	S_PISTOL3,
	S_PISTOL4,
	S_PISTOL5,
	S_PISTOLFLASH,
	S_SGUN,
	S_SGUNDOWN,
	S_SGUNUP,
	S_SGUN1,
	S_SGUN2,
	S_SGUN3,
	S_SGUN4,
	S_SGUN5,
	S_SGUN6,
	S_SGUNFLASH,
	S_SSG,
	S_SSGDOWN,
	S_SSGUP,
	S_SSG1,
	S_SSG2,
	S_SSG3,
	S_SSG4,
	S_SSG5,
	S_SSG6,
	S_SSG7,
	S_SSG8,
	S_SSG9,
	S_SSG10,
	S_SSGFLASH,
	S_CHAING,
	S_CHAINGDOWN,
	S_CHAINGUP,
	S_CHAING1,
	S_CHAING2,
	S_CHAING3,
	S_CHAINGLIGHT1,
	S_CHAINGLIGHT2,
	S_ROCKETL,
	S_ROCKETLDOWN,
	S_ROCKETLUP,
	S_ROCKETL1,
	S_ROCKETL2,
	S_ROCKETL3,
	S_ROCKETLLIGHT1,
	S_ROCKETLLIGHT2,
	S_ROCKETLLIGHT3,
	S_ROCKETLLIGHT4,
	S_PLASMAG,
	S_PLASMAGDOWN,
	S_PLASMAGUP1,
	S_PLASMAGUP2,
	S_PLASMAG1,
	S_PLASMAG2,
	S_PLASMAG3,
	S_PLASMAGANIM1,
	S_PLASMAGANIM2,
	S_PLASMAGANIM3,
	S_BFG,
	S_BFGDOWN,
	S_BFGUP,
	S_BFG1,
	S_BFG2,
	S_BFG3,
	S_BFG4,
	S_BFGLIGHT1,
	S_BFGLIGHT2,
	S_BFGLIGHT3,
	S_LASERG,
	S_LASERGDOWN,
	S_LASERGUP,
	S_LASERG1,
	S_LASERG2,
	S_LASERGLIGHT,
	S_NAILG,
	S_NAILGDOWN,
	S_NAILGUP,
	S_NAILG1,
	S_NAILG2,
	S_NAILG3,
	S_NAILG4,
	S_NAILG5,
	S_NAILG6,
	S_NAILG7,
	S_NAILG8,
	S_NAILG9,
	S_NAILG10,
	S_NAILG11,
	S_NAILG12,
	S_NAILSAMMO,
	S_NLGP,
	S_LAMP3,
	S_LAMP4,
	S_BWTORCH1,
	S_BWTORCH2,
	S_BWTORCH3,
	S_BWTORCH4,
	S_YWTORCH1,
	S_YWTORCH2,
	S_YWTORCH3,
	S_YWTORCH4,
	S_RWTORCH1,
	S_RWTORCH2,
	S_RWTORCH3,
	S_RWTORCH4,
	S_BFLM1,
	S_BFLM2,
	S_BFLM3,
	S_BFLM4,
	S_RFLM1,
	S_RFLM2,
	S_RFLM3,
	S_RFLM4,
	S_YFLM1,
	S_YFLM2,
	S_YFLM3,
	S_YFLM4,
	S_MISC5,
	S_MISC6,
	S_MISC7,
	S_MISC8_1,
	S_MISC9_1,
	S_MISC10,
	S_MISC11_1,
	S_MISC11_2,
	S_MISC12_1,
	S_MISC12_2,
	S_MISC13_1,
	S_MISC13_2,
	S_MISC14,
	S_MISC17,
	S_MISC18,
	S_MISC19,
	S_MISC20,
	S_MISC21_1,
	S_MISC21_2,
	S_MISC22,
	S_MISC23,
	S_MISC24,
	S_MISC28,
	S_MISC29,
	S_MISC31,
	S_MISC32,
	S_MISC27,
	S_MISC36,
	S_MISC37,
	S_MISC38,
	S_MISC45,
	S_MISC41,
	S_MISC26,
	S_MISC46,
	S_MISC47_1,
	S_MISC47_2,
	S_MISC47_3,
	S_MISC47_4,
	S_MISC30_1,
	S_MISC30_2,
	S_MISC30_3,
	S_MISC30_4,
	S_SKON1,
	S_SKON2,
	S_SKON3,
	S_SKON4,
	S_SKON5,
	S_SKON6,
	S_SKON7,
	S_SKON8,
	S_SKON9,
	S_SKON10,
	S_SKON11,
	S_BRMT1,
	S_BRMT2,
	S_BRMT3,
	S_FRCK1,
	S_FRCK2,
	S_FRCK3,
	S_FRCK4,
	S_64SG1,
	S_64SG2,
	S_BSTK1,
	S_CANDLE3,
	S_CANDLE4,
	S_CANDLE5,
	S_CANDLE6,
	S_CANDLE7,
	S_CANDLE8,
	S_CANDLE9,
	S_CANDLE10,
	S_FACE1,
	S_HDB61,
	S_HDB62,
	S_NBAR1,
	S_NBAR2,
	S_NBAR3,
	S_NBAR4,
	S_NBAR5,
	S_NPIL1,
	S_NPIL2,
	S_NPIL3,
	S_NPIL4,
	S_NPIL5,
	S_NPIL6,
	S_NPIL7,
	S_NPL11,
	S_NPL12,
	S_NPL13,
	S_NPL21,
	S_NPL31,
	S_ORBN1,
	S_ORBB1,
	S_ORBR1,
	S_ORBY1,
	S_NPL41,
	S_TLMP1,
	S_TLMP2,
	S_TLMP3,
	S_TLP11,
	S_DGOT1,
	S_HANG1,
	S_HANG2,
	S_VEST1,
	S_QDMG1,
	S_QDMG2,
	S_QDMG3,
	S_QDMG4,
	S_QDMG5,
	S_QDMG6,
	S_CPOS_STND,
	S_CPOS_STND2,
	S_CPOS_RUN1,
	S_CPOS_RUN2,
	S_CPOS_RUN3,
	S_CPOS_RUN4,
	S_CPOS_RUN5,
	S_CPOS_RUN6,
	S_CPOS_RUN7,
	S_CPOS_RUN8,
	S_CPOS_ATK1,
	S_CPOS_ATK2,
	S_CPOS_ATK3,
	S_CPOS_ATK4,
	S_CPOS_PAIN,
	S_CPOS_PAIN2,
	S_CPOS_DIE1,
	S_CPOS_DIE2,
	S_CPOS_DIE3,
	S_CPOS_DIE4,
	S_CPOS_DIE5,
	S_CPOS_DIE6,
	S_CPOS_DIE7,
	S_CPOS_XDIE1,
	S_CPOS_XDIE2,
	S_CPOS_XDIE3,
	S_CPOS_XDIE4,
	S_CPOS_XDIE5,
	S_CPOS_XDIE6,
	S_CPOS_RAISE1,
	S_CPOS_RAISE2,
	S_CPOS_RAISE3,
	S_CPOS_RAISE4,
	S_CPOS_RAISE5,
	S_CPOS_RAISE6,
	S_CPOS_RAISE7,
	S_SKEL_STND,
	S_SKEL_STND2,
	S_SKEL_RUN1,
	S_SKEL_RUN2,
	S_SKEL_RUN3,
	S_SKEL_RUN4,
	S_SKEL_RUN5,
	S_SKEL_RUN6,
	S_SKEL_RUN7,
	S_SKEL_RUN8,
	S_SKEL_RUN9,
	S_SKEL_RUN10,
	S_SKEL_RUN11,
	S_SKEL_RUN12,
	S_SKEL_FIST1,
	S_SKEL_FIST2,
	S_SKEL_FIST3,
	S_SKEL_FIST4,
	S_SKEL_MISS1,
	S_SKEL_MISS2,
	S_SKEL_MISS3,
	S_SKEL_MISS4,
	S_SKEL_PAIN,
	S_SKEL_PAIN2,
	S_SKEL_DIE1,
	S_SKEL_DIE2,
	S_SKEL_DIE3,
	S_SKEL_DIE4,
	S_SKEL_DIE5,
	S_SKEL_DIE6,
	S_SKEL_RAISE1,
	S_SKEL_RAISE2,
	S_SKEL_RAISE3,
	S_SKEL_RAISE4,
	S_SKEL_RAISE5,
	S_SKEL_RAISE6,
	S_ARCR1,
	S_ARCR2,
	S_POW1_DIE1,
	S_POW1_DIE2,
	S_POW1_DIE3,
	S_POW1_DIE4,
	S_POW1_DIE5,
	S_POW1_DIE6,
	S_POW1_DIE7,
	S_POW1_DIE8,
	S_SPID_STND,
	S_SPID_STND2,
	S_SPID_RUN1,
	S_SPID_RUN2,
	S_SPID_RUN3,
	S_SPID_RUN4,
	S_SPID_RUN5,
	S_SPID_RUN6,
	S_SPID_RUN7,
	S_SPID_RUN8,
	S_SPID_ATK1,
	S_SPID_ATK2,
	S_SPID_ATK3,
	S_SPID_ATK4,
	S_SPID_ATK5,
	S_SPID_ATK6,
	S_SPID_PAIN,
	S_SPID_PAIN2,
	S_SPID_DIE1,
	S_SPID_DIE2,
	S_SPID_DIE3,
	S_SPID_DIE4,
	S_SPID_DIE5,
	S_SPID_DIE6,
	S_TEST_STND,
	S_TEST_STND2,
	S_TEST_STND3,
	S_TEST_STND4,
	S_TEST_RUN1,
	S_TEST_RUN2,
	S_TEST_RUN3,
	S_TEST_RUN4,
	S_TEST_RUN5,
	S_TEST_RUN6,
	S_TEST_RUN7,
	S_TEST_RUN8,
	S_TEST_ATK1,
	S_TEST_ATK2,
	S_TEST_ATK3,
	S_TEST_ATK4,
	S_TEST_PAIN,
	S_TEST_PAIN2,
	S_TEST_PAIN3,
	S_TEST_DIE1,
	S_TEST_DIE2,
	S_TEST_DIE3,
	S_TEST_DIE4,
	S_TEST_DIE5,
	S_TEST_DIE6,
	S_TEST_RAISE1,
	S_TEST_RAISE2,
	S_TEST_RAISE3,
	S_TEST_RAISE4,
	S_TEST_RAISE5,
	S_TEST_RAISE6,
	S_A64A_STND,
	S_A64A_RUN1,
	S_A64A_RUN2,
	S_A64A_RUN3,
	S_A64A_RUN4,
	S_A64A_RUN5,
	S_A64A_RUN6,
	S_A64A_RUN7,
	S_A64A_RUN8,
	S_A64A_ATK1,
	S_A64A_ATK2,
	S_A64A_ATK3,
	S_A64A_ATK4,
	S_A64A_ATK5,
	S_A64A_ATK6,
	S_A64A_PAIN,
	S_A64A_DIE1,
	S_A64A_DIE2,
	S_A64A_DIE3,
	S_A64A_DIE4,
	S_A64A_DIE5,
	S_A64A_DIE6,
	S_A64A_DIE7,
	S_A64A_DIE8,
	S_A64A_DIE9,
	S_GECH_STND,
	S_GECH_STND2,
	S_GECH_RUN1,
	S_GECH_RUN2,
	S_GECH_RUN3,
	S_GECH_RUN4,
	S_GECH_RUN5,
	S_GECH_RUN6,
	S_GECH_RUN7,
	S_GECH_RUN8,
	S_GECH_MELEE1,
	S_GECH_MELEE2,
	S_GECH_MELEE3,
	S_GECH_ATK1,
	S_GECH_ATK2,
	S_GECH_ATK3,
	S_GECH_PAIN1,
	S_GECH_PAIN2,
	S_GECH_DIE1,
	S_GECH_DIE2,
	S_GECH_DIE3,
	S_GECH_DIE4,
	S_GECH_DIE5,
	S_GECH_DIE6,
	S_GECH_RAISE1,
	S_GECH_RAISE2,
	S_GECH_RAISE3,
	S_GECH_RAISE4,
	S_GECH_RAISE5,
	S_DKHL_STND,
	S_DKHL_STND2,
	S_DKHL_RUN1,
	S_DKHL_RUN2,
	S_DKHL_RUN3,
	S_DKHL_RUN4,
	S_DKHL_RUN5,
	S_DKHL_RUN6,
	S_DKHL_RUN7,
	S_DKHL_RUN8,
	S_DKHL_RUN9,
	S_DKHL_RUN10,
	S_DKHL_RUN11,
	S_DKHL_RUN12,
	S_DKHL_ATK1,
	S_DKHL_ATK2,
	S_DKHL_ATK3,
	S_DKHL_ATK4,
	S_DKHL_ATK5,
	S_DKHL_ATK6,
	S_DKHL_ATK7,
	S_DKHL_PAIN,
	S_DKHL_PAIN2,
	S_DKHL_DIE1,
	S_DKHL_DIE2,
	S_DKHL_DIE3,
	S_DKHL_DIE4,
	S_DKHL_DIE5,
	S_DKHL_DIE6,
	S_DKHL_RAISE1,
	S_DKHL_RAISE2,
	S_DKHL_RAISE3,
	S_DKHL_RAISE4,
	S_DKHL_RAISE5,
	S_DKHL_RAISE6,
	S_DKHF1,
	S_DKHF2,
	S_DKHF3,
	S_DKHF_DIE1,
	S_DKHF_DIE2,
	S_DKHF_DIE3,
	S_DKHF_DIE4,
	S_DKHF_DIE5,
	S_DKHF_DIE6,
	S_BR64_STND,
	S_BR64_STND2,
	S_BR64_RUN1,
	S_BR64_RUN2,
	S_BR64_RUN3,
	S_BR64_RUN4,
	S_BR64_RUN5,
	S_BR64_RUN6,
	S_BR64_RUN7,
	S_BR64_RUN8,
	S_BR64_MELEE1,
	S_BR64_MELEE2,
	S_BR64_MELEE3,
	S_BR64_ATK,
	S_BR64_ATK1_1,
	S_BR64_ATK2_1,
	S_BR64_ATK3_1,
	S_BR64_ATK1_2,
	S_BR64_ATK2_2,
	S_BR64_ATK3_2,
	S_BR64_PAIN,
	S_BR64_PAIN2,
	S_BR64_DIE1,
	S_BR64_DIE2,
	S_BR64_DIE3,
	S_BR64_DIE4,
	S_BR64_DIE5,
	S_BR64_DIE6,
	S_BR64_DIE7,
	S_BR64_DIE8,
	S_BR64_DIE9,
	S_BR64_DIE10,
	S_BR64_DIE11,
	S_BR64_RAISE1,
	S_BR64_RAISE2,
	S_BR64_RAISE3,
	S_BR64_RAISE4,
	S_BR64_RAISE5,
	S_BR64_RAISE6,
	S_BR64_RAISE7,
	S_BR64_RAISE8,
	S_BR64_RAISE9,
	S_BR64_RAISE10,
	S_BR64_RAISE11,
	S_BQ641,
	S_BQ642,
	S_BQ643,
	S_BQ64_DIE1,
	S_BQ64_DIE2,
	S_BQ64_DIE3,
	S_BQ64_DIE4,
	S_VILE_STND,
	S_VILE_STND2,
	S_VILE_STND3,
	S_VILE_STND4,
	S_VILE_RUN1,
	S_VILE_RUN2,
	S_VILE_RUN3,
	S_VILE_RUN4,
	S_VILE_RUN5,
	S_VILE_RUN6,
	S_VILE_RUN7,
	S_VILE_RUN8,
	S_VILE_RUN9,
	S_VILE_RUN10,
	S_VILE_RUN11,
	S_VILE_RUN12,
	S_VILE_ATK1,
	S_VILE_ATK2,
	S_VILE_ATK3,
	S_VILE_ATK4,
	S_VILE_ATK5,
	S_VILE_ATK6,
	S_VILE_ATK7,
	S_VILE_ATK8,
	S_VILE_ATK9,
	S_VILE_ATK10,
	S_VILE_ATK11,
	S_VILE_ATK12,
	S_VILE_HEAL1,
	S_VILE_HEAL2,
	S_VILE_HEAL3,
	S_VILE_PAIN,
	S_VILE_PAIN2,
	S_VILE_DIE1,
	S_VILE_DIE2,
	S_VILE_DIE3,
	S_VILE_DIE4,
	S_VILE_DIE5,
	S_VILE_DIE6,
	S_VILE_DIE7,
	S_FIRE1,
	S_FIRE2,
	S_FIRE3,
	S_FIRE4,
	S_FIRE5,
	S_FIRE6,
	S_FIRE7,
	S_FIRE8,
	S_FIRE9,
	S_FIRE10,
	S_FIRE11,
	S_FIRE12,
	S_FIRE13,
	S_FIRE14,
	S_FIRE15,
	S_FIRE16,
	S_FIRE17,
	S_FIRE18,
	S_FIRE19,
	S_FIRE20,
	S_FIRE21,
	S_FIRE22,
	S_FIRE23,
	S_FIRE24,
	S_FIRE25,
	S_FIRE26,
	S_FIRE27,
	S_FIRE28,
	S_FIRE29,
	S_FIRE30,
	S_MPOS_STND,
	S_MPOS_STND2,
	S_MPOS_RUN1,
	S_MPOS_RUN2,
	S_MPOS_RUN3,
	S_MPOS_RUN4,
	S_MPOS_RUN5,
	S_MPOS_RUN6,
	S_MPOS_RUN7,
	S_MPOS_RUN8,
	S_MPOS_MELEE1,
	S_MPOS_MELEE2,
	S_MPOS_PAIN,
	S_MPOS_PAIN2,
	S_MPOS_DIE1,
	S_MPOS_DIE2,
	S_MPOS_DIE3,
	S_MPOS_DIE4,
	S_MPOS_DIE5,
	S_MPOS_RAISE1,
	S_MPOS_RAISE2,
	S_MPOS_RAISE3,
	S_MPOS_RAISE4,
	S_MPOS_RAISE5,
	S_POSS3_STND,
	S_POSS3_STND2,
	S_POSS3_RUN1,
	S_POSS3_RUN2,
	S_POSS3_RUN3,
	S_POSS3_RUN4,
	S_POSS3_RUN5,
	S_POSS3_RUN6,
	S_POSS3_RUN7,
	S_POSS3_RUN8,
	S_POSS3_ATK1,
	S_POSS3_ATK2,
	S_POSS3_ATK3,
	S_POSS3_PAIN,
	S_POSS3_PAIN2,
	S_POSS3_DIE1,
	S_POSS3_DIE2,
	S_POSS3_DIE3,
	S_POSS3_DIE4,
	S_POSS3_DIE5,
	S_POSS3_XDIE1,
	S_POSS3_XDIE2,
	S_POSS3_XDIE3,
	S_POSS3_XDIE4,
	S_POSS3_XDIE5,
	S_POSS3_XDIE6,
	S_POSS3_XDIE7,
	S_POSS3_XDIE8,
	S_POSS3_XDIE9,
	S_POSS3_RAISE1,
	S_POSS3_RAISE2,
	S_POSS3_RAISE3,
	S_POSS3_RAISE4,
	S_POSS3_RAISE5,
	NUMSTATES
} statenum_t;

typedef struct
{
	spritenum_t sprite;
	int			info_frame;
	int			info_tics;
	actionf_t	action;
	statenum_t	nextstate;
	int			misc1;
	int			misc2;
} state_t;

typedef enum {
	MT_PLAYER,                // 0
	MT_PLAYERBOT1,            // 1
	MT_PLAYERBOT2,            // 2
	MT_PLAYERBOT3,            // 3
	MT_DEMON1,                // 4
	MT_DEMON2,                // 5
	MT_MANCUBUS,            // 6
	MT_POSSESSED1,            // 7
	MT_POSSESSED2,            // 8
	MT_IMP1,                // 9
	MT_IMP2,                // 10
	MT_CACODEMON,            // 11
	MT_BRUISER1,            // 12
	MT_BRUISER2,            // 13
	MT_SKULL,                // 14
	MT_BABY,                // 15
	MT_CYBORG,                // 16
	MT_CYBORG_TITLE,        // 17
	MT_PAIN,                // 18
	MT_RESURRECTOR,            // 19
	MT_CAMERA,                // 20
	MT_DEST_TELEPORT,        // 21
	MT_DEST_PROJECTILE,        // 22
	MT_FAKEITEM,            // 23
	MT_LASERMARKER,            // 24
	MT_PROJ_ROCKET,            // 25
	MT_PROJ_PLASMA,            // 26
	MT_PROJ_BFG,            // 27
	MT_PROJ_LASER,            // 28
	MT_PROJ_IMP1,            // 29
	MT_PROJ_IMP2,            // 30
	MT_PROJ_HEAD,            // 31
	MT_PROJ_BRUISER1,        // 32
	MT_PROJ_BRUISER2,        // 33
	MT_PROJ_BABY,            // 34
	MT_PROJ_FATSO,            // 35
	MT_PROJ_TRACER,            // 36
	MT_PROJ_DART,            // 37
	MT_PROJ_RECTFIRE,        // 38
	MT_PROJ_RECT,            // 39
	MT_SMOKE_GRAY,            // 40
	MT_SMOKE_RED,            // 41
	MT_SMOKE_SMALL,            // 42
	MT_BLOOD,                // 43
	MT_GIB_CRUSHED,            // 44
	MT_TELEPORTFOG,            // 45
	MT_BFGSPREAD,            // 46
	MT_ITEM_ARMOR1,            // 47
	MT_ITEM_ARMOR2,            // 48
	MT_ITEM_BONUSHEALTH,    // 49
	MT_ITEM_BONUSARMOR,        // 50
	MT_ITEM_BLUECARDKEY,    // 51
	MT_ITEM_REDCARDKEY,        // 52
	MT_ITEM_YELLOWCARDKEY,    // 53
	MT_ITEM_YELLOWSKULLKEY,    // 54
	MT_ITEM_REDSKULLKEY,    // 55
	MT_ITEM_BLUESKULLKEY,    // 56
	MT_ITEM_ARTIFACT1,        // 57
	MT_ITEM_ARTIFACT2,        // 58
	MT_ITEM_ARTIFACT3,        // 59
	MT_ITEM_STIMPACK,        // 60
	MT_ITEM_MEDKIT,            // 61
	MT_ITEM_SOULSPHERE,        // 62
	MT_ITEM_INVULSPHERE,    // 63
	MT_ITEM_BERSERK,        // 64
	MT_ITEM_INVISSPHERE,    // 65
	MT_ITEM_RADSPHERE,        // 66
	MT_ITEM_AUTOMAP,        // 67
	MT_ITEM_PVIS,            // 68
	MT_ITEM_MEGASPHERE,        // 69
	MT_AMMO_CLIP,            // 70
	MT_AMMO_CLIPBOX,        // 71
	MT_AMMO_ROCKET,            // 72
	MT_AMMO_ROCKETBOX,        // 73
	MT_AMMO_CELL,            // 74
	MT_AMMO_CELLPACK,        // 75
	MT_AMMO_SHELL,            // 76
	MT_AMMO_SHELLBOX,        // 77
	MT_AMMO_BACKPACK,        // 78
	MT_WEAP_BFG,            // 79
	MT_WEAP_CHAINSAW,        // 80
	MT_WEAP_CHAINGUN,        // 81
	MT_WEAP_LAUNCHER,        // 82
	MT_WEAP_PLASMA,            // 83
	MT_WEAP_SHOTGUN,        // 84
	MT_WEAP_SSHOTGUN,        // 85
	MT_WEAP_LCARBINE,        // 86
	MT_PROP_FIRE,            // 87
	MT_PROP_CANDLE,            // 88
	MT_PROP_BARREL,            // 89
	MT_EXPLOSION1,            // 90
	MT_EXPLOSION2,            // 91
	MT_PROP_TECHLAMP1,        // 92
	MT_PROP_TECHLAMP2,        // 93
	MT_PROP_TORCHBLUE,        // 94
	MT_PROP_TORCHYELLOW,    // 95
	MT_PROP_TORCHRED,        // 96
	MT_PROP_POLEBASELONG,    // 97
	MT_PROP_POLEBASESHORT,    // 98
	MT_PROP_FIREBLUE,        // 99
	MT_PROP_FIRERED,        // 100
	MT_PROP_FIREYELLOW,        // 101
	MT_GIB_MEATSTICK,        // 102
	MT_GIB_MEATHANG,        // 103
	MT_GIB_TORSOHANG,        // 104
	MT_GIB_RIBFLOOR,        // 105
	MT_GIB_TWITCHFLOOR,        // 106
	MT_GIB_BLOODPOOL,        // 107
	MT_GIB_BONEFLOOR,        // 108
	MT_GIB_MEATRIBFLOOR,    // 109
	MT_GIB_MEATRIBCAGE,        // 110
	MT_GIB_CHAINHOOK,        // 111
	MT_GIB_HANGCAGE,        // 112
	MT_GIB_CHAINPINSER,        // 113
	MT_GIB_CHAINARM,        // 114
	MT_GIB_HANGMACE1,        // 115
	MT_GIB_HEADSTICK1,        // 116
	MT_GIB_HEADSTICK2,        // 117
	MT_GIB_DOUBLEMEATSTICK,    // 118
	MT_PROP_STATUE1,        // 119
	MT_PROP_STATUE2,        // 120
	MT_PROP_TECHPOLELONG,    // 121
	MT_PROP_TECHPOLESHORT,    // 122
	MT_PROP_TREESTUMPSMALL,    // 123
	MT_PROP_TREESTUMPLARGE,    // 124
	MT_PROP_TREE,            // 125
	MT_PROP_BLOODYPOLE,        // 126
	MT_GIB_HANGMACE2,        // 127
	MT_GIB_HANGWHITEMEAT,    // 128
	MT_GIB_HANGHEAD,        // 129
	MT_GIB_HANGRIB,            // 130
	MT_MISC2,
	MT_MISC3,
	MT_MISC4,
	MT_MISC5,
	MT_MISC6,
	MT_MISC7,
	MT_MISC8,
	MT_MISC9,
	MT_MISC10,
	MT_MISC11,
	MT_MISC12,
	MT_MISC13,
	MT_MISC14,
	MT_MISC15,
	MT_MISC16,
	MT_MISC17,
	MT_MISC18,
	MT_MISC19,
	MT_MISC20,
	MT_MISC21,
	MT_MISC22,
	MT_MISC23,
	MT_MISC24,
	MT_MISC25,
	MT_MISC26,
	MT_MISC27,
	MT_MISC28,
	MT_MISC29,
	MT_MISC30,
	MT_MISC31,
	MT_MISC32,
	MT_MISC33,
	MT_MISC34,
	MT_MISC35,
	MT_MISC36,
	MT_MISC37,
	MT_MISC38,
	MT_MISC39,
	MT_MISC40,
	MT_MISC41,
	MT_MISC42,
	MT_MISC43,
	MT_MISC44,
	MT_MISC45,
	MT_MISC46,
	MT_MISC47,
	MT_MISC48,
	MT_MISC49,
	MT_MISC50,
	MT_MISC51,
	MT_MISC52,
	MT_MISC53,
	MT_MISC54,
	MT_MISC55,
	MT_MISC56,
	MT_MISC57,
	MT_MISC58,
	MT_MISC59,
	MT_MISC60,
	MT_MISC61,
	MT_MISC62,
	MT_MISC63,
	MT_MISC64,
	MT_MISC65,
	MT_MISC66,
	MT_MISC67,
	MT_MISC68,
	MT_MISC69,
	MT_MISC70,
	MT_MISC71,
	MT_MISC72,
	MT_MISC73,
	MT_MISC74,
	MT_MISC75,
	MT_MISC76,
	MT_MISC77,
	MT_MISC78,
	MT_MISC79,
	MT_MISC80,
	MT_MISC81,
	MT_MISC82,
	MT_MISC83,
	MT_CHAINGUY,
	MT_UNDEAD,
	MT_PROJ_UNDEAD,
	MT_SPIDER,
	MT_TESTA0,
	MT_ANNIHILATOR,
	MT_HELLHOUND,
	MT_DUKEOFHELL,
	MT_PROJ_DUKEOFHELL,
	MT_BRUISERDEMON,
	MT_PROJ_BRUISERDEMON1,
	MT_VILE,
	MT_FIRE,
	MT_MELEEZOMBIE,
	MT_SSGZOMBIE,
	MT_ITEM_QUADDAMAGE,
	MT_PROJ_ROCKETQUADDAMAGE,
	MT_PROJ_PLASMAQUADDAMAGE,
	MT_PROJ_BFGQUADDAMAGE,
	MT_PROJ_NAILQUADDAMAGE,
	MT_WEAP_NAILGUN,
	MT_AMMO_NAILS,
	MT_PROJ_NAIL,
	NUMMOBJTYPES
} mobjtype_t;

typedef struct {
	int    doomednum;
	int    spawnstate;
	int    spawnhealth;
	int    seestate;
	int    seesound;
	int    reactiontime;
	int    attacksound;
	int    painstate;
	int    painchance;
	int    painsound;
	int    meleestate;
	int    missilestate;
	int    deathstate;
	int    xdeathstate;
	int    deathsound;
	int    speed;
	int    radius;
	int    height;
	int    mass;
	int    damage;
	int    activesound;
	int    flags;
	int    palette;
	int    alpha;
	int	   raisestate;
} mobjinfo_t;

extern state_t states[NUMSTATES];
extern char* sprnames[NUMSPRITES + 1];

extern mobjinfo_t mobjinfo[NUMMOBJTYPES];

#endif
