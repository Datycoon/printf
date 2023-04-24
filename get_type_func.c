#include "main.h"

/**
 * get_function - determine which print function to use.
 * @specifier: The character that identifie the type of the variable to print.
 *
 * Return: pointer to the matching print function.
 */

int (*get_function(const char *specifier))(va_list)
{
	int index;
		type_t types[] = {
			{"s", print_str},
			{"c", print_char},
			{"d", print_d},
			{"i", print_i},
			{NULL, NULL},
		};
		for (index = 0; types[index].identifier; index++)
		{
			if (*specifier == types[index].identifier[0])
				return (types[index].print);
		}
		return (NULL);
}
