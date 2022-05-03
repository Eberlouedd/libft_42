/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:59:58 by kyacini           #+#    #+#             */
/*   Updated: 2022/05/03 17:12:09 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_atoi(const char *nptr);
void			bzero(void *s, size_t n);
void			*ft_calloc(size_t elementCount, size_t elementSize);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *memoryBlock, int searchedChar,
					size_t size);
int				ft_memcmp(const void *pointer1, const void *pointer2,
					size_t size);
void			*ft_memcpy(void *destination, const void *source, size_t size);
void			*ft_memmove(void *destination, const void *source, size_t size);
void			*memset(void *pointer, int value, size_t count);
char			*ft_strchr( const char *string, int searchedChar);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strtrim(char const *s1, char const *set);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *string, int searchedChar);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				*ft_tolower(int c);
int				*ft_toupper(int c);
#endif