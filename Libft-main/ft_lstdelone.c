/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:40:01 by myerturk          #+#    #+#             */
/*   Updated: 2023/07/19 07:40:03 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void ft_del(void *as)
{
	ft_bzero(as, ft_strlen(as));
}

int	main()
{
	t_list	*a;
	char	b[] = "NUSRET";

	a = ft_lstnew(b);
	printf("%s", a -> content);
	ft_lstdelone(a, ft_del);
	printf("\n*%s*",a -> content);
}*/
