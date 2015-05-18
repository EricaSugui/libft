/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 22:14:44 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 22:22:46 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_buff	*ft_buffncpy(t_buff *b1, const t_buff *b2, size_t n)
{
	n = (n <= b2->length) ? n : b2->length;
	ft_memcpy(b1->c, b2->c, n);
	b1->length = n;
	return (b1);
}
