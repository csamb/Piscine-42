/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:10:08 by csamb             #+#    #+#             */
/*   Updated: 2023/02/09 00:17:30 by csamb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <libgen.h>
# include <sys/errno.h>
# include <stdio.h>
# include <string.h>

int		ft_strlen(char *str);
void	ft_putchar(char c, int fd);
void	ft_putstr(char *str, int fd);
void	exception_handler(char *filename, char *binary_name);
void	display_file(int fd);
#endif
