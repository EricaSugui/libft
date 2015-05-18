/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufftrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 14:30:27 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 22:27:09 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bufftrim(t_buff *b)
{
	size_t			begin;

	if (b->c == NULL || b->length == 0)
		return ;
	begin = 0;
	while (b->length > 0 && (b->c[b->length - 1] == ' '
				|| b->c[b->length - 1] == '\n' || b->c[b->length - 1] == '\t'))
	{
		++begin;
		--(b->length);
	}
	while (b->length > 0 && (b->c[b->length - 1] == ' '
				|| b->c[b->length - 1] == '\n' || b->c[b->length - 1] == '\t'))
	{
		++begin;
		--(b->length);
	}
	ft_memcpy(b->c, &(b->c[begin]), b->length);
}
