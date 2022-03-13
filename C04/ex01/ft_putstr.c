/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:52:27 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/18 16:36:38 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que mostre um a um os caracteres de uma string na tela. 
• O endereço do primeiro caractere da cadeia está contido no ponteiro passado como parâmetro na função. 
• Ela deverá ser prototipada da seguinte maneira: 
void ft_putstr(char *str); 

*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str ++;
	}
}

int main (void)
{
	char str[] = {"Palavras"};
	ft_putstr(str);
	return (0);
}