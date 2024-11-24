/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:59:00 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/24 09:28:32 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static	int	ft_put_pointer(unsigned long num)
{
	int	counter;

	counter = 0;
	if (num >= 16)
		counter += ft_put_pointer(num / 16);
	counter += ft_putchar("0123456789abcdef"[num % 16]);
	return (counter);
}

int	ft_addr(void *ptr)
{
	int					counter;
	unsigned long		addr;

	counter = 0;
	addr = (unsigned long)ptr;
	if (addr == 0)
	{
		return (ft_putstr("(nil)"));
	}
	counter += ft_putstr("0x");
	counter += ft_put_pointer(addr);
	return (counter);
}
