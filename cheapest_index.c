/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:53:29 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 17:30:25 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

static void	cheapest_index_top(t_stack *a, t_stack *b, int *steps, int *cheap_i)
{
	int		i;
	int		s1;
	int		s2;
	t_stack	*temp;

	s1 = st_size(a);
	s2 = st_size(b);
	temp = a;
	i = -1;
	while (++i < s1 / 2)
	{
		if (*steps < i)
			break ;
		if (i + ft_abs(itos(closest_smaller(b, temp->value), s2)) < *steps)
		{
			*steps = i + ft_abs(itos(closest_smaller(b, temp->value), s2));
			*cheap_i = i;
		}
		temp = temp->next;
	}
}

static void	cheapest_index_bot(t_stack *a, t_stack *b, int *steps, int *cheap_i)
{
	int		i;
	int		s1;
	int		s2;
	t_stack	*temp;

	s1 = st_size(a);
	s2 = st_size(b);
	temp = a->prev;
	i = s1;
	while (--i >= s1 / 2 + s1 % 2)
	{
		if (*steps < s1 - i)
			break ;
		if (s1 - i + ft_abs(itos(closest_smaller(b, temp->value), s2)) < *steps)
		{
			*steps = s1 - i + ft_abs(itos(closest_smaller(b, temp->value), s2));
			*cheap_i = i;
		}
		temp = temp->prev;
	}
}

int	cheapest_index(t_stack *a, t_stack *b)
{
	int	steps;
	int	cheap_i;

	steps = INT_MAX;
	cheap_i = 0;
	cheapest_index_top(a, b, &steps, &cheap_i);
	cheapest_index_bot(a, b, &steps, &cheap_i);
	return (cheap_i);
}
