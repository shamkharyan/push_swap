/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:00:09 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 14:09:56 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static void	sort_3(t_stack **a)
{
	int	steps;

	steps = sort_offset(*a, NULL);
	if (steps == -1)
		st_swap(a, 'a');
	steps = sort_offset(*a, NULL);
	rotate(a, NULL, steps, 0);
}

static void	push_from_a(t_stack **a, t_stack **b, int *size_a)
{
	int	cheapest;
	int	target;

	st_push(a, b, 'b');
	st_push(a, b, 'b');
	*size_a -= 2;
	while (*size_a > 3)
	{
		cheapest = cheapest_index(*a, *b);
		target = closest_smaller(*b, st_get(*a, cheapest));
		rotate(a, b, cheapest, target);
		st_push(a, b, 'b');
		--(*size_a);
	}
}

static void	push_from_b(t_stack **a, t_stack **b)
{
	int	target;

	while (*b != NULL)
	{
		target = closest_bigger(*a, st_get(*b, 0));
		rotate(a, NULL, target, 0);
		st_push(b, a, 'a');
	}
	rotate(a, b, sort_offset(*a, *b), 0);
}

void	sort(t_stack **a, t_stack **b)
{
	int	size_a;
	int	cheapest;
	int	target;

	if (sort_offset(*a, *b) >= 0)
	{
		rotate(a, NULL, sort_offset(*a, *b), 0);
		return ;
	}
	size_a = st_size(*a);
	if (size_a == 3)
		sort_3(a);
	else
	{
		push_from_a(a, b, &size_a);
		sort_3(a);
		push_from_b(a, b);
	}
}
