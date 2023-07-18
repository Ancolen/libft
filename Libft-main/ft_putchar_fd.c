/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selveren <selveren@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:01:22 by selveren          #+#    #+#             */
/*   Updated: 2022/10/21 17:13:55 by selveren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	int i = open("emir.txt", O_WRONLY);
	int	a = open("42.txt", O_WRONLY);
	ft_putchar_fd('M', i);
	ft_putchar_fd('E', a);
}*/