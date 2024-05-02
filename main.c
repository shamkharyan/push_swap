/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:04:21 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 14:52:14 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_input.h"
#include "stack.h"
#include "sort.h"

int	main(int argc, char **argv)
{
	char	**elems;
	int		len;
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc != 1)
	{
		elems = get_elems(argc, argv, &len);
		if (check_elems(len, elems))
		{
			a = st_create(len, elems);
			sort(&a, &b);
		}
		else
			ft_putstr_fd("Error\n", 2);
		if (argc == 2)
		{
			while (len > 0)
				free(elems[--len]);
			free(elems);
		}
		if (a != NULL)
			st_clear(&a);
	}
}
