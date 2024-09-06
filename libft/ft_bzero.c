/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:16:21 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 11:59:00 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char ptr[] = "abcdef";
	ft_bzero(ptr, 2);
	for (size_t i = 0; i < sizeof(ptr); i++)
	{
		printf("%c", ptr[i]);
	}
	printf("\n");
	return (0);
}*/
