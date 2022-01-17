/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:30:14 by acurri            #+#    #+#             */
/*   Updated: 2021/09/04 13:46:32 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	print_line(char first, char mid, char last, int width)
{
	int	x;

	x = 0;
	while (x < width)
	{
		if (x == 0)
		{
			ft_putchar(first);
		}
		else if (x < width - 1)
		{
			ft_putchar(mid);
		}
		else
		{
			ft_putchar(last);
		}
		++x;
	}
	if (width > 0)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	char	c0;
	char	c1;
	char	mid;
	int		j;

	c0 = '/';
	c1 = '\\';
	mid = '*';
	j = 0;
	while (j < y)
	{
		if (j == 0)
		{
			print_line(c0, mid, c1, x);
		}
		else if (j < y - 1)
		{
			print_line(mid, ' ', mid, x);
		}
		else
		{
			print_line(c1, mid, c0, x);
		}
		++j;
	}
}
