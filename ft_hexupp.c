/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexupp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:03:16 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/18 16:11:14 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexupp(unsigned int nb)
{
	int			counter;
	char		*hexupp;

	counter = 0;
	hexupp = "0123456789ABCDEF";
	if (nb >= 16)
	{
		counter += ft_hexupp(nb / 16);
	}
	counter += ft_putchar(hexupp[nb % 16]);
	return (counter);
}
