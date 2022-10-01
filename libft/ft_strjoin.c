/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:38:10 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/07 03:09:01 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		total;
	char	*heap;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	heap = malloc(sizeof(char) * total + 1);
	if (!heap)
		return (0);
	while (s1[i])
	{
		heap[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		heap[i++] = s2[j++];
	}	
	heap[i] = '\0';
	return (heap);
}
