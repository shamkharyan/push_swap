/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:40:42 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 15:04:38 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_INPUT_H
# define CHECK_INPUT_H

# include "ft_printf/ft_printf.h"
# include <limits.h>

int		check_elems(int len, char **elems);
char	**get_elems(int argc, char **argv, int *len);

#endif
