/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_max_ind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:49:22 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 18:16:15 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	st_max_ind(t_stack *head)
{
	int		max;
	int		max_i;
	int		i;
	t_stack	*temp;

	temp = head;
	max = temp->value;
	max_i = 0;
	i = 0;
	while (temp != head || i == 0)
	{
		if (temp->value > max)
		{
			max = temp->value;
			max_i = i;
		}
		++i;
		temp = temp->next;
	}
	return (max_i);
}
