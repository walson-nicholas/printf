#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * foroctal - main object for octal int
 * @ap: first var
 * Return: chars returned
 **/
int foroctal(va_list *ap)
{
	return (p_octal(va_arg(*ap, unsigned int)));
}

/**
 * forhexstring - makes object into string
 * @ap: va_list object
 * Return: chars printed
 **/
int forhexstring(va_list *ap)
{
	return (p_hexstring(va_arg(*ap, char *)));
}

/**
 * forunsigned - makes object into unsigned int
 * @ap: va_list object
 * Return: chars printed
 **/
int forunsigned(va_list *ap)
{
	return (p_uint(va_arg(*ap, unsigned int)));
}

/**
 * forhexcap - makes object into hex with cap
 * @ap: va_list object
 * Return: chars printed
 **/
int forhexcap(va_list *ap)
{
		return (p_hexcap(va_arg(*ap, unsigned int)));
}
