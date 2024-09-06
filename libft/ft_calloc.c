/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:46:58 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 19:20:17 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*allocate_and_zero_memory(size_t total_size)
{
	void	*ptr;

	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;

	if (nmemb == 0 || size == 0)
		return (allocate_and_zero_memory(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	return (allocate_and_zero_memory(total_size));
}
