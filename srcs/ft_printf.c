/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:04:19 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 18:02:29 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		total;
	char	*s;
	va_list	args;

	s = (char *)format;
	total = 0;
	i = 0;
	va_start(args, format);
	while (s[i])
	{
		if (s[i] != '%')
		{
			total += ft_ptf_putchar(s[i++]);
			continue ;
		}
		if (s[++i])
		 	total += ft_showarg(s[i], &args);
		i++;
	}
	va_end(args);
	return (total);
}
