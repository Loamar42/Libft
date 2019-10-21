/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:01:15 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 16:40:58 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		pos;
	char		*str;
	size_t		i;

	i = 0;
	pos = 0;
	if (ft_strlen(s) < start)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	pos = start;
	while (i < len)
	{
		str[i] = s[pos];
		i++;
		pos++;
	}
	str[i] = '\0';
	return (str);
}
