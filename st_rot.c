/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:47:59 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/26 16:58:09 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

//Shift Up
void	st_rot(t_stack **a, t_stack **b, int has_name)
{
	if (a != NULL && b != NULL && *a != NULL && *a != NULL)
	{
		if (has_name)
			ft_printf("rr\n");
		*a = (*a)->next;
		*b = (*b)->next;
	}
	else if (a != NULL && *a != NULL)
	{
		if (has_name)
			ft_printf("ra\n");
		*a = (*a)->next;
	}
	else if (b != NULL && *b != NULL)
	{
		if (has_name)
			ft_printf("rb\n");
		*b = (*b)->next;
	}
}
