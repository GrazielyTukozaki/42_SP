/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:39:22 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 15:54:44 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos minúsculos e retorne 0 se a função contiver outros tipos de caracteres. 
• Ela deverá ser prototipada da seguinte maneira: 
int ft_str_is_lowercase(char *str); 
• Ela deverá retornar 1 se str for uma string vazia. 

*/

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{
			return (1);
		}
		if ((str[a] < 'a' || str[a] > 'z'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
