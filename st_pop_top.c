/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_pop_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:26:48 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/14 16:39:19 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	st_pop_top(t_stack **head)
{
	t_stack	*temp;

	if ((*head) != NULL && (*head)->next != *head)
	{
		temp = *head;
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
		(*head) = (*head)->next;
		free(temp);
		return ;
	}
	free(*head);
	*head = NULL;
}
