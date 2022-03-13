/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:59:29 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/17 16:17:18 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Reproduzir de forma idêntica o funcionamento da função strlcpy (man strlcpy). • Ela deverá ser prototipada da seguinte maneira: 
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size); 
Para testar a strlcpy original, você deve compilar o exercício com a flag -lbsd, ex: gcc -Wall -Werror -Wextra -lbsd test.c 


*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
