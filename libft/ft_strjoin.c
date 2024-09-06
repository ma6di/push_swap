/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:07:19 by mcheragh          #+#    #+#             */
/*   Updated: 2024/04/30 13:51:07 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_join_data
{
	int	s1_len;
	int	s2_len;
	int	i;
}	t_join_data;

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*joined;
	t_join_data	data;

	if (!s1 || !s2)
		return (NULL);
	data.s1_len = ft_strlen(s1);
	data.s2_len = ft_strlen(s2);
	joined = malloc(sizeof(char) * (data.s1_len + data.s2_len + 1));
	if (!joined)
		return (NULL);
	data.i = 0;
	while (*s1)
	{
		joined[data.i++] = *s1++;
	}
	while (*s2)
	{
		joined[data.i++] = *s2++;
	}
	joined[data.i] = '\0';
	return (joined);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Your ft_strjoin function and helper functions go here...

int    main(void)
{
    char    *s1 = "Hello, ";
    char    *s2 = "world!";
    char    *joined;

    joined = ft_strjoin(s1, s2);
    if (!joined)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("s1: \"%s\"\n", s1);
    printf("s2: \"%s\"\n", s2);
    printf("Joined string: \"%s\"\n", joined);

    free(joined);

    return (0);
}*/
