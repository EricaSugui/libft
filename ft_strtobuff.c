/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtobuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 15:31:39 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/16 15:42:10 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_buff	*ft_strtobuff(char *s)
{
	t_buff	*b;

	if ((b = (t_buff *)malloc(sizeof(*b))) == NULL)
		return (NULL);
	b->length = ft_strlen(s);
	if ((b->c = (unsigned char *)malloc(b->length)) == NULL)
	{
		free(b);
		return (NULL);
	}
	ft_memcpy(b->c, s, b->length);
	return (b);
}
