#ifndef GET_LINE
# define GET_LINE

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

char *get_remain(char *str);
int ft_strlen(char *str);
char *get_line(char *str);
char *get_next_line(int fd);
char *full_str(int fd, char *store);
char *ft_strjoin(char *s1, char *s2);
#endif