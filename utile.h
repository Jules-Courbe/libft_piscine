#ifndef LIBFT_H_
# define LIBFT_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_putchar(char c);
char *ft_strcpy(char *dest, char *src);
int ft_swap(int a, int b);
void ft_putstr(char *str);
int ft_strlen(char *str);
char ft_uppercase(char c);

#endif
