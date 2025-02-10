/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <macaruan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:28:02 by macaruan          #+#    #+#             */
/*   Updated: 2025/02/10 19:34:04 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..push_swap.h"

static void	rotate(t_stack_node **stack)
{
    t_stack_node	*last_node;

    if (!*stack || !(*stack)->next)
        return ;
    last_node = find_last(*stack);
    last_node->next = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    last_node->next->prev = last_node;
    last_node->next->next = NULL;
}		

void	ra(t_stack_node **a, bool print)
{
    rotate(a);
    if (!print)
        ft_printf("ra\n");
}

void	rb(t_stack_node **b, bool print)
{
    rotate(b);
    if (!print)
        ft_printf("rb\n");
}

void	rr(t_stack_node **a, t_stack_node **b, bool print)
{
    rotate(a);
    rotate(b);
    if (!print)
        ft_printf("rr\n");
}