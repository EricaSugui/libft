/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:28:54 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/18 14:26:00 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num, int fd)
{
	char	c;
	int		weight;

	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (num < 0)
		write(fd, "-", 1);
	else
		num = -num;
	weight = 1;
	while ((num / (10 * weight)) != 0)
	{
		weight *= 10;
	}
	while (weight != 0)
	{
		c = -(num / weight) % 10 + '0';
		write(fd, &c, 1);
		weight /= 10;
	}
}
