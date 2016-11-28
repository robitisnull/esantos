/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 11:00:26 by esantos           #+#    #+#             */
/*   Updated: 2016/11/27 19:01:13 by esantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

int		main(void)
{
	char	*line;
	int		fd;

	if ((fd = open("file.txt", O_RDONLY)) == -1)
		return (-1);
	if (get_next_line(fd, &line) != 0)
	{
		printf("%s", line);
		free(line);
	}
	if (close(fd) == -1)
		return (-1);
	return (0);
}
