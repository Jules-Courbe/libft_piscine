#ifndef UTILE_H
# define UTILE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int ft_atoi(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_putchar(char c);
char *ft_strcpy(char *dest, char *src);
void ft_swap(int a, int b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_uppercase(char *c);
void ft_putnbr(int n);
void ft_foreach(int *tab, int length, void (*f)(int));

#endif
