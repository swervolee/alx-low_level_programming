#ifndef MAIN_H
#define MAIN_H

char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
char **strtow(char *str);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);

#endif
