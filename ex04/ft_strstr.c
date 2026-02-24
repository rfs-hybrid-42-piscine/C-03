/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:11:54 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/24 04:59:15 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @fn char *ft_strstr(char *str, char *to_find)
 * @brief Locates a substring within a larger string.
 * @details Finds the first occurrence of the substring 'to_find' within the
 * string 'str'. If 'to_find' is an empty string, 'str' is safely returned.
 * @param str The string to be searched.
 * @param to_find The specific substring to search for.
 * @return A pointer to the beginning of the located substring, or NULL if
 * the substring is not found anywhere.
 */
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (!(*to_find))
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
