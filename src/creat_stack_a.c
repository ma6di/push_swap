/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:51:38 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/19 12:37:37 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Push_swap.h"

t_stack	*creat_stack_a(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (argc == 2)
		return (ft_handle_single_argument(argv[1]));
	else
		return (ft_handle_multiple_arguments(argc, argv));
}

t_stack	*ft_handle_single_argument(char *arg)
{
	t_stack	*a;
	char	**tmp;
	int		j;

	a = NULL;
	j = -1;
	tmp = ft_split(arg, ' ');
	if (!tmp)
		return (NULL);
	while (tmp[++j])
	{
		a = ft_add(tmp[j], a); 
		if (!a)
		{
			ft_free_split(tmp);
			return (NULL);
		}
	}
	ft_free_split(tmp);
	return (a);
}

t_stack	*ft_handle_multiple_arguments(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		value;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		if (!all_ckecks(argv[i], a))
		{
			ft_free(&a);
			return (NULL);
		}
		value = ft_atoi(argv[i]);
		a = add_node_to_stack(a, value);
		if (!a)
		{
			return (NULL);
		}
		i++;
	}
	return (a);
}

t_stack	*ft_add(char *element, t_stack *a)
{
	if (!all_ckecks(element, a))
	{
		ft_free(&a);
		return (NULL);
	}
	a = add_node_to_stack(a, ft_atoi(element));
	if (!a)
		return (NULL);
	return (a);
}

t_stack	*add_node_to_stack(t_stack *a, int value)
{
	t_stack	*new_node;
	t_stack	*current;

	new_node = create_node(value);
	if (!new_node)
		return (NULL);
	if (!a)
		return (new_node);
	current = a;
	while (current->next)
		current = current->next;
	current->next = new_node;
	return (a);
}
