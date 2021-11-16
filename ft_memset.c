/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:27:51 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/02 15:49:25 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*p;

	i = 0;
	ch = c;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = ch;
		i++;
	}
	return (b);
}
