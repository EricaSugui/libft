/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 18:51:30 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/28 21:01:01 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*src_arr;
	unsigned char		*dst_arr;
	unsigned char		ch;
	size_t				i;

	src_arr = (const unsigned char *)src;
	dst_arr = (unsigned char *)dst;
	ch = (char)c;
	i = 0;
	while (i < n)
	{
		dst_arr[i] = src_arr[i];
		++i;
		if (src_arr[i - 1] == ch)
		{
			return (void *)&(src_arr[i]);
		}
		if (i == n)
		{
			break ;
		}
	}
	return (NULL);
}
