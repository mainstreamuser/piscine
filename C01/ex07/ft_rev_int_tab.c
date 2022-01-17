/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:53:41 by acurri            #+#    #+#             */
/*   Updated: 2021/09/14 19:58:52 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	n;

	n = 0;
	while (n < size / 2)
	{
		tmp = *(tab + n);
		*(tab + n) = *(tab + size - 1 - n);
		*(tab + size - 1 - n) = tmp;
		++n;
	}
}
//	for (n = 0; n < size; n++)
//		printf("tab [%d] vaut %d\n", n, tab[n]);
/*
int main(void)
{
	int a;

	a = 6;

	int tab[6] = { 1, 2, 3, 4, 5};	
	

	ft_rev_int_tab(tab, a);
}*/
