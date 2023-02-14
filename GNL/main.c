#include <fcntl.h>

int main(void)
{
    int     fd;
    char    *line;

    fd = open("test", O_RDONLY);
    while(1)
    {
        line = get_next_line(fd);
        if(line == NULL)
            break ;
        printf("%s", line);
        free(line);
    }
    return (0);
}