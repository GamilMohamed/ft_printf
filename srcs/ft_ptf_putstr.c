/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:50:04 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 02:46:28 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptf_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while ((char)s[i])
		ft_ptf_putchar(s[i++]);
	return (i);
}
