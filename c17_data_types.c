/*
 * This program displays the size, minimum, maximum value,
 * and precision details of C17 fundamental data types.
 */

// Required C-library modules

#include <stdio.h>      // printf()
#include <limits.h>     // Integer limits
#include <float.h>      // Floating-point limits and precision
#include <stdbool.h>    // Boolean type
#include <wchar.h>      // Wide character type
#include <stdint.h>     // Fixed-width integer types
#include <uchar.h>      // char16_t and char32_t

int main()
{
    /*
     *===================================================================
     * SELECT 1: CHARACTER DATA TYPES
     *===================================================================
     *
     * Character data types store characters such as 'A', '$', 'c', '6'
     * and special symbols.
     *
     * A char occupies exactly one C byte.
     * Plain char may be signed or unsigned depending on implementation.
     */

    printf("\n========== CHARACTER DATA TYPES ==========\n");

    printf("\nchar: %zu bytes", sizeof(char));
    printf("\nCHAR_MIN: %d", CHAR_MIN);
    printf("\nCHAR_MAX: %d", CHAR_MAX);

    printf("\n\nSigned char: %zu bytes", sizeof(signed char));
    printf("\nSCHAR_MIN: %d", SCHAR_MIN);
    printf("\nSCHAR_MAX: %d", SCHAR_MAX);

    printf("\n\nUnsigned char: %zu bytes", sizeof(unsigned char));
    printf("\nUCHAR_MAX: %u\n", UCHAR_MAX);


    /*
     *===================================================================
     * SELECT 2: INTEGER DATA TYPES
     *===================================================================
     *
     * Integer data types store numbers without decimal points.
     * Signed integers support negative and positive values.
     * Unsigned integers support zero and positive values.
     * Their sizes and ranges depend on the implementation.
     */

    // Short integer
    printf("\n========== SHORT INTEGER ==========\n");

    printf("\nshort: %zu bytes", sizeof(short));
    printf("\nSHRT_MIN: %d", SHRT_MIN);
    printf("\nSHRT_MAX: %d", SHRT_MAX);

    // Standard integer
    printf("\n\n========== STANDARD INTEGER ==========\n");

    printf("\nint: %zu bytes", sizeof(int));
    printf("\nINT_MIN: %d", INT_MIN);
    printf("\nINT_MAX: %d", INT_MAX);

    // Long integer
    printf("\n\n========== LONG INTEGER ==========\n");

    printf("\nlong: %zu bytes", sizeof(long));
    printf("\nLONG_MIN: %ld", LONG_MIN);
    printf("\nLONG_MAX: %ld", LONG_MAX);

    // Long long integer
    printf("\n\n========== LONG LONG INTEGER ==========\n");

    printf("\nlong long: %zu bytes", sizeof(long long));
    printf("\nLLONG_MIN: %lld", LLONG_MIN);
    printf("\nLLONG_MAX: %lld", LLONG_MAX);

    // Unsigned short
    printf("\n\n========== UNSIGNED SHORT ==========\n");

    printf("\nunsigned short: %zu bytes", sizeof(unsigned short));
    printf("\nUSHRT_MAX: %u", USHRT_MAX);

    // Unsigned int
    printf("\n\n========== UNSIGNED INTEGER ==========\n");

    printf("\nunsigned int: %zu bytes", sizeof(unsigned int));
    printf("\nUINT_MAX: %u", UINT_MAX);

    // Unsigned long
    printf("\n\n========== UNSIGNED LONG ==========\n");

    printf("\nunsigned long: %zu bytes", sizeof(unsigned long));
    printf("\nULONG_MAX: %lu", ULONG_MAX);

    // Unsigned long long
    printf("\n\n========== UNSIGNED LONG LONG ==========\n");

    printf("\nunsigned long long: %zu bytes", sizeof(unsigned long long));
    printf("\nULLONG_MAX: %llu\n", ULLONG_MAX);

       // Unsigned long integer.

    printf("unsigned long: %zu bytes\n", sizeof(unsigned long));

    printf("ULONG_MAX: %lu\n\n", ULONG_MAX);

    // Long long: provides at least 64 bits of integer range.

    printf("long long: %zu bytes\n", sizeof(long long));

    printf("LLONG_MIN: %lld\n", LLONG_MIN);

    printf("LLONG_MAX: %lld\n\n", LLONG_MAX);

    // Unsigned long long: non-negative extended integers.

    printf("unsigned long long: %zu bytes\n", sizeof(unsigned long long));

    printf("ULLONG_MAX: %llu\n\n", ULLONG_MAX);


    /*

     * =====================================================

     * SECTION 3: FLOATING-POINT DATA TYPES

     * =====================================================

     *

     * Floating-point types store numbers with decimal

     * fractions, such as 3.14, 12.75, and 0.001.

     *

     * FLT_MIN, DBL_MIN and LDBL_MIN represent the smallest

     * positive normalized values, not the most negative

     * values.

     *

     * FLT_MAX, DBL_MAX and LDBL_MAX represent the largest

     * finite positive values.

     */

    printf("===== FLOATING-POINT DATA TYPES =====\n\n");

    // float: normally provides single precision.

    printf("float: %zu bytes\n", sizeof(float));

    printf("FLT_MIN: %e\n", FLT_MIN);

    printf("FLT_MAX: %e\n", FLT_MAX);

    printf("FLT_DIG: %d decimal digits\n\n", FLT_DIG);

    // double: normally provides greater precision than float.

    printf("double: %zu bytes\n", sizeof(double));

    printf("DBL_MIN: %e\n", DBL_MIN);

    printf("DBL_MAX: %e\n", DBL_MAX);

    printf("DBL_DIG: %d decimal digits\n\n", DBL_DIG);

    // long double: provides at least the precision of double.

    printf("long double: %zu bytes\n", sizeof(long double));

    printf("LDBL_MIN: %Le\n", LDBL_MIN);

    printf("LDBL_MAX: %Le\n", LDBL_MAX);

    printf("LDBL_DIG: %d decimal digits\n\n", LDBL_DIG);


    /*

     * =====================================================

     * SECTION 4: BOOLEAN DATA TYPE

     * =====================================================

     *

     * A Boolean represents a logical value.

     *

     * In C17:

     * true  = 1

     * false = 0

     *

     * The bool keyword is provided through stdbool.h.

     * Its underlying type is _Bool.

     */

    printf("===== BOOLEAN DATA TYPE =====\n\n");

    printf("_Bool: %zu bytes\n", sizeof(_Bool));

    printf("true: %d\n", true);

    printf("false: %d\n\n", false);


    /*

     * =====================================================

     * SECTION 5: WIDE AND UNICODE CHARACTER TYPES

     * =====================================================

     *

     * These types are useful when working with characters

     * beyond the basic execution character set.

     *

     * wchar_t: wide character type.

     * char16_t: UTF-16 code unit.

     * char32_t: UTF-32 code unit.

     *

     * Their sizes depend on the implementation.

     */

    printf("===== WIDE AND UNICODE CHARACTER TYPES =====\n\n");

    printf("wchar_t: %zu bytes\n", sizeof(wchar_t));

    printf("char16_t: %zu bytes\n", sizeof(char16_t));

    printf("char32_t: %zu bytes\n\n", sizeof(char32_t));


    /*

     * =====================================================

     * SECTION 6: POINTER DATA TYPE

     * =====================================================

     *

     * A pointer stores the memory address of an object.

     *

     * void * is a generic object pointer that can hold

     * the address of different object types.

     *

     * Pointer size depends on the platform and ABI.

     */

    printf("===== POINTER DATA TYPE =====\n\n");

    printf("void pointer: %zu bytes\n", sizeof(void *));


    /*

     * =====================================================

     * SECTION 7: FIXED-WIDTH INTEGER DATA TYPES

     * =====================================================

     *

     * stdint.h provides integer types with specified

     * widths when the implementation supports them.

     *

     * Examples:

     * int8_t  = signed 8-bit integer

     * int16_t = signed 16-bit integer

     * int32_t = signed 32-bit integer

     * int64_t = signed 64-bit integer

     *

     * uint types represent unsigned integers.

     *

     * The exact-width types are optional in C17.

     */

    printf("\n===== FIXED-WIDTH INTEGER DATA TYPES =====\n\n");

    #ifdef INT8_MAX

        printf("int8_t: %zu bytes\n", sizeof(int8_t));

    #endif

    #ifdef INT16_MAX

        printf("int16_t: %zu bytes\n", sizeof(int16_t));

    #endif

    #ifdef INT32_MAX

        printf("int32_t: %zu bytes\n", sizeof(int32_t));

    #endif

    #ifdef INT64_MAX

        printf("int64_t: %zu bytes\n", sizeof(int64_t));

    #endif

    #ifdef UINT8_MAX

        printf("uint8_t: %zu bytes\n", sizeof(uint8_t));

    #endif

    #ifdef UINT16_MAX

        printf("uint16_t: %zu bytes\n", sizeof(uint16_t));

    #endif

    #ifdef UINT32_MAX

        printf("uint32_t: %zu bytes\n", sizeof(uint32_t));

    #endif

    #ifdef UINT64_MAX

        printf("uint64_t: %zu bytes\n", sizeof(uint64_t));

    #endif


    /*

     * =====================================================

     * SECTION 8: BYTE SIZE INFORMATION

     * =====================================================

     *

     * CHAR_BIT tells us how many bits make up one byte

     * on the current C implementation.

     *

     * A byte is not guaranteed to contain exactly 8 bits.

     */

    printf("\n===== SYSTEM BYTE INFORMATION =====\n\n");

    printf("Bits per byte (CHAR_BIT): %d\n", CHAR_BIT);


    /*

     * =====================================================

     * END OF PROGRAM

     * =====================================================

     */

    printf("\n===== END OF C DATA TYPES DEMO. =====\n");

    return 0;
}

