#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a_ptr: Pointer to the first integer.
 * @b_ptr: Pointer to the second integer.
 */
void swap_int(int *a_ptr, int *b_ptr)
{
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;
}
