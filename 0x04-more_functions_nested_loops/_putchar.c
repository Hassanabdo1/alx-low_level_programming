#include <unistd.h>
#include "main.h"

/**
 * _putchar - writers the character c stdout
 * @c: the character to print
 *
 * Return : On success 1.
 * On error -1 is returned. and erro is set apporprti
 * ately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
