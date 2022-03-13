/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:57:39 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/11 14:45:55 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, em ordem decrescente, começando pela letra ’z’. 
• Ela deve ser prototipada da seguinte maneira: 
void ft_print_reverse_alphabet(void); 

*/
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet ();
	write (1, "\n", 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i > 96)
	{
		ft_putchar(i);
		i--;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
