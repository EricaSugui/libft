/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 21:59:16 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 22:12:03 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_buff	*ft_buffmapi(t_buff const *b, char (*f)(size_t n, char c))
{
	t_buff	*new;
	size_t	i;

	if ((new = ft_buffdup(b)) == NULL)
		return (NULL);
	i = 0;
	while (i < b->length)
	{
		new->c[i] = f(i, new->c[i]);
		++i;
	}
	return (new);
}
