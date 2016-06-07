/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnovan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/07 08:20:08 by arnovan-          #+#    #+#             */
/*   Updated: 2016/06/07 10:23:19 by arnovan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static t_list	*get_lstfile(int fd, int **len)
{
	char	*line;
	t_list	*list;

	line = NULL;
	list = NULL;
	while (get_next_line(fd, &line) == 1)
	{
		**len = ft_strlen(line);
		ft_lstpushback(&list, line, **len);
	}
	return (list);
}

t_table		get_table(int fd, int *len, int *width)
{
	t_table	*table;
	char	**line;
	t_list	*list;
	int		x;

	x = 0;
	list = get_lstfile(fd, &len);
	if (!list)
		exit(0);
	table = (t_table *)malloc(sizeof(t_table) * ft_lstlen(list));
	while (list)
	{
		line = list->content;
		table->data = (void *)line;
		list = list->next;
	}
	*width = x + 1;
	return (table);
}

