/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:12:08 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 18:12:12 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	int	emp;

	emp = *a;
	*a = *b;
	*b = emp;
}
