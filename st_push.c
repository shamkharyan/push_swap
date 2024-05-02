/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:28:14 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 13:56:24 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	st_push(t_stack **head_from, t_stack **head_to, char name)
{
	if ((*head_from) != NULL)
	{
		if (name != '\0')
			ft_printf("p%c\n", name);
		st_push_top(head_to, (*head_from)->value);
		st_pop_top(head_from);
	}
}
