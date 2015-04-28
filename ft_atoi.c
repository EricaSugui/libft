/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:10 by apachkof          #+#    #+#             */
/*   Updated: 2015/04/28 18:55:22 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_isspace(int c)
{
	if (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ')
	{
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	t_sign	sign;
	int		cur;
	int		result;

	cur = 0;
	result = 0;
	while (ft_isspace(str[cur]) == 1)
	{
		cur++;
	}
	sign = (str[cur] == '-') ? e_sign_neg : e_sign_pos;
	cur += (str[cur] == '+' || str[cur] == '-') ? 1 : 0;
	while (str[cur] >= '0' && str[cur] <= '9')
	{
		result = result * 10 + str[cur] - 48;
		cur++;
	}
	result = (sign == e_sign_pos) ? result : -1 * result;
	return (result);
}
