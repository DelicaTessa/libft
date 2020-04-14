/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:30:44 by tclement      #+#    #+#                 */
/*   Updated: 2020/04/14 15:52:42 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#ifndef LIBFT_H
#define LIBFT_H 

int	ft_toupper(int arg);
int	ft_tolower(int arg);
int			ft_isprint(int arg);
int			ft_isascii(int arg);
int			ft_isalnum(int arg);
int			ft_isdigit(int arg);
int			ft_isalpha(int arg);
int			ft_atoi(const char *str);
size_t		ft_strlcpy(char *dest, const char *src, size_t size_dest);
char		*ft_strdup(char *src);
int			ft_strcmp(const char *s1, const char *s2, size_t n);
long int	ft_strlen(const char *str);
char    	*ft_substr(char const *s, unsigned int start, size_t len); 
char    	*ft_strjoin(char const *s1, char const *s2); 
char    	*ft_strtrim(char const *s1, char const *set); 
char    	**ft_split(char const *s, char c); 
char    	*ft_itoa(int n);
char    	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); 
void    	ft_putchar_fd(char c, int fd);
void    	ft_putstr_fd(char *s, int fd); 
void    	ft_putendl_fd(char *s, int fd);
void    	ft_putnbr_fd(int n, int fd);


#endif
