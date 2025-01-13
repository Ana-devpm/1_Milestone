/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afailde- <afailde-@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:22:31 by afailde-          #+#    #+#             */
/*   Updated: 2024/05/20 12:23:13 by afailde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* int main()
{
	int fd = open("test_4.txt", O_RDONLY);
	int fd2 = open("test_4_1.txt", O_RDONLY);
	char *line;
	char *line_2;

	line = get_next_line(fd);
	line_2 =get_next_line(fd2);

	if (line == NULL)
		printf("NULL\n");	
	while (line)	
	{
		printf ("Line: %s\n", line);	
		free (line);
		line = get_next_line(fd);
	}
	if (line_2 == NULL)
		printf("NULL\n");	
	printf("\n");
	while (line_2)	
	{
		printf ("Line_2: %s\n", line_2);	
		free (line_2);
		line_2 = get_next_line(fd2);
	}
	close(fd);
	close(fd2);
	free(line);
	free(line_2);
	return (0);
}	 */