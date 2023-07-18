/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selveren <selveren@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:58:21 by selveren          #+#    #+#             */
/*   Updated: 2022/10/22 15:53:12 by selveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	ft_ft(unsigned int i, char *a)
{
	*a = *a + i;
}
int	main()
{
	char	a[] = "aaaaaa";
	ft_striteri(a, &ft_ft);
	printf("%s", a);
}*/
