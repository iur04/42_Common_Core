/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:11 by rupinto-          #+#    #+#             */
/*   Updated: 2025/05/09 13:27:27 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Duplica uma string
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main()
{
	char *my_dest = "Chimi";
	char *orig_dest = "Chimi";
	char *src = "Churri";
	my_dest = ft_strdup(src);
	orig_dest = strdup(src);
	printf("ft_strdup: %s\n", my_dest);
	printf("strdup: %s\n", orig_dest);
	free(my_dest);
	free(orig_dest);

	return (0);
} */
