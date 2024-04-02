/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:36:47 by bbento-a          #+#    #+#             */
/*   Updated: 2024/04/02 12:46:37 by bbento-a         ###   ########.fr       */
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

// Main Function
//	main_ps.c
int			main(int argc, char **argv);

// Split
//	split.c
static int	ft_free(char **arg, int count);
static int	ft_wordsize(char *s, char c, int i);
static int	ft_wordcount(char *s, char c);
char		**ft_split_arg(char *arg, char sep);

// Stack Funtions
//	stack_start.c
t_node		set_lastnode(t_node *lst_node);
void		append_node(t_node **stack, int n);
void		initialize_stack(t_node **a, char **argv);

//	stack_utils.c
long		ft_atol(char *str);

// Moves operations
//	moves_push.c
//	moves_rotate.c
//	moves_swap.c

#endif
