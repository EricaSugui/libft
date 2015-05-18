/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufftostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 13:17:30 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 13:29:53 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_bufftostr(const t_buff *b)
{
	char	*str;

	if (b == NULL || b->c == NULL || b->length == 0)
		return (NULL);
	if ((str = (char *)malloc(b->length + 1)) == NULL)
		return (NULL);
	ft_memcpy(str, b->c, b->length);
	str[b->length] = '\0';
	return (str);
}
