/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:04:19 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 03:04:19 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_showarg(char c, va_list *args)
{
	int	ret;

	ret = 0;
	if (c == 'i' || c == 'd')
		ret = ft_ptf_putnbr((int)va_arg(*args, int), &ret);
	else if (c == 's')
		ret = ft_ptf_putstr((char *)va_arg(*args, char *));
	else if (c == 'c')
		ret = ft_ptf_putchar((int)va_arg(*args, int));
	else if (c == 'u')
		ret = ft_ptf_uiputnbr((U_INT)va_arg(*args, U_INT), &ret);
	else if (c == '%')
		ret = ft_ptf_putchar('%');
	else if (c == 'x' || c == 'X')
		ret = ft_ptf_hex_putnbr((U_INT)va_arg(*args, U_INT), c, &ret);
	else if (c == 'p')
	{
		ret = ft_ptf_putstr("0x");
		ret += ft_ptf_getadress((long U_INT)va_arg(*args, long U_INT));
	}
	else
		ret = ft_ptf_putchar(c);
	return (ret);
}

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
