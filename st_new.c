/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:32:15 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/11 18:33:49 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*st_new(int elem)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (head == NULL)
		return (NULL);
	head->next = head;
	head->prev = head;
	head->value = elem;
	return (head);
}
