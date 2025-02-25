/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:42:31 by faboussa          #+#    #+#             */
/*   Updated: 2024/01/10 09:22:00 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
//enlever pour exam
#include <fcntl.h>
#include <stdio.h>

# define LINE_MAX_SIZE 50000

# define SET_INDEX 1
# define FIND_INDEX 2
# define EMPTY 3

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif //BUFFER_SIZE

#define ABS(a) a < 0 ? -a : a

char	*get_next_line(int fd);
int		ft_strlen(const char *string);
char	*ft_substr(char const *s, size_t total_len, unsigned int start,
			size_t len);
char	*ft_concat(char *dst, const char *src, size_t src_len, size_t dstsize);
int		ft_strchri(const char *s, size_t len, char c, size_t index);
void	*ft_realloc(void *ptr, unsigned int new_size);
char	*cook_line(char *s);
int		ft_stash(const int action, char (*stash)[BUFFER_SIZE],
			size_t current_index);
char	*init_line(int fd, ssize_t *n_read);

#endif // GET_NEXT_LINE_H