/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_push_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:26:59 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/11 19:27:01 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	st_push_top(t_stack **head, int elem)
{
	t_stack	*node;

	if (*head != NULL)
	{
		node = st_new(elem);
		if (node == NULL)
			return (0);
		node->next = (*head);
		node->prev = (*head)->prev;
		(*head)->prev = node;
		node->prev->next = node;
		(*head) = node;
		return (1);
	}
	*head = st_new(elem);
	return ((*head) != NULL);
}
