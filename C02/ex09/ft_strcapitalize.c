/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:54:40 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 16:12:39 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que deixe a primeira letra de cada palavra em maiúsculo e o resto da palavra em minúsculo. 
• Uma palavra é uma sequência de caracteres alfanuméricos. 
• Ela deverá ser prototipada da seguinte maneira: 
char *ft_strcapitalize(char *str); 
• Ela deverá retornar str. 
• Por exemplo: 
oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um 
• Deve resultar: 
Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um 

*/

int		ft_is_alpha(char c)
{
	if (((c >= '0') && (c <= '9')) ||
		((c >= 'a') && (c <= 'z')) ||
		((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	cap;

	i = 0;
	str = ft_strlowcase(str);
	cap = str[0];
	while (str[i] != '\0')
	{
		if (cap >= 'a' && cap <= 'z')
		{
			str[i] = str[i] - 32;
			cap = 0;
		}
		if (!ft_is_alpha(str[i]))
		{
			cap = str[i + 1];
		}
		i++;
	}
	return (str);
}
