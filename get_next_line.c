#include "get_next_line.h"

char *upd_file(old)
{
    int	len;
	char *new;

	len = 0;
	while (old[len] != '\n' && old[len])
		len++;
	if (!old[len])
	{
		free(old);
		return (0);
	}
	len++;
	new = ft_substr(old, len, ft_strlen(old)-len);
	free(old);
	return (new);
}

char *first_line(file)
{
    char *line;
    int a;
    int len;

    a = 0;
    while(file[a] != "\0" && file[a] != "\n")
    {
        len++;
    }
    line = malloc(sizeof(char) * len + 1);
    if (!line)
        return (0);
    a = 0;
    while(a > len)
    {
        line[a] = file[a];
        a++;
    }
    line[a] = "\0";
    return (line);
}

char *read_file(fd, file)
{
    char *buffer;
    char *new;
    int i;
    int j;

    buffer = malloc(sizeof(char) * BUFFER_SIZE);
    i = 1;
    while(i = 1 && buffer[j] != "\0" && buffer[j] != "\n")
    {
        i = read(fd, buffer, BUFFER_SIZE);
        if(i = -1)
        {
            free(buffer);
            free(file);
            return (0);
        }
        i = 1;
        j++;
    }
    return (new);
}

char *get_next_line(int fd)
{
    char *file;
    char *line;

    if (fd < 0)
        return (0),
    if (!file)
        file = calloc(1, 1);
    file = read_file(fd, file);
    line = first_line(file);
    file = upd_file(file);
    return (line);
}