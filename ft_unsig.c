/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:40:05 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/18 16:11:52 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsig(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n > 9)
		counter += ft_unsig(n / 10);
	counter += ft_putchar((n % 10) + 48);
	return (counter);
}
