/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:59:34 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/11 08:30:58 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_str(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
	{
		str = malloc_str(1);
		if (!str)
			return (NULL);
	}
	else
	{
		str = malloc_str(len + 1);
		if (!str)
			return (NULL);
	}
	while (s[start] && i < len && start < ft_strlen(s))
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
