/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:58:48 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/07 04:23:17 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
		i = 1;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*mallocer(int n)
{
	int		a;
	char	*heap;

	a = digit(n);
	heap = (char *)malloc((a + 1) * sizeof(char));
	if (!heap)
		return (NULL);
	heap[a] = '\0';
	return (heap);
}

char	*ft_itoa(int n)
{
	int		d;
	char	*heap;

	d = digit(n) - 1;
	heap = mallocer(n);
	if (n == -2147483648)
	{
		heap[0] = '-';
		heap[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		heap[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{
		heap[d--] = n % 10 + 48;
		n = n / 10;
	}
	if (n < 10)
		heap[d] = n + 48;
	return (heap);
}
