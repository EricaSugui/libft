/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffnbuff.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 21:14:13 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 21:29:43 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_buff	*ft_buffnbuff(const t_buff *b1, const t_buff *b2, size_t n)
{
	size_t	cur;
	t_buff	*res;

	if (b2->length == 0 || b2->c == NULL)
		return ((t_buff *)b1);
	n = (n <= b1->length) ? n : b1->length;
	cur = 0;
	while (cur + b2->length <= n)
	{
		if (ft_memcmp(&(b1->c[cur]), b2->c, b2->length) == 0)
		{
			res = ft_carrtobuff((char *)&(b1->c[cur]), b1->length - cur);
			if (res == NULL)
				return (NULL);
			return (res);
		}
		++cur;
	}
	return (NULL);
}
