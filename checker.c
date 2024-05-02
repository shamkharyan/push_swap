/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:38:56 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 15:36:21 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stack.h"
#include "ft_printf/ft_printf.h"
#include "check_input.h"
#include "sort.h"

static int	read_instruction(char **inst, t_stack **a, t_stack **b, int *err)
{
	if (!ft_strncmp(*inst, "sa", ft_strlen(*inst) - 1))
		st_swap(a, 0);
	else if (!ft_strncmp(*inst, "sb", ft_strlen(*inst) - 1))
		st_swap(b, 0);
	else if (!ft_strncmp(*inst, "pa", ft_strlen(*inst) - 1))
		st_push(b, a, 0);
	else if (!ft_strncmp(*inst, "pb", ft_strlen(*inst) - 1))
		st_push(a, b, 0);
	else if (!ft_strncmp(*inst, "ra", ft_strlen(*inst) - 1))
		st_rot(a, NULL, 0);
	else if (!ft_strncmp(*inst, "rb", ft_strlen(*inst) - 1))
		st_rot(NULL, b, 0);
	else if (!ft_strncmp(*inst, "rr", ft_strlen(*inst) - 1))
		st_rot(a, b, 0);
	else if (!ft_strncmp(*inst, "rra", ft_strlen(*inst) - 1))
		st_rrot(a, NULL, 0);
	else if (!ft_strncmp(*inst, "rrb", ft_strlen(*inst) - 1))
		st_rrot(NULL, b, 0);
	else if (!ft_strncmp(*inst, "rrr", ft_strlen(*inst) - 1))
		st_rrot(a, b, 0);
	else
		*err = 1;
	free(*inst);
	return (!(*err));
}

void	checker(int len, char **elems)
{
	t_stack	*a;
	t_stack	*b;
	char	*inst;
	int		err;

	err = 0;
	a = st_create(len, elems);
	b = NULL;
	inst = get_next_line(0);
	while (inst != NULL && read_instruction(&inst, &a, &b, &err))
		inst = get_next_line(0);
	if (err)
		ft_putstr_fd("Error\n", 2);
	else if (!sort_offset(a, b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (a != NULL)
		st_clear(&a);
	if (b != NULL)
		st_clear(&b);
}

int	main(int argc, char **argv)
{
	char	**elems;
	int		len;

	elems = get_elems(argc, argv, &len);
	if (argc != 1)
	{
		if (check_elems(len, elems))
			checker(len, elems);
		else
			ft_putstr_fd("Error\n", 2);
		if (argc == 2)
		{
			while (len > 0)
				free(elems[--len]);
			free(elems);
		}
	}
}
