/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 19:41:53 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 20:13:12 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff	*ft_buffmap(t_buff const *b, char (*f)(char))
{
	t_buff	*new;
	size_t	i;

	if ((new = ft_buffdup(b)) == NULL)
		return (NULL);
	i = 0;
	while (i < b->length)
	{
		new->c[i] = f(new->c[i]);
		++i;
	}
	return (new);
}
