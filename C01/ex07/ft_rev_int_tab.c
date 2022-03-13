/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:21:27 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 16:01:36 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*


• Escreva uma função que inverta a ordem dos elementos de uma matriz de inteiros. • Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz. • A função deverá ser prototipada da seguinte maneira: 
void ft_rev_int_tab(int *tab, int size); 

 
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
