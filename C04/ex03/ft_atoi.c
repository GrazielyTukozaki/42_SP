/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:08:42 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/18 16:46:31 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que converta o início da cadeia apontada por str em inteiro do tipo int 
• str pode começar por um número arbitrário de ’white space’ (como definido por isspace(3)) 
• str pode então ser seguido por um número arbitrário de sinais + e sinais -. O sinal - vai mudar o sinal do inteiro retornado em função do número de sinais - e se este for par ou ímpar. 
• Por fim, str deverá ser composta por número da base 10 
• Sua função deverá ler str desde que esta siga as regras acima e ela deve retornar o número encontrado até então. 
• Você não deve considerar os overflows e os underflows, o resultado é considerado indefinido nesses casos. 
• Você pode comparar sua função com a verdadeira função atoi, exceto a parte dos sinais bem como do overflow. 
• Veja um exemplo de um programa que mostra o valor de retorno de atoi: 
$>./a.out " ---+--+1234ab567" 
-1234 
• Ela deverá ser prototipada da seguinte maneira: 
8
Piscina C C 04 int ft_atoi(char *str); 

*/

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nbr;

	i = 0;
	neg = 0;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg ++;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i ++;
	}
	if (neg % 2 == 0)
		return (nbr);
	else
		return (-nbr);
}

#include <stdio.h> 
#include <stdlib.h> /*atoi*/

int    ft_atoi(char *str);

int    main()
{
    char    example[] = "          \t  -1273jlb9";
    char    str[] = "          \t   ---+--+1273jlb9";
    
    /*original example*/
    printf("\nchar value: %s \n", example);
    int z = atoi(example);
    printf("Int value with original atoi: \t %d\n", z);
    
    /*created function*/
    printf("\nchar value: %s \n", str);
    int x = ft_atoi(str);
    printf("int value with ft_atoi: \t %d \n" , x);
    return (0);
}