/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afailde- <afailde-@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:21:13 by afailde-          #+#    #+#             */
/*   Updated: 2024/05/20 14:27:55 by afailde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h" 

/*
int main()
{
	int fd = open("test_5.txt", O_RDONLY);
	char *line;

	line = get_next_line(fd);
	if (line == NULL)
		printf("NULL\n");
	while (line)
	{
		printf ("Line: %s\n", line);	
		free (line);
		line = get_next_line(fd);
	}
	close(fd);
	free (line);
	return (0);
files/big_line_with_nl: T
} */

/* void ft_leaks()
{
	system("leaks -q a.out");
} */

/* int main(int argc, char *argv[])
{

	if (argc < 2)
		return (1);
	atexit(ft_leaks);
	int fd = open(argv[1], O_RDONLY);
	char *line;

	line = get_next_line(fd);
	if (line == NULL)
		printf("NULL\n");
	while (line)
	{
		printf ("Line: %s", line);
		free (line);
		line = get_next_line(fd);
	}  
 	printf ("Line: %s", line);
	line = get_next_line(fd);
	printf ("Line: %s", line);
	close(fd); 
	return (0);
}  */
