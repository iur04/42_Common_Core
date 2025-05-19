/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 02:46:01 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 16:21:08 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Encontra a primeira ocorrência de um caractere
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ss;

	ss = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ss)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && ss == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/* int main()
{
	const char	str[] = "Chimichurri";
	char	*search = ft_strchr(str, 's');
	char	*search2 = strchr(str, 's');

	if (search != '\0' || search2 != '\0')
	{
		printf("Found: %s\n", search);
		printf("Found: %s\n", search2);
	}
	else if (search == '\0' || search2 == '\0')
	{
		printf("Found: %s\n", search);
		printf("Found: %s\n", search2);
	}
	return (0);
} */
