/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:46:05 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 02:42:29 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define LIST_ARG "cspdiuxX%%"
# define HEX_BASE "0123456789abcdef"
# define U_INT unsigned int

int		ft_printf(const char *format, ...);

int		ft_ptf_putchar(char c);
int		ft_ptf_putnbr(int n, int *count);
int		ft_ptf_putstr(char *s);
int		ft_ptf_uiputnbr(unsigned int n, int *count);
int		ft_ptf_hex_putnbr(unsigned int nbr, char x, int *count);
int		ft_ptf_getadress(unsigned long int n);

int		ft_showarg(char c, va_list *list);

#endif