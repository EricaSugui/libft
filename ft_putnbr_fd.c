/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:28:54 by apachkof          #+#    #+#             */
/*   Updated: 2015/05/20 22:03:44 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int num, int fd)
{
	char			c;
	unsigned int	weight;

	if (num == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	weight = 1;
	while ((unsigned int)num / 10 / weight != 0)
		weight *= 10;
	while (weight != 0)
	{
		c = (char)(((unsigned int)num / weight) % 10) + '0';
		write(fd, &c, 1);
		weight /= 10;
	}
}
