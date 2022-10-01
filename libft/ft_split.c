/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 05:15:42 by bsaeed            #+#    #+#             */
/*   Updated: 2022/04/08 14:41:12 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[0] != c)
		j++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**retres;
	int		wd;
	int		i;
	int		j;

	wd = wordcounter(s, c);
	retres = malloc((wd + 1) * 8);
	if (!retres)
		return (NULL);
	i = 0;
	wd = 0;
	while (s[i] != '\0' && wd < wordcounter(s, c))
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		retres[wd++] = ft_substr(&s[i], 0, j);
		i += j;
	}
	retres[wd] = 0;
	return (retres);
}

/*int main()
{
	char str[] = "IKZZZ #445 ";
	int wd = wordcounter(str, ' ');
	int i = 0;
	char **tmp = ft_split (str, ' ');
	while (i < wd)
	{
		printf ("%s\n", tmp[i]);
		i++;
	}
}*/
