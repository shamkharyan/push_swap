/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   targets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:01:55 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/26 17:08:56 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	closest_smaller(t_stack *head, int value)
{
	int		target;
	int		target_i;
	int		i;
	t_stack	*temp;

	i = 0;
	target_i = -1;
	target = INT_MIN;
	temp = head;
	while (temp != head || i == 0)
	{
		if (temp->value >= target && temp->value < value)
		{
			target_i = i;
			target = temp->value;
		}
		++i;
		temp = temp->next;
	}
	if (target_i >= 0)
		return (target_i);
	return (st_max_ind(head));
}

int	closest_bigger(t_stack *head, int value)
{
	int		target;
	int		target_i;
	int		i;
	t_stack	*temp;

	i = 0;
	target_i = -1;
	target = INT_MAX;
	temp = head;
	while (temp != head || i == 0)
	{
		if (temp->value <= target && temp->value > value)
		{
			target_i = i;
			target = temp->value;
		}
		++i;
		temp = temp->next;
	}
	if (target_i >= 0)
		return (target_i);
	return (st_min_ind(head));
}
