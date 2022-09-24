/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_hex_putnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:37:53 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 02:50:36 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_hex_putnbr(unsigned int nbr, char x, int *count)
{
	char	*base;

	base = HEX_BASE;
	if (nbr >= 16)
		ft_ptf_hex_putnbr((nbr / 16), x, count);
	if (x == 'X' && (nbr % 16) < 10)
		ft_ptf_putchar((nbr % 16) + '0');
	else if (x == 'X')
		ft_ptf_putchar(base[(nbr % 16)] - 32);
	else
		ft_ptf_putchar(base[(nbr % 16)]);
	return (*count += 1);
}
