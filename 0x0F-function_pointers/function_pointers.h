#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>


/* Portfolio */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));



#endif /* MAIN_H */
