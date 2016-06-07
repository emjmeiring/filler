/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnovan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 14:20:30 by arnovan-          #+#    #+#             */
/*   Updated: 2016/06/07 10:26:14 by arnovan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"

# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef char	player;

typedef struct	s_table
{
	int			width;
	int			len;
	void		*data;
}				t_table;

int		get_next_line(const int fd, char **line);
t_table     get_table(int fd, int *len, int *width);

#endif
