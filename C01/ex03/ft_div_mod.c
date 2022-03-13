/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:33:42 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 15:21:21 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função ft_div_mod que tenha a seguinte prototipagem: void ft_div_mod(int a, int b, int *div, int *mod); 
• Essa função divide os dois parâmetros a e b e armazena o resultado no int apontado por div. 
Ela também armazena o resto da divisão de a e b no int apontado por mod.
 
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
