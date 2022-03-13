/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:28:43 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:36 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que mostre todos os números em uma única linha em ordem crescente. 
• Ela deve ser prototipada da seguinte maneira: 
void ft_print_numbers(void); 

*/

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
