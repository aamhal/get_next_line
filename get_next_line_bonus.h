/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:42:25 by aamhal            #+#    #+#             */
/*   Updated: 2022/11/21 22:45:21 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5

# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char	*s);
int		ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);

#endif