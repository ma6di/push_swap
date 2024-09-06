/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:52:51 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 12:01:39 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_forward(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	copy_backward(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		dest[i - 1] = src[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (dest < src && dest + n > src)
		copy_forward(dest_ptr, src_ptr, n);
	else if (dest > src && src + n > dest)
		copy_backward(dest_ptr, src_ptr, n);
	else
		copy_forward(dest_ptr, src_ptr, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

// Your ft_memmove function and helper functions go here

int main()
{
    char src1[] = "Hello, World!";
    //char dest1[20];

    // Test overlapping memory regions
    ft_memmove(src1 + 7, src1, 7);
    printf("Test 1: %s\n", src1);

    char src2[] = "Hello, World!";
    char dest2[20];

    // Test non-overlapping memory regions
    ft_memmove(dest2, src2, strlen(src2) + 1);
    printf("Test 2: %s\n", dest2);

    // Test when src is NULL
    char dest3[20] = "Test";
    ft_memmove(dest3, NULL, 5);
    printf("Test 3: %s\n", dest3);

    // Test when dest is NULL
    char src4[] = "Hello, World!";
    ft_memmove(NULL, src4, strlen(src4) + 1);

    // Add more test cases as needed

    return 0;
}*/
