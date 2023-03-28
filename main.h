#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
/**
* struct format - match the conversion specifiers for printf
* @id: type char pointer of the specifier 
* @f: type pointer to function for the conversion specifier
*
*/

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
/*to handle the % conversion specifiers */
int printf_37(void);
/*to handle the c conversion specifiers */
int printf_char(va_list val);
/*to handle the s conversion specifiers */
int printf_string(va_list val);
int _strlen(char *s);

/*to handle the i conversion specifiers */
int printf_int(va_list args);
/*to handle the d conversion specifiers */
int printf_dec(va_list args);

#endif /* MAIN_H */
