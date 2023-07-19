/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:41:00 by myerturk          #+#    #+#             */
/*   Updated: 2023/07/19 07:41:01 by myerturk         ###   ########.fr       */
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