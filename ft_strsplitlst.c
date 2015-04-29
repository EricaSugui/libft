/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 21:02:47 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/29 21:36:43 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_wlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

t_list			*ft_strsplitlst(char const *s, char c)
{
	t_list	*lst;
	t_list	*cur;
	size_t	word_length;

	lst = NULL;
	while (42)
	{
		while ((word_length = ft_wlen(s, c)) == 0)
		{
			if (*s == '\0')
				return (lst);
			++s;
		}
		if (lst == NULL)
		{
			lst = ft_lstnew(ft_strsub(s, 0, word_length), word_length);
			cur = lst;
		}
		else
		{
			cur->next = ft_lstnew(ft_strsub(s, 0, word_length), word_length);
			cur = cur->next;
		}
	}
	return (lst);
}
