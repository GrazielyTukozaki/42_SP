/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:03:54 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/15 23:24:01 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Reproduzir de forma idêntica o funcionamento da função strstr (man strstr). • Ela deverá ser prototipada da seguinte maneira: 
char *ft_strstr(char *str, char *to_find); 

*/

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] != '\0' && str[i + c] == to_find[c])
		{
			if (to_find[c + 1] == '\0')
			{
				return (&str[i]);
			}
			c++;
		}
		i++;
	}
	return (0);
}

int main()
{
    char str[20] = "W3Cschool";
    char to_find[10] = "W";

    printf("substring é: %s\n", ft_strstr(str, to_find));

    return (0);
}