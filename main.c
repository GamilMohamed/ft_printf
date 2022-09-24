/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:45:41 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 02:45:10 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>

int main(void)
{
	ft_printf("vr---%%>%i<%%--z-(%s)%i,%c,%s=%u\n", 92110, "avion", 13, 'x', "binks", UINT_MAX);
	   printf("ft---%%>%i<%%--z-(%s)%i,%c,%s=%u\n", 92110, "avion", 13, 'x', "binks", UINT_MAX);
	return 0;
}
/*
0x10238ff48
0x100987f48
*/