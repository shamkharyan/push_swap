/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_min_ind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:51:45 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 18:17:11 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	st_min_ind(t_stack *head)
{
	int		min;
	int		min_i;
	int		i;
	t_stack	*temp;

	temp = head;
	min = temp->value;
	min_i = 0;
	i = 0;
	while (temp != head || i == 0)
	{
		if (temp->value < min)
		{
			min = temp->value;
			min_i = i;
		}
		++i;
		temp = temp->next;
	}
	return (min_i);
}
