/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:36:22 by acurri            #+#    #+#             */
/*   Updated: 2021/09/22 15:04:28 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar( char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	ft_putstr(argv[0]);
	write(1, "\n", 2);
	return (0);
}
