/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carrtobuff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 15:43:50 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 13:17:28 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_buff	*ft_carrtobuff(char *c, size_t length)
{
	t_buff	*b;

	if ((b = ft_buffnew(length)) == NULL)
		return (NULL);
	if (length == 0 || c == NULL)
	{
		b->c = NULL;
		return (b);
	}
	ft_memcpy(b->c, c, length);
	return (b);
}
