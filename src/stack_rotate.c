/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:20:43 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/16 16:21:07 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->value);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->value))
			i = ft_case_rarb_a(a, b, tmp->value);
		if (i > ft_case_rrarrb_a(a, b, tmp->value))
			i = ft_case_rrarrb_a(a, b, tmp->value);
		if (i > ft_case_rarrb_a(a, b, tmp->value))
			i = ft_case_rarrb_a(a, b, tmp->value);
		if (i > ft_case_rrarb_a(a, b, tmp->value))
			i = ft_case_rrarb_a(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->value);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->value))
			i = ft_case_rarb(a, b, tmp->value);
		if (i > ft_case_rrarrb(a, b, tmp->value))
			i = ft_case_rrarrb(a, b, tmp->value);
		if (i > ft_case_rarrb(a, b, tmp->value))
			i = ft_case_rarrb(a, b, tmp->value);
		if (i > ft_case_rrarb(a, b, tmp->value))
			i = ft_case_rrarb(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}
