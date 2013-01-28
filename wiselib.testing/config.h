/***************************************************************************
 ** This file is part of the generic algorithm library Wiselib.           **
 ** Copyright (C) 2008,2009 by the Wisebed (www.wisebed.eu) project.      **
 **                                                                       **
 ** The Wiselib is free software: you can redistribute it and/or modify   **
 ** it under the terms of the GNU Lesser General Public License as        **
 ** published by the Free Software Foundation, either version 3 of the    **
 ** License, or (at your option) any later version.                       **
 **                                                                       **
 ** The Wiselib is distributed in the hope that it will be useful,        **
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of        **
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         **
 ** GNU Lesser General Public License for more details.                   **
 **                                                                       **
 ** You should have received a copy of the GNU Lesser General Public      **
 ** License along with the Wiselib.                                       **
 ** If not, see <http://www.gnu.org/licenses/>.                           **
 ***************************************************************************/
#ifndef __CONFIG_H
#define __CONFIG_H

// --------------------------------------------------------------------------
// --------------------- Algorithms -----------------------------------------
// --------------------------------------------------------------------------

// ---------------- Routing -------------------------------------------------
 #define ROUTING_DSDV_DEBUG
// #define ROUTING_DSR_DEBUG
 #define ROUTING_TREE_DEBUG

// ---------------- 6LoWPAN -------------------------------------------------

//Global debug for 6LoWPAN
#define LoWPAN_DEBUG

//Debug for 6LoWPAN components
//#define IPv6_LAYER_DEBUG
//#define LoWPAN_LAYER_DEBUG
//#define UART_LAYER_DEBUG
//#define UDP_LAYER_DEBUG
//#define ICMPv6_LAYER_DEBUG
//#define ND_DEBUG

#ifdef LoWPAN_DEBUG
#define IPv6_LAYER_DEBUG
#define LoWPAN_LAYER_DEBUG
#define UART_LAYER_DEBUG
#define UDP_LAYER_DEBUG
#define ICMPv6_LAYER_DEBUG
#define ND_DEBUG
#endif

//6LoWPAN IP packet max size
#define LOWPAN_IP_PACKET_BUFFER_MAX_SIZE 1500

//The Contexts number, it should be 16
#define LOWPAN_CONTEXTS_NUMBER 16

//Number of neighbors in the neighbor cache
#define LOWPAN_MAX_OF_NEIGHBORS 10

//Number of routers in the default routers' list
#define LOWPAN_MAX_OF_ROUTERS 5

//Number of prefixes per interface
#define LOWPAN_MAX_PREFIXES 2

//The maximum of stored mesh broadcast sequence numbers
#define MAX_BROADCAST_SEQUENCE_NUMBERS 15

//IP packet store size
#define IP_PACKET_POOL_SIZE 2

//Forwarding table size in the IPv6 layer
#define FORWARDING_TABLE_SIZE 8

//Minimum: 1, the index starts from 0 at the get_interface function!
#define NUMBER_OF_INTERFACES 2

//Number of UDP sockets in the UDP layer
#define NUMBER_OF_UDP_SOCKETS 4

//Select routing method
#define LOWPAN_ROUTE_OVER
//#define LOWPAN_MESH_UNDER


// --------------------------------------------------------------------------
// --------------------- Util -----------------------------------------------
// --------------------------------------------------------------------------

// ---------------- Base Classes --------------------------------------------
#define RADIO_BASE_MAX_RECEIVERS 10
#define UART_BASE_MAX_RECEIVERS 10
#define STATE_CALLBACK_BASE_MAX_RECEIVERS 10
#define SENSOR_CALLBACK_BASE_MAX_RECEIVERS 10

// ---------------- pSTL ----------------------------------------------------

#endif
