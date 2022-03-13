/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:24:29 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/11 14:47:30 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que mostre ’N’ ou ’P’ segundo o sinal do inteiro passado como parâmetro. Se n for negativo, indique ’N’. Se n for positivo ou nulo, indique ’P’. 
• Ela deve ser prototipada da seguinte maneira: 
void ft_is_negative(int n);

*/

#include <unistd.h>

void	ft_putchar(char c);
void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative();
	write (1, "\n", 1);
}

void	ft_is_negative(int n)
{
	int	i;

	i = n;
	if (i >= 0)
	{
		ft_putchar(80);
	}
	else if (i < 0)
	{
		ft_putchar(78);
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
