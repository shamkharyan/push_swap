/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:30:58 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/01 19:01:36 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "stack.h"
# include <limits.h>

void	sort(t_stack **a, t_stack **b);
int		sort_offset(t_stack *a, t_stack *b);
void	rotate(t_stack **a, t_stack **b, int s1, int s2);
int		itos(int index, int size);
int		closest_smaller(t_stack *head, int value);
int		closest_bigger(t_stack *head, int value);
int		cheapest_index(t_stack *a, t_stack *b);

#endif
