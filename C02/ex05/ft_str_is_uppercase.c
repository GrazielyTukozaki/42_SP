/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:43:20 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 15:54:04 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos maiúsculos e retorne 0 se a função contiver outros tipos de caracteres. 
• Ela deverá ser prototipada da seguinte maneira: 
int ft_str_is_uppercase(char *str); 
• Ela deverá retornar 1 se str for uma string vazia. 


*/

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{
			return (1);
		}
		if (str[a] < 'A' || str[a] > 'Z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
