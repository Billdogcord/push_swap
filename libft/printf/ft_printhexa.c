/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:53:08 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/23 22:32:56 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char c)
{
	int		len;
	int		lettercase;
	int		nbr;
	char	res;

	len = 0;
	if (c == 'x')
		lettercase = 87;
	if (c == 'X')
		lettercase = 55;
	if (nb >= 16)
		len += ft_puthex(nb / 16, c);
	nbr = nb % 16;
	if (nbr <= 9)
		res = nbr + '0';
	if (nbr >= 10)
		res = nbr + lettercase;
	len += ft_printchar(res);
	return (len);
}
