/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:22:33 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 13:52:54 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	st_swap(t_stack **head, char name)
{
	int	temp;

	if ((*head) != NULL && (*head)->next != (*head))
	{
		temp = (*head)->value;
		(*head)->value = (*head)->next->value;
		(*head)->next->value = temp;
		if (name != '\0')
			ft_printf("s%c\n", name);
	}
}
