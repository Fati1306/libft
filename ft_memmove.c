/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:44:31 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/14 16:54:50 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (s < d)
	{
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	return (dst);
}
