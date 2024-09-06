/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprations3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:57:03 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/16 15:57:08 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

void	ra(t_stack **a, int j)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp1 = *a;
	tmp2 = *a;
	while (tmp1->next)
		tmp1 = tmp1->next;
	*a = (*a)->next;
	tmp1->next = tmp2;
	tmp2->next = NULL;
	if (j == 0)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int j)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!*b || !(*b)->next)
		return ;
	tmp1 = *b;
	tmp2 = *b;
	while (tmp1->next)
		tmp1 = tmp1->next;
	*b = (*b)->next;
	tmp1->next = tmp2;
	tmp2->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}

void	rrr(t_stack **a, t_stack **b, int j)
{
	rra(a, 1);
	rrb(b, 1);
	if (j == 0)
		write(1, "rrr\n", 4);
}
