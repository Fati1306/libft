/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:07:01 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/14 10:40:57 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_s = NULL;
	while (s[i])
		i++;
	new_s = (char *) malloc(sizeof(char) * i + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
