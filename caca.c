/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caca.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:44:01 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/08 16:44:37 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"
#include <stdio.h>

int	main(void)
{
	long	nbr;

	nbr = ft_atol("0");
	printf("%ld\n", nbr);
	return (0);
}

/*
cc -Wall -Wextra -Werror -Iinc caca.c libft.a -o caca

cp libft.a ~/Includes/; cp inc/libft.h ~/Includes/

O que cada parte do comando faz:

• cc: É o compilador C padrão em muitos sistemas Unix-like (pode ser um alias 
para clang ou gcc).
• -Wall -Wextra -Werror: Ativam múltiplas verificações de warnings e tratam 
todos os warnings como erros, o que ajuda a manter o código mais rigoroso e 
seguro.
• -Iinc: Adiciona a pasta “inc” ao caminho de pesquisa de arquivos de cabeçalho
(.h).
• caca.c libft.a: Indica os arquivos que devem ser compilados/ligados
(o arquivo-fonte caca.c e a biblioteca libft.a).
• -o caca: Define o nome do executável gerado como “caca”.

*/