/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:49:09 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 15:59:13 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que deixe todas as letras em maiúsculo. 
• Ela deverá ser prototipada da seguinte maneira: 
char *ft_strupcase(char *str); 
• Ela deverá retornar str. 

*/

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
