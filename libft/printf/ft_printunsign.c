/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 05:29:04 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/24 04:39:20 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int i)
{
	int				len;
	unsigned int	j;

	j = i;
	len = 0;
	if (i == 0)
		return (write (1, "0", 1));
	while (i)
	{
		len++;
		i /= 10;
	}
	ft_uputnbr(j);
	return (len);
}
