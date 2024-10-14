/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) bcm56880_a0_hna_6_5_30_3_0_sf_match_id_info.yml
 * for device bcm56880_a0 and variant hna_6_5_30_3_0.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 *
 ****************************************************************/

#ifndef BCM56880_A0_HNA_6_5_30_3_0_BCMPKT_RXPMD_MATCH_ID_DEFS_H
#define BCM56880_A0_HNA_6_5_30_3_0_BCMPKT_RXPMD_MATCH_ID_DEFS_H

#include <bcmpkt/bcmpkt_rxpmd_match_id.h>

/*!
 * \brief Get the Match ID DataBase information.
 *
 * \retval bcmpkt_rxpmd_match_id_db_info_t Match ID DataBase information.
*/
extern bcmpkt_rxpmd_match_id_db_info_t *
    bcm56880_a0_hna_6_5_30_3_0_rxpmd_match_id_db_info_get(void);

/*!
 * \brief Get the Match ID Mapping information.
 *
 * \retval bcmpkt_rxpmd_match_id_map_info_t Match ID Mapping information.
*/
extern bcmpkt_rxpmd_match_id_map_info_t *
    bcm56880_a0_hna_6_5_30_3_0_rxpmd_match_id_map_info_get(void);

/*!
  \name RXPMD Match IDs
*/
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ETAG  0
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ITAG  1
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_L2  2
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_NONE  3
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_OTAG  4
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_SNAP_OR_LLC  5
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_VNTAG  6
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ARP  7
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_1  8
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_2  9
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_BFD  10
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ESP_EXT  11
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE  12
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_1  13
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_2  14
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GPE  15
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE  16
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_CHKSUM  17
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_KEY  18
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_ROUT  19
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_SEQ  20
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ICMP  21
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IFA_METADATA  22
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IGMP  23
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV4  24
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV6  25
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS0  26
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS1  27
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS2  28
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS3  29
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS4  30
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS5  31
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS6  32
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_ACH  33
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_CW  34
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_NONE  35
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_P_1588  36
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_RARP  37
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES  38
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES  39
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UDP  40
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3  41
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4  42
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5  43
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_VXLAN  44
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_LOOPBACK  45
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_NONE  46
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ETAG  47
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ITAG  48
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_L2  49
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_NONE  50
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_OTAG  51
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_SNAP_OR_LLC  52
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_VNTAG  53
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP  54
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_1  55
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_2  56
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_BFD  57
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ESP_EXT  58
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE  59
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_1  60
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_2  61
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GPE  62
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE  63
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_CHKSUM  64
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_KEY  65
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_ROUT  66
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_SEQ  67
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP  68
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IFA_METADATA  69
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IGMP  70
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4  71
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6  72
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS0  73
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS1  74
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS2  75
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS3  76
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS4  77
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS5  78
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS6  79
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_ACH  80
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_CW  81
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE  82
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_P_1588  83
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP  84
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES  85
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES  86
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP  87
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3  88
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4  89
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5  90
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN  91
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ETAG  92
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ITAG  93
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_L2  94
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_NONE  95
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_OTAG  96
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC  97
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_VNTAG  98
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ARP  99
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1  100
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2  101
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_BFD  102
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT  103
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE  104
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1  105
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2  106
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ICMP  107
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IFA_METADATA  108
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IGMP  109
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV4  110
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV6  111
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_NONE  112
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_P_1588  113
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_RARP  114
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES  115
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES  116
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UDP  117
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3  118
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4  119
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5  120
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ETAG  121
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ITAG  122
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_L2  123
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_NONE  124
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_OTAG  125
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC  126
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_VNTAG  127
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ARP  128
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1  129
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2  130
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_BFD  131
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT  132
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE  133
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1  134
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2  135
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GPE  136
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE  137
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM  138
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY  139
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT  140
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ  141
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ICMP  142
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA  143
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IGMP  144
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV4  145
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV6  146
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0  147
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1  148
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2  149
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3  150
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4  151
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5  152
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6  153
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH  154
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW  155
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_NONE  156
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_P_1588  157
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_RARP  158
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES  159
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES  160
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UDP  161
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3  162
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4  163
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5  164
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN  165
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_LOOPBACK  166
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_NONE  167
#define BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_COUNT  168

