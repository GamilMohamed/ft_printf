/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:50:04 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 19:00:30 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_putnbr(int n, int *count)
{
	long int	nbr;

	nbr = n;
	if (n < 0)
	{
		nbr *= -1;
		*count = 1;
		ft_ptf_putchar('-');
	}
	if (nbr > 9)
		ft_ptf_putnbr((nbr / 10), count);
	ft_ptf_putchar((nbr % 10) + '0');
	return (*count += 1);
}
