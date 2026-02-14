#ifndef UTILE_H
# define UTILE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct s_token
{
	char *value;
	int entier[3];
	struct s_token *next;
}	t_token;


int ft_atoi(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void ft_putchar(char c);
char *ft_strcpy(char *dest, const char *src);
void ft_swap(int a, int b);
void ft_putstr(char *str);
int ft_strlen(const char *str);
void ft_uppercase(char *c);
void ft_putnbr(int n);
void ft_foreach(int *tab, int length, void (*f) (int), void (*f1) (int));
void ft_print_digit(int n);
int fibonacci(int index);
char *ft_strdup(const char *str);
void free_list(t_token *head);

#endif
