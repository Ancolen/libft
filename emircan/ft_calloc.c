/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:56:40 by ekaymaz           #+#    #+#             */
/*   Updated: 2022/01/31 20:04:54 by ekaymaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
























#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(int count, int size)
{
    void    *ptr;

    ptr = malloc(count * size);
    if (ptr == 0)
        return (ptr);
    bzero(ptr, count * size);
    return (ptr);
}

int main() {
    int* array;
    int size = 5;

    // 5 adet int için bellek tahsis et ve sıfırla
    array = (int*)ft_calloc(size, sizeof(int));

    if (array == NULL) {
        printf("Bellek tahsis edilemedi!");
        return 1;
    }

    // Tahsis edilen belleği kullan
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Belleği serbest bırak
    free(array);

    return 0;
}