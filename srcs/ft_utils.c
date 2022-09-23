/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:09:57 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 18:05:25 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_showarg(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'i' || c == 'd')
		count = ft_ptf_putnbr((int)va_arg(*args, int), &count);
	else if (c == 's')
		count = ft_ptf_putstr((char*)va_arg(*args, char*));
	else if (c == 'c')
		count = ft_ptf_putchar((int)va_arg(*args, int));
	else if (c == 'u')
		count = ft_ptf_uiputnbr((unsigned int)va_arg(*args, unsigned int), &count);
	return (count);
}
