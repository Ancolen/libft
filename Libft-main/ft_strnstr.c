/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:42:36 by myerturk          #+#    #+#             */
/*   Updated: 2023/07/19 07:42:37 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	if (little[0] == '\0' || big == little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		i2 = 0;
		while (big [i + i2] != '\0' && little[i2] != '\0'
			&& big[i + i2] == little[i2] && i + i2 < len)
			i2++;
		if (i2 == l_len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
