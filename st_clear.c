/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:10:01 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/11 18:36:24 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	st_clear(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	temp->prev->next = NULL;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
}
