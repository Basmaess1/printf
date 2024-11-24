/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <bessabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:01:39 by bessabri          #+#    #+#             */
/*   Updated: 2024/11/24 08:53:35 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_int(int n);
int	ft_hexlow(unsigned int nb);
int	ft_hexupp(unsigned int nb);
int	ft_addr(void *p);
int	ft_unsig(unsigned int n);
#endif
