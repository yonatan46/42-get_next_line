/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonamog2 <yonamog2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:03:25 by yonamog2          #+#    #+#             */
/*   Updated: 2022/10/16 10:05:14 by yonamog2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>

char	*ft_get_remain(char *left);
char	*ft_full_str(int fd, char *store);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_get_line(char *all);
char	*ft_strchr(char *s, int c);
int		ft_strlen(char *s);
#endif