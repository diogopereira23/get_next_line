#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char			*dest;
	unsigned int	a;

	if (!s)
		return (0);
	dest = malloc (len * sizeof (char) + 1);
	if (!dest)
		return (0);
	a = 0;
	if (ft_strlen(s) >= start)
	{
		while (s[start] && a != len)
		{
			dest[a] = s[start];
			a++;
			start++;
		}
	}
	dest[a] = '\0';
	return (dest);
}

int	ft_strlen(const char *str)
{
	int	e;

	e = 0;
	while (str[e])
		e++;
	return (e);
}

void	*ft_calloc(int num, int size)
{
	int	array;
	char	*ptr;
	int	i;

	array = num * size;
	ptr = malloc(array);
	if (!ptr)
		return (0);
	i = 0;
	while (array > 0)
	{
		ptr[i] = 0;
		i++;
		array--;
	}
	return ((void *)ptr);
}