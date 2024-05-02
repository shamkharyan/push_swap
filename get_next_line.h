/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <pshamkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:15:44 by pshamkha          #+#    #+#             */
/*   Updated: 2024/04/07 13:16:08 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"

char	*get_next_line(int fd);
char	*get_linef(char *file);
char	*set_file(char *file);
char	*get_file(int fd, char *file);
char	*join_free(char *file, char *buff);

#endif
