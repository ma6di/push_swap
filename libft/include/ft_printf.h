/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:55:52 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/09 18:41:40 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int		ft_printf(const char *format, ...);
int		calculate_hex_length(unsigned long long value);
void	to_hex(unsigned int num, const char format);
int		is_p(unsigned long long ptr);
int		is_char(char c);
int		is_d_i(int num);
int		is_str(char *s);
int		is_u(unsigned int num);
int		print_hex(unsigned int num, const char format);
int		ft_placeholder(va_list args, const char placeholder);
void	put_p(uintptr_t num);
int		p_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);

#endif
