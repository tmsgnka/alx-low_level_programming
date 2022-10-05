#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void free_grid(int **grid, int height);
char *str_concat(char *sl, char *s2);
char *_strdup(char *str);
int _putchar(char c);
char *create_array(usigned int size, char c);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);

#endif
