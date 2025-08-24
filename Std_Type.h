/**
 * Filename		: Stdype.h
 * Author		: Nghia Taarabt
 * Create Date 	: 18/12/22
 * Brief		: Standard Types for All Drivers
 */
 
#ifndef __STDYPE_H__
#define __STDYPE_H__

#include <stddef.h>

/**
 * Define Volatile Types
 */
#define __vo				volatile
#define __io				volatile
#define __i					volatile
#define __o					volatile
#define __I					volatile
#define	__IO				volatile
#define	__O					volatile

/**
 * Compiler Attributes 
 */
#define __weak 				__attribute__((weak))
#define __STATIC_INLINE		static inline

#ifndef NULL
	#define NULL 			0
#endif
#define NULL_PTR			(void*)NULL

/**
 * Define Standard Types
 */
typedef signed char         int8;
typedef unsigned char       uint8;
typedef short               int16;
typedef unsigned short      uint16;
typedef int                 int32;
typedef unsigned            uint32;
typedef long long           int64;
typedef unsigned long long  uint64;

/**
 * Some generic macros
*/
#define ENABLE 				1u
#define DISABLE 			0u
#define BIT_SET 			ENABLE
#define BIT_RESET 			DISABLE
#define FLAG_RESET         	BIT_RESET
#define FLAG_SET 			BIT_SET

#define UINT32_MAX			((uint32)0xFFFFFFFFu)
#define UINT16_MAX			((uint16)0xFFFFu)
#define UINT8_MAX			((uint8)0xFFu)
#define SIZE32_MAX			((size_t)0xFFFFFFFFu)
#define SIZE16_MAX			((size_t)0xFFFFu)
#define SIZE8_MAX			((size_t)0xFFu)
#define UINT32_MIN			((uint32)0x00000000u)
#define UINT16_MIN			((uint16)0x0000u)
#define UINT8_MIN			((uint8)0x00u)
#define INT32_MAX			((int32)0x7FFFFFFFu)
#define INT16_MAX			((int16)0x7FFFu)
#define INT8_MAX			((int8)0x7Fu)
#define INT32_MIN			((int32)0x80000000u)
#define INT16_MIN			((int16)0x8000u)
#define INT8_MIN			((int8)0x80u)
#define FLOAT32_MAX		((float)3.40282347E+38F)
#define FLOAT32_MIN		((float)1.17549435E-38F)
#define FLOAT64_MAX		((double)1.79769313486231570E+308)
#define FLOAT64_MIN		((double)2.22507385850720140E-308)
#define INT32_WIDTH		32u
#define INT16_WIDTH		16u
#define INT8_WIDTH		8u
#define FLOAT32_WIDTH	32u

typedef enum {
	FALSE 	= 0u,
	TRUE 	= 1u
} Bool_Type;

#define DEFAULT_FUNCTION(X) 			(void)X      /* To avoid gcc/g++ warnings */

#endif	/* !(__STDYPE_H__) */
