/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:25:41 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 13:41:49 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*res;
	size_t		pos;

	pos = 0;
	if (count == 0 || size == 0)
		return (NULL);
	if (!(res = malloc(count * size)))
		return (NULL);
	while (pos < count)
	{
		((char *)res)[pos] = 0;
		pos++;
	}
	return (res);
}
