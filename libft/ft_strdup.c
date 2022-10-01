/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:21:04 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/07 01:34:58 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*heap;

	i = 0;
	heap = (char *)malloc(ft_strlen(s1) + 1);
	if (!heap)
		return (0);
	while (s1[i])
	{
		heap[i] = s1[i];
		i++;
	}
	heap[i] = '\0';
	return (heap);
}
