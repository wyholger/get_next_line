#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
void	ft_bzero(void *b, size_t length);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
void	*ft_memmove (void *dest, const void *source, size_t n);
int		get_next_line(int fd, char **line);
#endif