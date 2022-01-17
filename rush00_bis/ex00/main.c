/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:28:33 by acurri            #+#    #+#             */
/*   Updated: 2021/09/05 20:41:40 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "ft_putchar.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

void	test_rush(void)
{
	ft_putstr("Show rectangle with dim (15, 12)\n");
	rush(15, 12);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (1, 1)\n");
	rush(1, 1);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (1, 12)\n");
	rush(1, 12);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (15, 1)\n");
	rush(15, 1);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (0, 0)\n");
	rush(0, 0);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (15, 0)\n");
	rush(15, 0);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (0, 12)\n");
	rush(0, 12);
	ft_putchar('\n');
	ft_putstr("Show rectangle with dim (-15, -12)\n");
	rush(-15, -12);
}

void	test_rush_ultimate(void)
{
	ft_putstr("Ex00:\n");
	rush_ultimate(7, 7, "oooo-|");
	ft_putchar('\n');
	ft_putstr("Ex01:\n");
	rush_ultimate(7, 7, "/\\\\/**");
	ft_putchar('\n');
	ft_putstr("Ex02:\n");
	rush_ultimate(7, 7, "ACACBB");
	ft_putchar('\n');
	ft_putstr("Ex03:\n");
	rush_ultimate(7, 7, "AACCBB");
	ft_putchar('\n');
	ft_putstr("Ex04:\n");
	rush_ultimate(7, 7, "ACCABB");
	ft_putchar('\n');
	ft_putstr("ExSupp:\n");
	rush_ultimate(7, 7, "/\\\\/**+");
}

int	main(void)
{
	ft_putstr("Required exercise (Rush01)\n--------------------------\n\n");
	test_rush();
	ft_putstr("\n\n==================================================\n\n");
	ft_putstr("All exercises (Ultimate Rush)\n----------------------------\n\n");
	test_rush_ultimate();
	return (0);
}
