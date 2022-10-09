#include "get_next_line.h"

int ft_strlen(char *str)
{
    int x;

    x= 0;
    while (str[x] != '\0')
        x++;
    return(x);
}
char *get_line(char *str)
{
    char *line;
    int x;

    x = 0;
    if (!str[0])
        return(NULL);
    line = malloc(ft_strlen(str) * sizeof(char));
    if (!str)
    {
        return(NULL);
    }
    while (str[x] != '\0' && str[x] != '\n')
    {
        line[x] = str[x];
        x++;
    }
    if (str[x] == '\n')
    {
        line[x++] = '\n';
    }
    line[x] = '\0';
    return(line);
    
}
char *get_remain(char *str)
{
    char *remain;
    int x;
    int y;

    x = 0;
    y = 0;
    remain = malloc(sizeof(char) * BUFFER_SIZE);
    if (!remain)
    {
        return(NULL);
    }
    
    if (strchr(str, '\n') != NULL)
    {
        // printf("%s",str);
        while ((str[x] != '\n') && (str[x] != '\0'))
        {
            // printf("%c",str[x]);
            x++;
        }
        // printf("%c",str[x]);
        if (str[x] == '\n')
            x++;        
        // printf("%c",str[x++]);
        while (str[x] != '\0')
        {
            // printf("%c",str[x]);
            remain[y] = str[x];
            y++;
            x++;
        }
        remain[y] = '\0';
        free(str);
        // printf("%s",remain);
        return(remain);
    }
    return(NULL);
}
char *ft_strjoin(char *s1, char *s2)
{
    int x;
    int y;
    char *joined;

    if (!s1 && !s2)
        return(NULL);
    else if (!s1)
    {
        joined = malloc(sizeof(char) * (ft_strlen(s2)));
        x = 0;
        while (s2[x] != '\0')
        {
            joined[x] = s2[x];
            x++;
        }
        joined[x] = '\0';
        return(joined);
    }
    joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) - 1);
    x = 0;
    y = 0;
    while (s1[y] != '\0')
    {
        joined[x] = s1[y];
        x++;
        y++;
    }
    y = 0;
    while (s2[y] != '\0')
    {
        joined[x] = s2[y];
        x++;
        y++;  
    }
    joined[x] = '\0';
    return(joined);
        
}