/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krengar <krengar@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:41:17 by krengar           #+#    #+#             */
/*   Updated: 2020/11/15 14:47:53 by krengar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

size_t			ft_strlen(const char *s);
int				ft_atoi(const char *string);
int				ft_isalpha(int c);
void			ft_bzero(void *block, size_t size);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t size);
void			*ft_memset(void *block, int c, size_t size);
void			*ft_memcpy(void *to, const void *from, size_t size);
void			*ft_memccpy(void *to, const void *from, int c, size_t size);
void			*ft_memmove(void *to, const void *from, size_t size);
void			*ft_memchr(const void *block, int c, size_t size);
int				ft_memcmp(const void *a1, const void *a2, size_t size);
int				ft_isalnum(int c);
int				ft_isascii(int c);
char			*ft_strchr(const char *string, int c);
char			*ft_strrchr(const char *string, int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			*ft_calloc(size_t count, size_t eltsize);
char			*ft_strdup(char *src);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst,
				void *(*f)(void *), void (*del)(void *));
#endif
