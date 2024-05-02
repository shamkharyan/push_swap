/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_offset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:23:22 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 18:26:22 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	sort_offset(t_stack *a, t_stack *b)
{
	int		i;
	int		min_i;
	t_stack	*temp;

	if (b != NULL)
		return (-1);
	min_i = st_min_ind(a);
	i = 0;
	while (i++ < min_i)
		a = a->next;
	temp = a;
	while (temp->next != a || i == min_i)
	{
		if (temp->value > temp->next->value)
			return (-1);
		temp = temp->next;
		++i;
	}
	return (min_i);
}
