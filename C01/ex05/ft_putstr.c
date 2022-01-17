/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:04:17 by acurri            #+#    #+#             */
/*   Updated: 2021/09/09 19:36:52 by acurri           ###   ########.fr       */
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
/*
int main()
{
	char str[] = "bonjour";
	//char *ptr;

	//ptr = str;

	ft_putstr(str);
}
*/
