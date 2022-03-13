/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:04:44 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/18 16:35:40 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que contenha o número de caracteres em uma cadeia de carac teres e que retorne o número encontrado. 
• Ela deverá ser prototipada da seguinte maneira: 
int ft_strlen(char *str); 


*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count ++;
		str ++;
	}
	return (count);
}

#include <stdio.h>

int main (void)
{
	char str[] = {"Palavras"};
	printf("%d \n", ft_strlen(str));
	return (0);
}