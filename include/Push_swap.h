/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheragh <mcheragh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:36:53 by mcheragh          #+#    #+#             */
/*   Updated: 2024/08/19 12:42:21 by mcheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/ft_printf.h"
# include "../libft/include/libft.h"

typedef struct t_stack
{
	int				value;
	int				index;
	struct t_stack	*previous;
	struct t_stack	*next;
}	t_stack;

void	sa(t_stack **a, int j);
void	sb(t_stack **b, int j);
void	ss(t_stack **a, t_stack **b, int j);
void	pa(t_stack **a, t_stack **b, int j);
void	pb(t_stack **a, t_stack **b, int j);
void	ra(t_stack **a, int j);
void	rb(t_stack **b, int j);
void	rr(t_stack **b, t_stack **a, int j);
void	rra(t_stack **a, int j);
void	rrb(t_stack **b, int j);
void	rrr(t_stack **a, t_stack **b, int j);
int		ft_checksorted(t_stack *a);
t_stack	*create_node(int value);
int		is_duplicate(t_stack *a, int value);
t_stack	*ft_handle_single_argument(char *arg);
t_stack	*ft_handle_multiple_arguments(int argc, char **argv);
t_stack	*creat_stack_a(int argc, char **argv);
void	ft_free(t_stack **lst);
void	sort(t_stack **a);
void	sort_three(t_stack **a);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
void	print_stack(t_stack *a);
void	ft_free_split(char **split);
int		is_valid_number(char *str);
int		ft_isdigit2(int i);
void	sort_two(t_stack **a);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_find_place_a(t_stack *a, int nbr_push);
int		ft_find_place_b(t_stack *b, int nbr_push);
int		ft_find_index(t_stack *a, int nbr);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int		ft_rotate_type_ab(t_stack *a, t_stack *b);
int		ft_rotate_type_ba(t_stack *a, t_stack *b);
void	ft_sort_b_till_3(t_stack **a, t_stack **b);
t_stack	*ft_sort_into_b(t_stack **a);
t_stack	**ft_sort_into_a(t_stack **a, t_stack **b);
int		stack_size(t_stack *a);
void	sort_big(t_stack **a, t_stack *b);
t_stack	*ft_listlast(t_stack *lst);
long	ft_atoi2(const char *str);
int		check_int_max_min(char *str);
int		ft_char_ckeck(int i, char *str);
int		all_ckecks(char *str, t_stack *a);
t_stack	*add_node_to_stack(t_stack *a, int value);
t_stack	*ft_add(char *element, t_stack *a);

#endif /* PUSH_SWAP_H */
