/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:51:08 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/15 07:46:26 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && needle[j]
			&& hay[i + j] == needle[j] && i + j < len)
			j++;
		if (j == needle_len)
			return (hay + i);
		i++;
	}
	return (NULL);
}
