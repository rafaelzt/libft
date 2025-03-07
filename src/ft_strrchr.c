/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:10:12 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/07 14:45:41 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
    char	*strrchr(const char *s, int c);
	
DESCRIPTION
    The strchr() function locates the first occurrence of c (converted to a 
	char) in the string pointed to by s.  The terminating null character is 
	considered to be part of the string; therefore if c is `\0', the functions 
	locate the terminating `\0'.

    The strrchr() function is identical to strchr(), except it locates the last 
	occurrence of c.

RETURN VALUES
    The functions strchr() and strrchr() return a pointer to the located 
	character, or NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		length;

	length = ft_strlen(s);
	aux = (char *)s + length;
	while (length >= 0)
	{
		if (*aux == (unsigned char)c)
		{
			return (aux);
		}
		aux--;
		length--;
	}
	return (0);
}
