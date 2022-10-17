#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _printf(const char *format, ...);
int pull_print(char c, va_list *ap);

int _putchar(char);
int buffer(char a, char *s);
int p_bin(unsigned int num);
int exponent(int x, int y);
int p_int(int);
int p_string(char *);
int p_hexstring(char *);
int p_rev(char *s);
int p_hexcap(unsigned int num);
int p_octal(unsigned int num);
int p_uint(unsigned int num);
int p_hex(unsigned int num);
int _putchar(char c);
int forstring(va_list *);
int forchar(va_list *);
int forint(va_list *);
int forbin(va_list *);
int forhex(va_list *);
int forhexcap(va_list *);
int foroctal(va_list *);
int forhexstring(va_list *);
int forunsigned(va_list *);
/**
 * struct flag - struct type identifier
 * @letter: first var
 * @prnt: second var
 * Descriptions: flag identifier
 **/
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;
#endif
