/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_getadress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:27:27 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 02:48:19 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_getadress(unsigned long int n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_ptf_getadress(n / 16);
		len += ft_ptf_getadress(n % 16);
	}
	if (n < 16)
	{
		if (n < 10)
			len += ft_ptf_putchar(n + 48);
		else
			len += ft_ptf_putchar(n + 87);
	}
	return (len);
}
