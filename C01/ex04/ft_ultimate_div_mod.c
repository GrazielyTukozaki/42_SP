/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:41:17 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 15:31:44 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função ft_ultimate_div_mod que tenha a seguinte prototipagem: void ft_ultimate_div_mod(int *a, int *b); 
• Essa função divide os int apontados por a e b. 
O resultado da divisão está armazenado no int apontado por a. 
O resultado do resto da divisão está armazenado no int apontado por b.
 
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
