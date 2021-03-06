/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:20:35 by jmatute-          #+#    #+#             */
/*   Updated: 2021/10/16 18:14:14 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "./libft/libft.h"
# ifndef READ_END
#  define READ_END  0
# endif
# ifndef WRITE_END
#  define WRITE_END  1
# endif

typedef struct s_pipex
{
	char	*path;
	char	*secure_path;
	char	*v_path;
	int		fd[2];
	char	**m_route;
}			t_pipex;
char	*ft_strnjoin(int nstrings, ...);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
void	free_matrix(char **matrix);
char	*location_commands(char *argv, char **envp, t_pipex *pipex);
char	*find_path(char **envp);
void	ft_superfree(char	*s, ...);
int		return_error(int argc, char **argv);
char	*check_path(char *argv);
#endif