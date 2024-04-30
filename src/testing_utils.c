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
	while ((*a)->next != NULL)
	{
		ft_printf("[%d]:", i++);
		ft_printf("%d\n", (*a)->value);
		(*a) = (*a)->next;
	}
	ft_printf("\n");
}
