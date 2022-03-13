/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:27:35 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/15 23:19:17 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Reproduzir de forma idêntica o funcionamento da função strcat (man strcat). • Ela deverá ser prototipada da seguinte maneira: 
char *ft_strcat(char *dest, char *src); 

*/

#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i + c] = (unsigned char)src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}


int main()
{
    char string1[] = "Olá Grazi ";
    char string2[15] = "Tudo bem";

    // strcat(string1, string2);
    printf("%s\n", ft_strcat(string1, string2));
    return (0);
}