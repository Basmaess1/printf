/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:01:48 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/24 18:45:29 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int	ft_percent(void)
{
	return (write(1, "%", 1));
}

static	int	ft_format(char specifier, va_list ptr)
{
	int	counter;

	counter = 0;
	if (specifier == '%')
		counter += ft_percent();
	else if (specifier == 'c')
		counter += ft_putchar(va_arg(ptr, int));
	else if (specifier == 's')
		counter += ft_putstr(va_arg(ptr, char *));
	else if (specifier == 'd' || specifier == 'i')
		counter += ft_int(va_arg(ptr, int));
	else if (specifier == 'x')
		counter += ft_hexlow(va_arg(ptr, unsigned int));
	else if (specifier == 'X')
		counter += ft_hexupp(va_arg(ptr, unsigned int));
	else if (specifier == 'p')
		counter += ft_addr(va_arg(ptr, void *));
	else if (specifier == 'u')
		counter += ft_unsig(va_arg(ptr, unsigned int));
	else
	{
		counter += write(1, "%", 1);
		counter += write(1, &specifier, 1);
	}
	return (counter);
}

static	int	one_percent(const char *format, int i, va_list ptr)
{
	if (!format[i])
	{
		va_end(ptr);
		return (-1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		ptr;
	int			i;
	int			counter;

	i = 0;
	counter = 0;
	if (!format)
		return (-1);
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (one_percent(format, i, ptr) == -1)
				return (-1);
			counter += ft_format(format[i], ptr);
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(ptr);
	return (counter);
}
