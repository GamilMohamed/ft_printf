/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_uiputnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:50:04 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 18:03:34 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_uiputnbr(unsigned int n, int *count)
{
	unsigned int	nbr;
	nbr = n;
	if (nbr > 9)
		ft_ptf_putnbr((nbr / 10), count);
	ft_ptf_putchar((nbr % 10) + '0');
	return (*count += 1);
}