/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:59:50 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 15:32:26 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "ft_printf/ft_printf.h"
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

t_stack	*st_create(int len, char **elems);
t_stack	*st_new(int elem);
int		st_push_top(t_stack **head, int elem);
void	st_pop_top(t_stack **head);
void	st_clear(t_stack **head);
void	st_print(t_stack *head);
int		st_size(t_stack *head);
int		st_get(t_stack *head, int index);
int		st_rget(t_stack *head, int index);
int		st_max_ind(t_stack *head);
int		st_min_ind(t_stack *head);
void	st_swap(t_stack **head, char name);
void	st_push(t_stack **head_from, t_stack **head_to, char name);
void	st_rot(t_stack **a, t_stack **b, int has_name);
void	st_rrot(t_stack **a, t_stack **b, int has_name);

#endif
