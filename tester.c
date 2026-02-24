/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 05:01:52 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/24 05:02:02 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* --- Master Switch --- */
#ifdef TEST_ALL
# define EX00
# define EX01
# define EX02
# define EX03
# define EX04
# define EX05
#endif

/* --- Prototypes --- */
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/* --- Main Testing Function --- */
int	main(void)
{
#ifdef EX00
	printf("--- EX00: ft_strcmp ---\n");
	printf("cmp('Hello', 'Hello') -> %d (Expected: 0)\n", ft_strcmp("Hello", "Hello"));
	printf("cmp('Hello', 'World') -> %d (Expected: negative)\n", ft_strcmp("Hello", "World"));
	printf("cmp('World', 'Hello') -> %d (Expected: positive)\n\n", ft_strcmp("World", "Hello"));
#endif

#ifdef EX01
	printf("--- EX01: ft_strncmp ---\n");
	printf("cmp('Hello', 'Hello', 3) -> %d (Expected: 0)\n", ft_strncmp("Hello", "Hello", 3));
	printf("cmp('Hello', 'Hellz', 4) -> %d (Expected: 0)\n", ft_strncmp("Hello", "Hellz", 4));
	printf("cmp('Hello', 'Hellz', 5) -> %d (Expected: negative)\n\n", ft_strncmp("Hello", "Hellz", 5));
#endif

#ifdef EX02
	char dest2[50] = "Hello";
	char src2[] = " World!";
	printf("--- EX02: ft_strcat ---\n");
	printf("Before: '%s'\n", dest2);
	ft_strcat(dest2, src2);
	printf("After : '%s'\n\n", dest2);
#endif

#ifdef EX03
	char dest3[50] = "Hello";
	char src3[] = " World!";
	printf("--- EX03: ft_strncat ---\n");
	printf("Before: '%s'\n", dest3);
	ft_strncat(dest3, src3, 3);
	printf("After (nb=3): '%s' (Expected: 'Hello Wo')\n\n", dest3);
#endif

#ifdef EX04
	char str4[] = "Hello 42 World!";
	char to_find4[] = "42";
	printf("--- EX04: ft_strstr ---\n");
	printf("String: '%s' | Find: '%s'\n", str4, to_find4);
	printf("Result: '%s' (Expected: '42 World!')\n\n", ft_strstr(str4, to_find4));
#endif

#ifdef EX05
	char dest5[50] = "Hello";
	char src5[] = " World!";
	printf("--- EX05: ft_strlcat ---\n");
	unsigned int len = ft_strlcat(dest5, src5, 12);
	printf("Result: '%s' | Returned Length: %u (Expected: 12)\n\n", dest5, len);
#endif

	return (0);
}
