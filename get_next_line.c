#include "get_next_line.h"
char *full_str(int fd, char *store)
{
    char *str;
    int rd;

    rd = 1;
    str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!str)
        return(NULL);
    while ((rd != 0) && (!strchr(str, '\n')))
    {
        rd = read(fd, str, BUFFER_SIZE);
        if (rd == -1)
        {
            free(str);
            return(NULL);
        }
        str[rd] = '\0';
        store = ft_strjoin(store, str);
    }
    free(str);
    return(store);
}
char *get_next_line(int fd)
{
    static char *stor;
    char *line;
    
    if (fd <= 0 || BUFFER_SIZE <=0)
        return(0);
    stor = full_str(fd,stor);
    if (!stor)
		return (NULL);
    line = get_line(stor);
    stor = get_remain(stor);
    return(line);
}

int main()
{
    int fd = open("new.txt",O_RDWR);
    char *l = get_next_line(fd);
    char *l2 = get_next_line(fd);
    char *l3 = get_next_line(fd);
    char *l4 = get_next_line(fd);
    char *l5 = get_next_line(fd);
    char *l6 = get_next_line(fd);
    printf("%s",l);
    printf("%s",l2);
    printf("%s",l3);
    printf("%s",l4);
    printf("%s",l5);
    printf("%s",l6);
    // printf("%s","hellos");
    
}