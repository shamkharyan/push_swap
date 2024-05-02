/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elems.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:56:34 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 17:07:27 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_input.h"

static int	elem_count(char **elems)
{
	int	i;

	i = 0;
	while (elems[i] != NULL)
		++i;
	return (i);
}

char	**get_elems(int argc, char **argv, int *len)
{
	char	**elems;

	if (argc == 1)
	{
		*len = 0;
		elems = NULL;
	}
	if (argc == 2)
	{
		elems = ft_split(argv[1], ' ');
		*len = elem_count(elems);
	}
	else
	{
		elems = argv + 1;
		*len = argc - 1;
	}
	return (elems);
}
