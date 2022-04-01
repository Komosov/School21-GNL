/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelena <lhelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:32:06 by lhelena           #+#    #+#             */
/*   Updated: 2022/01/05 21:58:56 by lhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# define FD_LIMIT OPEN_MAX
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

char	*get_next_line(int fd);
long	ft_sl(const char *s);
long	ft_sl_to_n(const char *s);
char	*ft_strjoin(char *s1, char *s2);
long	read_file(int fd, char *read_buff, char **res);
long	read_more(int fd, long j, char **res, char *read_buff);

#endif
