//
//     ____    _                        __     _      _____
//    / ___\  /_\     /\/\    /\ /\    /__\   /_\     \_   \
//    \ \    //_\\   /    \  / / \ \  / \//  //_\\     / /\/
//  /\_\ \  /  _  \ / /\/\ \ \ \_/ / / _  \ /  _  \ /\/ /_
//  \____/  \_/ \_/ \/    \/  \___/  \/ \_/ \_/ \_/ \____/
//
//	Copyright Samurai development team and other contributors
//
//	http://www.samurai-framework.com
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.
//

// ----------------------------------
// Version
// ----------------------------------

#define __MUST_ON__		(1)
#define __MUST_OFF__	(0)

#define __ON__			(1)
#define __OFF__			(0)
#define __AUTO__		(DEBUG)

// ----------------------------------
// Unix include headers
// ----------------------------------

// ----------------------------------
// Mac/iOS include headers
// ----------------------------------

// ----------------------------------
// Common use macros
// ----------------------------------

#ifndef	IN
#define IN
#endif

#ifndef	OUT
#define OUT
#endif

#ifndef	INOUT
#define INOUT
#endif

#ifndef	UNUSED
#define	UNUSED( __x )		{ id __unused_var__ __attribute__((unused)) = (id)(__x); }
#endif

#ifndef	ALIAS
#define	ALIAS( __a, __b )	__typeof__(__a) __b = __a;
#endif

#ifndef	DEPRECATED
#define	DEPRECATED			__attribute__((deprecated))
#endif

#ifndef	TODO
//#define TODO( X )			_Pragma(macro_cstr(message("✖✖✖✖✖✖【QFish，代码审查】: TODO: " X)))
#define TODO( X )
#endif

#ifndef	EXTERN_C
#if defined(__cplusplus)
#define EXTERN_C			extern "C"
#else
#define EXTERN_C			extern
#endif
#endif

#ifndef	INLINE
#define	INLINE				__inline__ __attribute__((always_inline))
#endif

// ----------------------------------
// Custom keywords
// ----------------------------------

#undef	var
#define var	NSObject *

#if !defined(__clang__) || __clang_major__ < 3

	#ifndef __bridge
	#define __bridge
	#endif

	#ifndef __bridge_retain
	#define __bridge_retain
	#endif

	#ifndef __bridge_retained
	#define __bridge_retained
	#endif

	#ifndef __autoreleasing
	#define __autoreleasing
	#endif

	#ifndef __strong
	#define __strong
	#endif

	#ifndef __unsafe_unretained
	#define __unsafe_unretained
	#endif

	#ifndef __weak
	#define __weak
	#endif

#endif	// #if !defined(__clang__) || __clang_major__ < 3

// ----------------------------------
// Code block
// ----------------------------------

//#ifndef	weakify
//#if __has_feature(objc_arc)
//
//#define weakly( x )		__weak_##x##__
//#define weakify( x ) \
//		_Pragma("clang diagnostic push") \
//		_Pragma("clang diagnostic ignored \"-Wshadow\"") \
//		autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
//		_Pragma("clang diagnostic pop")
//
//#else
//
//#define weakly( x )		__block_##x##__
//#define weakify( x ) \
//		_Pragma("clang diagnostic push") \
//		_Pragma("clang diagnostic ignored \"-Wshadow\"") \
//		autoreleasepool{} __block __typeof__(x) __block_##x##__ = x; \
//		_Pragma("clang diagnostic pop")
//
//#endif
//#endif
//
//#ifndef	normalize
//#if __has_feature(objc_arc)
//
//#define normalize( x ) \
//		_Pragma("clang diagnostic push") \
//		_Pragma("clang diagnostic ignored \"-Wshadow\"") \
//		try{} @finally{} __typeof__(x) x = __weak_##x##__; \
//		_Pragma("clang diagnostic pop")
//
//#else
//
//#define normalize( x ) \
//		_Pragma("clang diagnostic push") \
//		_Pragma("clang diagnostic ignored \"-Wshadow\"") \
//		try{} @finally{} __typeof__(x) x = __block_##x##__; \
//		_Pragma("clang diagnostic pop")
//
//#endif
//#endif

typedef void (^ BlockTypeVoid )( void );

// ----------------------------------
// Meta macro
// ----------------------------------

#define macro_first(...)									macro_first_( __VA_ARGS__, 0 )
#define macro_first_( A, ... )								A

#define macro_concat( A, B )								macro_concat_( A, B )
#define macro_concat_( A, B )								A##B

#define macro_count(...)									macro_at( 8, __VA_ARGS__, 8, 7, 6, 5, 4, 3, 2, 1 )
#define macro_more(...)										macro_at( 8, __VA_ARGS__, 1, 1, 1, 1, 1, 1, 1, 1 )

#define macro_at0(...)										macro_first(__VA_ARGS__)
#define macro_at1(_0, ...)									macro_first(__VA_ARGS__)
#define macro_at2(_0, _1, ...)								macro_first(__VA_ARGS__)
#define macro_at3(_0, _1, _2, ...)							macro_first(__VA_ARGS__)
#define macro_at4(_0, _1, _2, _3, ...)						macro_first(__VA_ARGS__)
#define macro_at5(_0, _1, _2, _3, _4 ...)					macro_first(__VA_ARGS__)
#define macro_at6(_0, _1, _2, _3, _4, _5 ...)				macro_first(__VA_ARGS__)
#define macro_at7(_0, _1, _2, _3, _4, _5, _6 ...)			macro_first(__VA_ARGS__)
#define macro_at8(_0, _1, _2, _3, _4, _5, _6, _7, ...)		macro_first(__VA_ARGS__)
#define macro_at(N, ...)									macro_concat(macro_at, N)( __VA_ARGS__ )

#define macro_join0( ... )
#define macro_join1( A )									A
#define macro_join2( A, B )									A##____##B
#define macro_join3( A, B, C )								A##____##B##____##C
#define macro_join4( A, B, C, D )							A##____##B##____##C##____##D
#define macro_join5( A, B, C, D, E )						A##____##B##____##C##____##D##____##E
#define macro_join6( A, B, C, D, E, F )						A##____##B##____##C##____##D##____##E##____##F
#define macro_join7( A, B, C, D, E, F, G )					A##____##B##____##C##____##D##____##E##____##F##____##G
#define macro_join8( A, B, C, D, E, F, G, H )				A##____##B##____##C##____##D##____##E##____##F##____##G##____##H
#define macro_join( ... )									macro_concat(macro_join, macro_count(__VA_ARGS__))(__VA_ARGS__)

#define macro_cstr( A )										macro_cstr_( A )
#define macro_cstr_( A )									#A

#define macro_string( A )									macro_string_( A )
#define macro_string_( A )									@(#A)

#undef	singleton
#define singleton( __class ) \
property (nonatomic, readonly) __class * sharedInstance; \
- (__class *)sharedInstance; \
+ (__class *)sharedInstance;

#undef	def_singleton
#define def_singleton( __class ) \
dynamic sharedInstance; \
- (__class *)sharedInstance \
{ \
return [__class sharedInstance]; \
} \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __strong id __singleton__ = nil; \
dispatch_once( &once, ^{ __singleton__ = [[__class alloc] init]; } ); \
return __singleton__; \
}

// ----------------------------------
// Replacing
// ----------------------------------

//#undef	NSLog
//#define	NSLog	SamuraiLog
