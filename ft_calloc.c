/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:53:24 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/02 15:27:01 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	nbytes;

	ptr = NULL;
	nbytes = count * size;
	ptr = malloc(nbytes);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, nbytes);
	return (ptr);
}
