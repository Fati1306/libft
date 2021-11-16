/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:33:37 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/15 07:45:19 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = dlen;
	i = 0;
	if (dlen + 1 < dstsize && dstsize > 0)
	{
		while (src[i] && dlen + i + 1 < dstsize)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dlen >= dstsize)
		return (dstsize + slen);
	return (dlen + slen);
}
