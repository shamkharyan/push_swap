/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:28:56 by pshamkha          #+#    #+#             */
/*   Updated: 2024/03/14 16:32:55 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	st_print(t_stack *head)
{
	t_stack	*temp;

	if (head != NULL)
	{
		temp = head;
		while (temp->next != head)
		{
			ft_putnbr_fd(temp->value, 1);
			ft_putstr_fd("\n", 1);
			temp = temp->next;
		}
		ft_putnbr_fd(temp->value, 1);
		ft_putstr_fd("\n", 1);
	}
}
