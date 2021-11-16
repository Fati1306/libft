/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-maac <fel-maac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:59:35 by fel-maac          #+#    #+#             */
/*   Updated: 2021/11/14 11:02:30 by fel-maac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_for_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[j])
	{
		i = 0;
		while (set[i])
		{
			if (s1[j] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		j++;
	}
	return (j);
}

static int	check_for_end(char const *s1, char const *set, int start)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[j])
		j++;
	while (j > start)
	{
		i = 0;
		while (set[i])
		{
			if (s1[j - 1] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		j--;
	}
	return (j);
}

static char	*malloc_null_str(char *s)
{
	s = (char *) malloc(1);
	if (s == NULL)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_trim;
	int		end_trim;
	int		i;
	char	*trimmed_s;

	trimmed_s = NULL;
	if (!s1 || !set)
		return (NULL);
	start_trim = check_for_start(s1, set);
	if (start_trim >= (int)ft_strlen(s1))
		return (malloc_null_str(trimmed_s));
	end_trim = check_for_end(s1, set, start_trim);
	i = 0;
	trimmed_s = (char *) malloc(sizeof(char) * end_trim - start_trim + 1);
	if (trimmed_s == NULL)
		return (NULL);
	while (start_trim < end_trim)
		trimmed_s[i++] = s1[start_trim++];
	trimmed_s[i] = '\0';
	return (trimmed_s);
}
