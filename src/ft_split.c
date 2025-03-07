/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:35:35 by rzamolo-          #+#    #+#             */
/*   Updated: 2025/03/07 14:46:30 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	char **ft_split(char const *s, char c);

DESCRIPTION
    Allocate (using malloc(3)) an array of strings, resulting from separating
	string 's' in substrings using the character 'c' as delimiter. The array 
	must end with a NULL pointer.
	
RETURN VALUES
    An array with the resulting substrings separation. NULL if allocation fails.
*/
static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	if (!s)
		return (0);
	split = ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!split)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	return (split);
}

// int	main(void)
// {
// 	char str[50] = "lorem,ipsum,dolor,,sit amet";

// 	printf("%s\n", ft_split(str, ',')[0]);
// 	printf("%s\n", ft_split(str, ',')[1]);
// 	printf("%s\n", ft_split(str, ',')[2]);
// 	printf("%s\n", ft_split(str, ',')[3]);
// }
