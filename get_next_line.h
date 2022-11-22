/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtelnov <dtelnov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:49 by dtelnov           #+#    #+#             */
/*   Updated: 2022/11/08 13:23:49 by dtelnov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(char *s, int c);
char	*first_line(char *save);
char	*next_line(char *save);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*add_buf_to_save(char *save, char *buffer);
char	*read_line(char *save, char *buffer, int fd);
#endif
