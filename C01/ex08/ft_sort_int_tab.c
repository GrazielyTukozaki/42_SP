/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:31:16 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 16:41:50 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que ordene uma matriz de inteiros em ordem crescente. • Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz. • A função deverá ser prototipada da seguinte maneira: 
void ft_sort_int_tab(int *tab, int size); 
 
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	z;
	int	temp;

	z = 0;
	while (z < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		z++;
	}
}