#define BCM56880_A0_HNA_6_5_30_3_0_BCMPKT_RXPMD_MATCH_ID_FIELD_NAME_MAP_INIT \
    {"EGRESS_PKT_FWD_L2_HDR_ETAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ETAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_ITAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ITAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_L2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_L2}, \
    {"EGRESS_PKT_FWD_L2_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_NONE}, \
    {"EGRESS_PKT_FWD_L2_HDR_OTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_OTAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_SNAP_OR_LLC", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_SNAP_OR_LLC}, \
    {"EGRESS_PKT_FWD_L2_HDR_VNTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_VNTAG}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ARP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_1}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_2}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_BFD", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_BFD}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ESP_EXT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ESP_EXT}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_1}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_2}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GPE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_CHKSUM", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_CHKSUM}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_KEY", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_KEY}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_ROUT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_ROUT}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_SEQ", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_SEQ}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ICMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ICMP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IFA_METADATA", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IFA_METADATA}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IGMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IGMP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IPV4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV4}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IPV6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV6}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS0", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS0}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS1}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS2}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS3}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS4}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS5}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS6}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS_ACH", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_ACH}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS_CW", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_CW}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_NONE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_P_1588", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_P_1588}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_RARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_RARP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UDP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UDP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_VXLAN", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_VXLAN}, \
    {"EGRESS_PKT_SYS_HDR_LOOPBACK", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_LOOPBACK}, \
    {"EGRESS_PKT_SYS_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_NONE}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_ETAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ETAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_ITAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ITAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_L2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_L2}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_NONE}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_OTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_OTAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_SNAP_OR_LLC", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_SNAP_OR_LLC}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_VNTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_VNTAG}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_1}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_2}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_BFD", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_BFD}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ESP_EXT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ESP_EXT}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_1}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_2}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GPE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_CHKSUM", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_CHKSUM}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_KEY", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_KEY}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_ROUT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_ROUT}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_SEQ", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_SEQ}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IFA_METADATA", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IFA_METADATA}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IGMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IGMP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS0", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS0}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS1}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS2}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS3}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS4}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS5}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS6}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_ACH", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_ACH}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_CW", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_CW}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_P_1588", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_P_1588}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN}, \
    {"INGRESS_PKT_INNER_L2_HDR_ETAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ETAG}, \
    {"INGRESS_PKT_INNER_L2_HDR_ITAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ITAG}, \
    {"INGRESS_PKT_INNER_L2_HDR_L2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_L2}, \
    {"INGRESS_PKT_INNER_L2_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_NONE}, \
    {"INGRESS_PKT_INNER_L2_HDR_OTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_OTAG}, \
    {"INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC}, \
    {"INGRESS_PKT_INNER_L2_HDR_VNTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_VNTAG}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ARP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_BFD", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_BFD}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ICMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ICMP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IFA_METADATA", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IFA_METADATA}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IGMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IGMP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IPV4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV4}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IPV6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV6}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_NONE}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_P_1588", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_P_1588}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_RARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_RARP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UDP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UDP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5}, \
    {"INGRESS_PKT_OUTER_L2_HDR_ETAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ETAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_ITAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ITAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_L2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_L2}, \
    {"INGRESS_PKT_OUTER_L2_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_NONE}, \
    {"INGRESS_PKT_OUTER_L2_HDR_OTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_OTAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC}, \
    {"INGRESS_PKT_OUTER_L2_HDR_VNTAG", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_VNTAG}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ARP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_BFD", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_BFD}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GPE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GPE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ICMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ICMP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IGMP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IGMP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IPV4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV4}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IPV6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV6}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_NONE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_P_1588", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_P_1588}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_RARP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_RARP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UDP", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UDP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN}, \
    {"INGRESS_PKT_SYS_HDR_LOOPBACK", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_LOOPBACK}, \
    {"INGRESS_PKT_SYS_HDR_NONE", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_NONE}, \
    {"rxpmd_match_id_count", BCM56880_A0_HNA_6_5_30_3_0_RXPMD_MATCH_ID_COUNT}

#endif /*! BCM56880_A0_HNA_6_5_30_3_0_BCMPKT_RXPMD_MATCH_ID_DEFS_H */
