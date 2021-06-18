#include "get_next_line.h"

void	ft_bzero(void *b, size_t length)
{
	char	*temp;

	temp = b;
	while (length--)
	{
		*temp++ = '\0';
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (!pointer)
	{
		return (NULL);
	}
	ft_bzero (pointer, nmemb * size);
	return (pointer);
}

size_t	ft_strlen(const char *str)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)ch)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (ch == '\0' && str[i] == '\0')
	{
		return ((char *)str + i);
	}
	return (NULL);
}

void	*ft_memmove (void *dest, const void *source, size_t n)
{
	unsigned char		*temp;
	unsigned char		*tempdest;
	size_t				i;

	i = 0;
	temp = (unsigned char *)source;
	tempdest = (unsigned char *)dest;
	if (!dest && !source)
	{
		return (NULL);
	}
	if (dest > source)
	{
		while (n-- > 0)
			tempdest[n] = temp[n];
	}
	else
	{
		while (i < n)
		{
			tempdest[i] = temp[i];
			i++;
		}
	}
	return (dest);
}
