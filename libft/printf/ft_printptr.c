/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:40:39 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/16 16:16:03 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long ptr)
{
	int				len;
	int				i;
	unsigned long	j;

	j = ptr;
	i = 0;
	len = 2;
	write(1, "0x", 2);
	while (ptr)
	{
		i++;
		ptr /= 16;
	}
	if (j == 0)
	{
		len += write(1, "0", 1);
	}
	else
	{
		ft_putptr(j);
		len += i;
	}
	return (len);
}
