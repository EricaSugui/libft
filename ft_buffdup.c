/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 13:57:09 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 20:02:06 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_buff	*ft_buffdup(const t_buff *b)
{
	t_buff	*new;

	if ((new = ft_carrtobuff((char *)(b->c), b->length)) == NULL)
		return (NULL);
	return (new);
}
