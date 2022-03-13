/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:51:26 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 16:01:21 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que mostre um a um os caracteres de uma string na tela. 
• O endereço do primeiro caractere da string está contido no ponteiro passado como parâmetro para a função. 
• Ela deverá ser prototipada da seguinte maneira: 
void ft_putstr(char *str); 
 
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{	
		ft_putchar(*str);
		str++;
	}
}
