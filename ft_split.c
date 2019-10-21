/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:11:53 by loamar            #+#    #+#             */
/*   Updated: 2019/10/16 12:05:29 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			count_words(char const *s, char c)
{
	size_t		count;
	size_t		pos;

	pos = 0;
	count = 0;
	while (s[pos])
	{
		while (s[pos] == c)
			pos++;
		if (s[pos] && (s[pos] != c))
		{
			count++;
			while (s[pos] && (s[pos] != c))
				pos++;
		}
	}
	return (count);
}

size_t			return_word(const char *s, char c, int index)
{
	size_t		pos3;

	pos3 = 0;
	while (s[index] && (s[index] != c))
	{
		pos3++;
		index++;
	}
	return (pos3);
}

char			**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		pos;
	size_t		pos2;

	if (!(tab = (char **)malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	pos = 0;
	pos2 = 0;
	while (s[pos] && pos2 < count_words(s, c))
	{
		while (s[pos] == c)
			pos++;
		if (s[pos] && (s[pos] != c))
		{
			tab[pos2] = ft_substr(s, pos, return_word(s, c, pos));
			pos2++;
			while (s[pos] && (s[pos] != c))
				pos++;
		}
	}
	tab[pos2] = 0;
	return (tab);
}
