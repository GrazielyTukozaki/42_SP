/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:51:32 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 16:09:12 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            
• Escreva uma função que deixe todas as letras em minúsculo. 
• Ela deverá ser prototipada da seguinte maneira: 
char *ft_strlowcase(char *str); 
• Ela deverá retornar str. 
*/
char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
