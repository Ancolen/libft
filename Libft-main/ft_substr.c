/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:42:49 by myerturk          #+#    #+#             */
/*   Updated: 2023/07/19 07:42:50 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	char	*src;

	src = (char *)s;
	if (!src)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
		str = (char *)malloc((sizeof(char) * len) + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, (char *)(s + start), len + 1);
	}
	return (str);
}
/*int	main()
{
	printf("*%s*\n",ft_substr("tripouille", 3, 3));
	printf("*%s*\n",ft_substr1("tripouille", 42, 42000000));
}*/
