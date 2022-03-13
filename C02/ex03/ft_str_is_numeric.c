/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:35:12 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 15:52:24 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            
• Escreva uma função que retorne 1 se a string passada como parâmetro só contiver números e retorne 0 se a função contiver outros tipos de caracteres. 
• Ela deverá ser prototipada da seguinte maneira: 
int ft_str_is_numeric(char *str); 
• Ela deverá retornar 1 se str for uma string vazia. 

*/

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == '\0')
		{
			return (1);
		}
		if (str[a] < '0' || str[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
