/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:44:50 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/15 18:08:04 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******************************************
 * Function: ft_split
 * Description: allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer
 * Memory allocations:
 *      - 1 char** malloc, 0 free unless mallocs fail
 *      - n = number of words mallocs, 0 frees unless mallocs fail
 * Crash values: None
 * Return value: 
 *   - The array of new strings resulting from the split
 *   - NULL if s is NULL or if the memory allocation fails
 *******************************************/

static int	ft_nstr(char const *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c)
			n++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (n);
}

static int	ft_strlenc(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*ft_free(char **d)
{
	int	i;

	i = 0;
	while (d[i])
		free(d[i++]);
	free(d);
	return (0x0);
}

char	**ft_split(char const *s, char c)
{
	int		nstr;
	int		i;
	char	**d;

	if (!s)
		return (0x0);
	nstr = ft_nstr(s, c);
	d = malloc(sizeof(char *) * (nstr + 1));
	if (!d)
		return (0x0);
	d[nstr] = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			d[i] = ft_substr(s, 0, ft_strlenc(s, c));
			if (!d[i++])
				return (ft_free(d));
			s += ft_strlenc(s, c);
		}
		else
			s++;
	}
	return (d);
}
