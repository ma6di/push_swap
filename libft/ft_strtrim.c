/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:07:32 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/29 19:22:34 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	find_trimmed_indices(char const *s1, char const *set,
size_t *start, size_t *end)
{
	*start = 0;
	while (s1[*start] && is_set(s1[*start], set))
		(*start)++;
	*end = *start;
	while (s1[*end])
		(*end)++;
	while (*end > *start && is_set(s1[*end - 1], set))
		(*end)--;
	return (*end - *start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	len = find_trimmed_indices(s1, set, &start, &end);
	i = 0;
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}
