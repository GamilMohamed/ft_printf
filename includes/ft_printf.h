/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:46:05 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 18:04:18 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

# define LISTARG "cspdiuxX%"

int		ft_printf(const char *format, ...);

int		ft_ptf_putchar(char c);
int		ft_ptf_putnbr(int n, int *count);
int		ft_ptf_putstr(char const *s);
int		ft_ptf_strlen(char const *s);
int		ft_ptf_uiputnbr(unsigned int n, int *count);

int		ft_showarg(char c, va_list *list);


#endif