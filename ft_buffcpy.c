/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 13:35:09 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 13:57:03 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_buff	*ft_buffcpy(t_buff *dst, t_buff *src)
{
	size_t	length;

	length = (src->length <= dst->length) ? src->length : dst->length;
	ft_memcpy(dst->c, src->c, length);
	return (dst);
}
