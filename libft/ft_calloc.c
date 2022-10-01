/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:04:24 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/08 05:29:33 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*tmp;

	if (n == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	tmp = malloc(n * size);
	if (tmp == NULL)
		return (tmp);
	ft_bzero(tmp, size * n);
	return (tmp);
}
