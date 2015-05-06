/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/06 18:52:57 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/06 19:06:53 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_buff	*ft_buffnew(size_t length)
{
	t_buff	*buff;

	if ((buff = (t_buff *)malloc(sizeof(*buff))) == NULL)
		return (NULL);
	buff->length = length;
	if ((buff->c = (unsigned char *)malloc(length)) == NULL)
	{
		free(buff);
		return (NULL);
	}
	return (buff);
}
