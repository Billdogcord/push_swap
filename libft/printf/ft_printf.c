/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:23:36 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/24 04:22:45 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list ap, const char parse)
{
	int	len;

	len = 0;
	if (parse == 'c')
		len += ft_printchar(va_arg(ap, int));
	else if (parse == 's')
		len += ft_printstr(va_arg(ap, char *));
	else if (parse == 'p')
		len += ft_printptr(va_arg(ap, unsigned long long));
	else if (parse == 'd' || parse == 'i')
		len += ft_printnbr(va_arg(ap, int));
	else if (parse == 'u')
		len += ft_printunbr(va_arg(ap, unsigned int));
	else if (parse == 'x' || parse == 'X')
		len += ft_puthex(va_arg(ap, int), parse);
	else if (parse == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_parse(ap, s[i + 1]);
			i++;
		}
		else
			len += ft_printchar(s[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
