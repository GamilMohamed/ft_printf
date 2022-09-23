/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:50:04 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/23 17:50:49 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_putstr(char const *s)
{
	int	i;

	i = 0;
	while ((char)s[i])
	{
		ft_ptf_putchar(s[i]);
		i++;
	}
	return (i);
}
