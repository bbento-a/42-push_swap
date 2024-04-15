/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:36:47 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/15 11:51:32 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_stack_node
{
	int						value;
	struct s_stack_node		*next_node;
	struct s_stack_node		*prev_node;
}	t_node;

//
// Main Function
//

//	main_ps.c
int			main(int argc, char **argv);

//
// Split
//

//	split.c
static int	ft_wordsize(char *s, char c, int i);
static int	ft_wordcount(char *s, char c);
char		**ft_split_arg(char *arg, char sep);

//
// Stack Funtions
//

//	stack_start.c
t_node		find_lastnode(t_node *lst_node);
void		append_node(t_node **stack, int n);
void		initialize_stack(t_node **a, char **argv);
//	stack_utils.c
long		ft_atol(char *str);
int			ft_stacklen(t_node **stack);
int			ft_stacksorted(t_node *stack);
//
// Error checkers and Free Functions
//

//	error_checker.c
int			syntax_checker(char *argv);
int			duplicate_checker(t_node *a, int n);
void		error_free(t_node **stack, char **mat);
//	free_mem.c 
int			ft_free_arg(char **arg, int count);
void		free_mat(char **mat);
void		free_stack(t_node **stack);
int			count_matlen(char **mat);

//
// Moves operations
// 

//	moves_push.c
static void	push(t_node **stacksrc, t_node **stackdest);
void		pa(t_node **b, t_node **a);
void		pb(t_node **a, t_node **b);

//	moves_reverserotate.c
static void	reverserotate(t_node **stack);
void		rra(t_node **a);
void		rrb(t_node **b);
void		rrr(t_node **a, t_node **b);

//	moves_rotate.c
static void	rotate(t_node **stack);
void		ra(t_node **a);
void		rb(t_node **b);
void		rr(t_node **a, t_node **b);

//	moves_swap.c
static void	swap(t_node **ptr);
void		sa(t_node **a);
void		sb(t_node **b);
void		ss(t_node **a, t_node **b);

//
// Sorting algorithms
//

//	sort_main.c

//	sort_small.c
void		three_sort(t_node **stack);
void		five_sort(t_node **stack);
#endif
