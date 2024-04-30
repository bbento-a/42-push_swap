#include "push_swap.h"

void print_list(t_node **a, char *str)
{
	int i = 0;

	if (!*a)
	{
		ft_printf("Lista: %s is empty\n", str);
		return;
	}
	ft_printf("Lista: %s\n", str);
	while ((*a) != NULL)
	{
		ft_printf("[%d]:", i++);
		ft_printf("%d\n", (*a)->value);
		(*a) = (*a)->next;
		// ft_printf("next value: %i\n", (*a)->value);
	}
	ft_printf("\n");
}

void	init_cheapest(t_node *stack)
{
	while (stack)
	{
		stack->cheapest = false;
		stack = stack->next;
	}
}