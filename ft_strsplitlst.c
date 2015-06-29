/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 21:02:47 by apachkof          #+#    #+#             */
/*   Updated: 2015/06/29 21:47:26 by apachkof         ###   ########.fr       */
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
		++len;
		++s;
	}
	return (len);
}

t_list			*ft_strsplitlst(char const *s, char c)
{
	t_list	*lst;
	size_t	word_len;

	lst = NULL;
	while (42)
	{
		while ((word_len = ft_wlen(s, c)) == 0)
		{
			if (*s == '\0')
				return (lst);
			++s;
		}
		ft_lstpush(&lst, ft_lstnew(ft_strsub(s, 0, word_len), word_len + 1));
		s += word_len;
	}
	return (lst);
}
