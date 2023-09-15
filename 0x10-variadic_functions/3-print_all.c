#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints a variable number of arguments based on a format string.
* @format: A format string where each character indicates the type of argument.
* Supported types: 'c' (char), 'i' (int), 'f' (float), 's' (string).
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *sep = "";
const char *fmt = format;

va_start(args, format);

while (fmt && fmt[i])
{
char *str;
switch (fmt[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s%s", sep, (str ? str : "(nil)"));
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}

va_end(args);
printf("\n");
}
