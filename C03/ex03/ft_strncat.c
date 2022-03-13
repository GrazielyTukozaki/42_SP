/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:34:02 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/15 23:21:18 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            
• Reproduzir de forma idêntica o funcionamento da função strncat (man strncat). • Ela deverá ser prototipada da seguinte maneira: 
char *ft_strncat(char *dest, char *src, unsigned int nb); 

*/

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{

   char src[50] = "lucianajkl";
   char dest[50]= "abcd";
   unsigned int nb = 2;

   printf("Source string : %s\n", src);
   printf("Destination string : %s", dest);
   ft_strncat(dest, src, nb);
   printf("Result %s\n", dest);
   return (0);
}