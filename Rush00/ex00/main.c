/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:28:33 by acurri            #+#    #+#             */
/*   Updated: 2021/09/05 20:01:51 by acurri           ###   ########.fr       */
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

int	main(void)
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
