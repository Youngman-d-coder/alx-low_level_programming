#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Prototypes */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _putchar(char c);

#endif /* MAIN_H */
