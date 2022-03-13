/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Created: 2022/02/12 18:45:19 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/13 15:21:01 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que contenha o número de caracteres em uma string de carac teres que retorne ao número encontrado. 
• Ela deverá ser prototipada da seguinte maneira: 
int ft_strlen(char *str); 

 
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
