/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:20:32 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/18 18:47:25 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_int(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (n < 0)
	{
		counter += ft_putchar('-');
		n = -n;
		counter += ft_int(n);
	}
	else if (n > 9)
	{
		counter += ft_int(n / 10);
		counter += ft_int(n % 10);
	}
	else
		counter += ft_putchar(n + 48);
	return (counter);
}
