/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:04:51 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/15 23:09:23 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            
• Reproduzir de forma idêntica o funcionamento da função strcmp (man strcmp). • Ela deverá ser prototipada da seguinte maneira: 
int ft_strcmp(char *s1, char *s2); 

*/

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int    main(void)
{
    char    s1[] = "Ola";
    char    s2[] = "Tudo bem?";
    int    res;

    printf("As strings são '%s' e '%s'\n", s1, s2);
    res = ft_strcmp(s1, s2);
    printf("Result: %d\n", res);
    return (0);
}