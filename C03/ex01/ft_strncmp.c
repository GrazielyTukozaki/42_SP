/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:19:07 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/15 23:17:22 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Reproduzir de forma idêntica o funcionamento da função strncmp (man strncmp). • Ela deverá ser prototipada da seguinte maneira: 
int ft_strncmp(char *s1, char *s2, unsigned int n); 


*/

#include <stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	if (i == n)
	{
		i--;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
    char    str1[] = "123468&(";
    char    str2[] = "12355468&";
    //char    str3[] = "1357";

    int    size;

    size = 4;
    printf("Igual: %d\n", ft_strncmp(str1, str2, size));
    printf("Primeiro maior: %d\n", ft_strncmp(str1, str2, size));
    printf("Segundo maior: %d\n", ft_strncmp(str1, str2, size));
}