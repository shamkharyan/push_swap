/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_rrot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:49:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/26 16:58:41 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

//Shift Down
void	st_rrot(t_stack **a, t_stack **b, int has_name)
{
	if (a != NULL && b != NULL && *a != NULL && *b != NULL)
	{
		if (has_name)
			ft_printf("rrr\n");
		*a = (*a)->prev;
		*b = (*b)->prev;
	}
	else if (a != NULL && *a != NULL)
	{
		if (has_name)
			ft_printf("rra\n");
		*a = (*a)->prev;
	}
	else if (b != NULL && *b != NULL)
	{
		if (has_name)
			ft_printf("rrb\n");
		*b = (*b)->prev;
	}
}
