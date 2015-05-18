/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 21:29:51 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 21:55:31 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_buffcmp(const t_buff *b1, const t_buff *b2)
{
	size_t	length;

	length = (b1->length < b2->length) ? b1->length : b2->length;
	return (ft_memcmp(b1, b2, length));
}
