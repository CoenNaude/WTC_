/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 10:06:27 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 10:09:16 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FT_MIN(x, y) (x) < (y) ? (x) : (y)
# define FT_MAX(x, y) (x) > (y) ? (x) : (y)

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <wchar.h>
# include "handle_funcs.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_sqrt(int nb);
void				ft_ft(int *nbr);
void				ft_swap(int *a, int *b);
void				ft_div_mod(int a, int b, int *div, int *mod);
void				ft_ultimate_div_mod(int *a, int *b);
int					ft_recursive_power(int nb, int power);
int					ft_iterative_factorial(int nb);
void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *str);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little, size_t ln);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isspace(int c);
int					ft_isprint(int c);
void				ft_putchar(char c);
void				ft_putnbr(int n);
int					ft_max(int x, int y);
void				ft_putwchar(wchar_t chr);
void				ft_putnstr_fd(char const *str, size_t str_len, int fd);
void				ft_putwchar_fd(wchar_t chr, int fd);
void				ft_putnstr(char const *str, size_t str_len);
void				ft_putwchar(wchar_t chr);
void				ft_putnwstr(const wchar_t *str, size_t len);
size_t				ft_nstrlen(const char *str, size_t maxlen);
void				ft_putnbrbase_fd(uintmax_t nbr, char *base, int fd);
void				ft_putnbrbase(uintmax_t nbr, char *base);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				**ft_strsplit(const char *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putendl(const char *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);
int					ft_iswspace(int c);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_nbrlen(int nbr);
size_t				ft_wordcount(const char *s, char c);
size_t				ft_wordlen(const char *s, char c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_ultimate_div_mod(int *a, int *b);
void				ft_swap(int *a, int *b);
void				ft_div_mod(int a, int b, int *div, int *mod);
void				ft_ft(int *nbr);
int					ft_recursive_power(int nb, int power);
void				ft_swap(int *a, int *b);
int					ft_sqrt(int nb);

#endif
