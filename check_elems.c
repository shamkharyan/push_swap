/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:40:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 14:51:29 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_input.h"

static long long	ft_atoll(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + (str[i] - '0');
		++i;
	}
	return (sign * result);
}

static int	is_num(const char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		++i;
	return (str[i] == '\0');
}

static int	is_int(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
		if (str[i] == '\0')
			return (0);
	}
	while (str[i] == '0')
		++i;
	if (str[i] == '\0')
		return (1);
	if (ft_strlen(str + i) <= 10 && is_num(str + i))
	{
		result = ft_atoll(str + i);
		if ((sign == 1 && result <= INT_MAX)
			|| (sign == -1 && -(result) >= INT_MIN))
			return (1);
	}
	return (0);
}

int	check_elems(int len, char **elems)
{
	int	i;
	int	j;

	if (len == 0 || (len == 1 && !elems[0][0]))
		return (0);
	i = 0;
	while (i < len && is_int(elems[i]))
		++i;
	if (i != len)
		return (0);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(elems[i]) == ft_atoi(elems[j]))
				return (0);
			++j;
		}
		i++;
	}
	return (1);
}
