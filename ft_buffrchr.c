/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 20:38:34 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 21:14:07 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_buffrchr(const t_buff *b, int c)
{
	size_t	i;

	if (b->length == 0 || b->c == NULL)
		return (NULL);
	i = b->length;
	while (i > 0 && b->c[i] != (unsigned char)c)
		--i;
	if (b->c[i] == (unsigned char)c)
		return ((char *)&(b->c[i]));
	return (NULL);
}
