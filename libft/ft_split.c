/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:21:17 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 16:20:56 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// conta quantas palavras foram recebidas no split
static int	word_count(const char *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != sep)
				s++;
		}
	}
	return (count);
}

//Copia uma palavra da string original
//, começando no ponteiro start e com comprimento len.
static char	*word_copy(const char *start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	i = 0;
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

//Função de segurança usada para libertar memória caso algo falhe.
static void	free_split(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

//Adiciona uma palavra ao array res
static int	add_word(char **res, const char *start, int len, int *i)
{
	res[*i] = word_copy(start, len);
	if (!res[*i])
		return (0);
	(*i)++;
	return (1);
}

//Separa uma string s em substrings com base em um delimitador c
//,exige várias alocações e cuidado com leaks.
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start && !add_word(res, s + start, end - start, &i))
			return (free_split(res, i), NULL);
	}
	res[i] = NULL;
	return (res);
}

/* int	main()
{
	char	**words = ft_split("Chimi churri!", ' ');
	int	i = 0;

	while (words[i])
	{
		printf("Word %d: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
} */
