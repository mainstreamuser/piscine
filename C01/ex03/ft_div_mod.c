/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:43:38 by acurri            #+#    #+#             */
/*   Updated: 2021/09/09 19:30:40 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod( int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
/*
int main ()
{
	int div;
	int mod;
	int a;
	int b;

	a = 11;
	b = 2;

	ft_div_mod( a, b, &div, &mod);

	printf( "div = %d, mod= %d", div, mod);
}
*/
