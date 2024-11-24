/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:33:05 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/18 16:11:08 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexlow(unsigned int nb)
{
	int			counter;
	char		*hex;

	hex = "0123456789abcdef";
	counter = 0;
	if (nb >= 16)
	{
		counter += ft_hexlow(nb / 16);
	}
	counter += ft_putchar(hex[nb % 16]);
	return (counter);
}
