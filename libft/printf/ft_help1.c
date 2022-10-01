/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:51:48 by bsaeed            #+#    #+#             */
/*   Updated: 2022/09/16 16:53:13 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int i)
{
	int	len;
	int	j;

	len = 0;
	j = i;
	if (i < 0)
		len = 1;
	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (i)
	{
		len++;
		i /= 10;
	}
	ft_putnbr(j);
	return (len);
}

int	ft_printpercent(void)
{
	ft_putchar('%');
	return (1);
}
