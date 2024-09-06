/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:19:38 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/09 18:42:56 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"
#include "./include/ft_printf.h"

int	ft_placeholder(va_list args, const char placeholder)
{
	int	count;

	count = 0;
	if (placeholder == 'c')
		count += is_char(va_arg(args, int));
	else if (placeholder == 's')
		count += is_str(va_arg(args, char *));
	else if (placeholder == 'p')
		count += is_p(va_arg(args, unsigned long long));
	else if (placeholder == 'd' || placeholder == 'i')
		count += is_d_i(va_arg(args, int));
	else if (placeholder == 'u')
		count += is_u(va_arg(args, unsigned int));
	else if (placeholder == 'x' || placeholder == 'X')
		count += print_hex(va_arg(args, unsigned int), placeholder);
	else if (placeholder == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	unsigned long	i;
	unsigned long	len;
	int				count;
	va_list			args;

	va_start(args, str);
	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == '%')
			count += ft_placeholder(args, str[i + 1]);
		else
		{
			write (1, &str[i], 1);
			count++;
			i--;
		}
		i += 2;
	}
	va_end(args);
	return (count);
}
