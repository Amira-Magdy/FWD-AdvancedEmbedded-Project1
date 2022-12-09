/*
 * FILE NAME:	Bit_Math.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains all the mathematical operations
 */

#ifndef BIT_MATH_H
#define BIT_MATH_H


#define SET_BIT( x ,bit_order) ( (x) |= (1 << (bit_order) ))           /* Set a bit in a register */
#define CLR_BIT( x ,bit_order) ( (x) &= (~(1 << (bit_order)) ) )       /* Clear a bit in a register */
#define TOG_BIT( x ,bit_order) ( (x) ^= (1 << (bit_order) ) )          /* Toggle a bit in a register */
#define GET_BIT( x ,bit_order) ( (x) >> (bit_order) & 1 )


#endif