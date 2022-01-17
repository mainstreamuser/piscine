/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:56:21 by acurri            #+#    #+#             */
/*   Updated: 2021/09/13 23:49:45 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include <stdio.h>

int	cond_check_alpha(char c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}

int cond_check_numeric(char c)

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!cond_check_alpha(str[i]))
			return (0);
		++i;
	}
	return (1);
}

/*
int main()
{
	char str[] = "";

	if( ft_str_is_alpha(str) == 1)
		write( 1, "1\n", 2);
	
}
*/
