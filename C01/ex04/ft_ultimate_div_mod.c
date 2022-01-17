/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:54:56 by acurri            #+#    #+#             */
/*   Updated: 2021/09/14 19:54:58 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int main()
{
	int a;
	int b;

	a = 11;
	b = 2;

	ft_ultimate_div_mod( &a, &b);
	printf("a = %d, b= %d", a,b);
}
*/
