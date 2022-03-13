/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:46:20 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/10 22:53:04 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, em ordem crescente, começando pela letra ’a’. 
• Ela deve ser prototipada da seguinte maneira: 
void ft_print_alphabet(void); 

*/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
