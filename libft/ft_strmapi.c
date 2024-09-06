/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:18:19 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 14:01:54 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*result;
	unsigned int		size;

	size = 0;
	i = 0;
	while (s[size])
	{
		size++;
	}
	result = (char *) malloc (sizeof(char) * (size + 1));
	if (!result)
	{
		return (NULL);
	}
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
