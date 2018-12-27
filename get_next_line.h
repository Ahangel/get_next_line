/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: GriK <GriK@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 23:24:42 by vmatthys          #+#    #+#             */
/*   Updated: 2018/12/27 23:50:32 by GriK             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1024

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct			fd_struct
{
	int					fd;
	int					state;
	size_t				nbr_lines;
	t_list				*data;
	struct fd_struct	*next;
}						fd_t;

int						get_next_line(int const fd, char **line);

#endif
