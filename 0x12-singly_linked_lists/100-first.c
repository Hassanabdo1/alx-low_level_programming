#include <stdio.h>

/**
 * @brief Constructor function that runs before the main function.
 *
 * This function is automatically executed before the `main` function is called.
 * It prints out a message.
 */
void __attribute__ ((constructor)) first()
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}
