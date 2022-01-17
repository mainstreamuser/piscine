/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:57:28 by acurri            #+#    #+#             */
/*   Updated: 2021/09/21 11:52:50 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
}
/*
int main (void)
{ 
    char s1[] = "salut";
    char s2[] = "sal\200";

    printf("%d\n" ,ft_strcmp(s1, s2));
    printf("%d", strcmp(s1,s2));
}*/
