/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:28:02 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 13:19:49 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static void	rotate_both(t_stack **a, t_stack **b, int *s1, int *s2)
{
	while (*s1 > 0 && *s2 > 0)
	{
		st_rot(a, b, 1);
		--(*s1);
		--(*s2);
	}
	while (*s1 < 0 && *s2 < 0)
	{
		st_rrot(a, b, 1);
		++(*s1);
		++(*s2);
	}
}

static void	rotate_left(t_stack **a, t_stack **b, int *s1, int *s2)
{
	while (*s1 > 0)
	{
		st_rot(a, NULL, 1);
		--(*s1);
	}
	while (*s1 < 0)
	{
		st_rrot(a, NULL, 1);
		++(*s1);
	}
	while (*s2 > 0)
	{
		st_rot(NULL, b, 1);
		--(*s2);
	}
	while (*s2 < 0)
	{
		st_rrot(NULL, b, 1);
		++(*s2);
	}
}

void	rotate(t_stack **a, t_stack **b, int s1, int s2)
{
	if (a != NULL)
		s1 = itos(s1, st_size(*a));
	else
		s1 = 0;
	if (b != NULL)
		s2 = itos(s2, st_size(*b));
	else
		s2 = 0;
	rotate_both(a, b, &s1, &s2);
	rotate_left(a, b, &s1, &s2);
}
