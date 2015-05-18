/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 21:48:41 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 21:53:21 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_buffncmp(const t_buff *b1, const t_buff *b2, size_t n)
{
	n = (n <= b1->length) ? n : b1->length;
	n = (n <= b2->length) ? n : b2->length;
	return (ft_memcmp(b1, b2, n));
}
