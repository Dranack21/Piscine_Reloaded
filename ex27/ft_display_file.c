/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habouda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:07:41 by habouda           #+#    #+#             */
/*   Updated: 2024/05/18 23:02:47 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	display(char *fichier)
{
	int		fd;
	char	buffer;
	int		bytes_read;

	fd = open(fichier, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.");
		return (-3);
	}
	bytes_read = read(fd, &buffer, 1);
	if (bytes_read < 0)
	{
		ft_putstr("Cannot read file.");
		return (-3);
	}
	while (bytes_read > 0)
	{
		ft_putchar(buffer);
		bytes_read = read(fd, &buffer, 1);
	}
	close (fd);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.");
		return (-1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		return (-1);
	}
	display(av[1]);
}
