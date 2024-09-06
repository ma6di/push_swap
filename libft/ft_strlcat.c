/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:51:25 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 19:23:26 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	t1;
	size_t	t2;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size <= t1)
		return (t2 + size);
	while (t1 + i < size - 1 && src[i] != '\0')
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}
