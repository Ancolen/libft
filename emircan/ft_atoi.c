/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:53:59 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/02/16 23:40:23 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi (const char *str)
{
    int a;
    int i;
    int tmp;
    
    i = 0;
    a = 1;
    
    while(str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            a *= -1;
        i++;
    }
    tmp = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        tmp = tmp * 10 + str[i] - 48;
        i++;
    }
    return(a * tmp);
}
