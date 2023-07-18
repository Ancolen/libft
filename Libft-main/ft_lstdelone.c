/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selveren <selveren@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:28:30 by selveren          #+#    #+#             */
/*   Updated: 2022/10/21 14:30:15 by selveren         ###   ########.fr       */
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
