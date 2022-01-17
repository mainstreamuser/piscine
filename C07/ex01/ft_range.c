/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:46:37 by acurri            #+#    #+#             */
/*   Updated: 2021/09/21 22:46:39 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int sign(int n)
{
    if (n < 0)
    {
        n = n * -1;
        return (n);
    }
    else
        return (n);

}

int *ft_range(int min, int max)
{
    int n;
    int i;
    
    n = sign(max) + sign(min);

    int *str = malloc(n * sizeof(int));
    i = 0;
    if (min > max)
    {
        return (0);
    }
    while(min < max)
    {
        str[i] = min;
        i++;
        min++;
    }
     return(str);   
}

int main (void)
{
    int min;
    int max;
    int *res;
    int n;
    int i = 0;
    min = 23;
    max = 48;
    if ( )
    n = sign(max) + sign(min);
     printf("n = %d\n", n);
    res = ft_range(min, max);
    if (min > max)
    {
        return (0);
    }
    while(i < n)
    {
        printf("%d\n", res[i]);
        i++;
    }
}