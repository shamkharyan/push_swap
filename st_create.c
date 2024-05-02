/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:15:29 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 14:45:14 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*st_create(int len, char **elems)
{
	t_stack	*head;
	int		i;

	head = st_new(ft_atoi(elems[len - 1]));
	if (head == NULL)
		return (NULL);
	i = len - 2;
	while (i >= 0 && st_push_top(&head, ft_atoi(elems[i])))
		--i;
	if (i >= 0)
	{
		st_clear(&head);
		return (NULL);
	}
	return (head);
}
