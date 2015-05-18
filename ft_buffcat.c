/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 20:17:10 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 20:34:53 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff	*ft_buffcat(t_buff *b1, const t_buff *b2)
{
	ft_memcpy(&(b1->c[b1->length]), b2->c, b2->length);
	return (b1);
}
