#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * typedef struct fmt fs - Struct op
 *
 * @fmt: The format.
 * @fs: The function associated.
 */
typedef struct fmt fs;

int _printf(const char *format, ...);


#endif
