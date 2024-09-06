/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:03:13 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 12:06:35 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	if (src == NULL)
		return (0);
	while (src[length])
		length++;
	if (size <= 0)
		return (length);
	while (size - 1 > 0 && src[i])
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	dst[i] = '\0';
	return (length);
}
