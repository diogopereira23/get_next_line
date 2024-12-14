#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 28
# endif

char	*ft_substr(char const *s, unsigned int start, int len);
int	ft_strlen(const char *str);
void	*ft_calloc(int num, int size);
char	*get_next_line(int fd);

#endif