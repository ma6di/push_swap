/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:03:00 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/19 12:32:01 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = creat_stack_a(argc, argv);
	if (!a)
		return (0);
	if (!ft_checksorted(a))
		sort(&a);
	else
	{
		ft_free(&a);
		return (0);
	}
	ft_free(&a);
	return (0);
}
