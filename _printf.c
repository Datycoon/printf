#include "main.h"
#include <stdarg.h> 
#include <stdio.h>  

int _printf(const char* format, ...) {
  va_list args;         // declare a va_list to hold the variable arguments
  va_start(args, format);  // initialize the va_list to the variable arguments
  
  int chars_printed = 0;  // keep track of the number of characters printed
  char ch;               // declare a char to hold each character in the format string

  while ((ch = *format++) != '\0') {  // loop through each character in the format string
    if (ch == '%') {    // if we encounter a '%', process the corresponding conversion specifier
      switch (*format++) {
        case 'c':  // print a single character
          printf("%c", va_arg(args, int));
          chars_printed++;
          break;
        case 's':  // print a string of characters
          chars_printed += printf("%s", va_arg(args, char*));
          break;
        case '%':  // print a percent sign
          printf("%%");
          chars_printed++;
          break;
        default:   // if the conversion specifier is not recognized, print it literally
          printf("%%%c", ch);
          chars_printed += 2;
          break;
      }
    } else {  // if the current character is not a '%', print it literally
      printf("%c", ch);
      chars_printed++;
    }
  }

  va_end(args);  // clean up the va_list

  return chars_printed;
}
