#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * forstring - main function for string print
 * @ap: first var
 * Return: char is returned
 **/
int forstring(va_list *ap)
{
	return (p_string(va_arg(*ap, char *)));
}

/**
 * forint - main function for int print
 * @ap: first var
 * Return: number is returned
 **/
int forint(va_list *ap)
{
	return (p_int(va_arg(*ap, int)));
}

/**
 * forchar - main function for char print
 * @ap: first var
 * Return: char is returned
 **/
int forchar(va_list *ap)
{
	return (_putchar(va_arg(*ap, int)));
}

/**
 * forbin - main function for binary converter
 * @ap: first var
 * Return: char is returned
 **/
int forbin(va_list *ap)
{
	return (p_bin(va_arg(*ap, unsigned int)));
}

/**
 * forhex - main function for hexadecimal conversion
 * @ap: first var
 * Return: char letter is returned
 **/
int forhex(va_list *ap)
{
	return (p_hex(va_arg(*ap, int)));
}

