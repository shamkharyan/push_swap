/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:20:38 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/15 20:18:04 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	st_get(t_stack *head, int index)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		++i;
	}
	return (temp->value);
}
