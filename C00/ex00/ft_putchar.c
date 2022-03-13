/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:09:47 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/11 14:40:24 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Escreva uma função que mostre o caractere passado como parâmetro. • Ela deve ser prototipada da seguinte maneira: 
void ft_putchar(char c); 
Para indicar o caractere, você deve usar a função write da seguinte maneira. write(1, &c, 1); 

*/


#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('1');
	write (1, "\n", 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
