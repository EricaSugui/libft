/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 20:22:30 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 20:38:01 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff	*ft_buffncat(t_buff *b1, const t_buff *b2, size_t n)
{
	n = (n <= b2->length) ? n : b2->length;
	ft_memcpy(&(b1->c[b1->length]), b2->c, n);
	return (b1);
}
