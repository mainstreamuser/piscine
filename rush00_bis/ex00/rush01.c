/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:30:14 by acurri            #+#    #+#             */
/*   Updated: 2021/09/04 15:57:50 by gluisier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

char	get_midle_char(char *chars, int i)
{
	char	m;

	if (chars[i] == '\0')
	{
		m = ' ';
	}
	else
	{
		m = chars[i];
	}
	return (m);
}

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

/*
 * Function: rush_ultimate
 * -----------------------
 *  Better version of function rush that has a parameter to define which
 *  	character to use
 *
 *  x: 		width of the rectangle
 *  y: 		height of the rectangle
 *  chars:	array of chars defining which char to use with the following format
 *  			[c00,c01,c10,c11,bw, bh,m]
 *  			with:	0. c00,	top left corner
 *  					1. c01,	bottom left corner
 *  					2. c10,	top right corner
 *  					3. c11,	bottom right corner
 *  					4. bw,	border width (top and bottom)
 *  					5. bh,	border height (left and right)
 *  					6. m,	midle
 *  			if m is not defined default is a space
 */
void	rush_ultimate(int x, int y, char *chars)
{
	char	m;
	int		j;

	m = get_midle_char(chars, 6);
	j = 0;
	while (j < y)
	{
		if (j == 0)
		{
			print_line(chars[0], chars[4], chars[2], x);
		}
		else if (j < y - 1)
		{
			print_line(chars[5], m, chars[5], x);
		}
		else
		{
			print_line(chars[1], chars[4], chars[3], x);
		}
		++j;
	}
}
