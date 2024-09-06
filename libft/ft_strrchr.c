/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:59:13 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 19:21:29 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_length;

	s_length = 0;
	if (!s)
		return (NULL);
	while (s[s_length] != '\0')
	{
		s_length++;
	}
	while (s_length >= 0)
	{
		if (s[s_length] == (char)c)
		{
			return ((char *)&s[s_length]);
		}
		s_length--;
	}
	return (NULL);
}
