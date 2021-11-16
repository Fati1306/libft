/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:36:50 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/15 08:09:52 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	temp2 = *lst;
	if (*lst || del)
	{
		while (temp != NULL)
		{
			del(temp->content);
			temp = temp->next;
			free(temp2);
			temp2 = temp;
		}
	}
	*lst = NULL;
}
