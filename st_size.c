/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:50:18 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/15 16:35:57 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	st_size(t_stack *head)
{
	int		size;
	t_stack	*temp;

	if (head == NULL)
		return (0);
	size = 0;
	temp = head;
	while (temp->next != head)
	{
		++size;
		temp = temp->next;
	}
	return (size + 1);
}
