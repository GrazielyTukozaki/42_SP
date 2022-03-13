/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:29:17 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 15:43:23 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são dados em parâmetros. 
• Ela deverá ser prototipada da seguinte maneira: 
void ft_swap(int *a, int *b); 


*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
