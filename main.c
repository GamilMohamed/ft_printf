/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:45:41 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 18:22:05 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>

int main(void)
{
	int x = 92133;
	ft_printf("--->%i<---(%s)%i,%c,%s=%u", 92133, "avion", 13, 'x', "binks", UINT_MAX);
	int count;
	int l;

	// count = 0;
	// printf("\n");
	// l = ft_ptf_putnbr(x, &count);
	// printf("\n");
	// ft_ptf_putchar('#');
	// printf("\nl=%i\n", l);
	return 0;
}