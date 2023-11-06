#ifndef MY_SHELL_H
#define MY_SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/* display.c */
void my_print(const char *str);
void my_display(void);
int my_strlen(const char *str);

/* read.c */
void my_read(char *buff, size_t len, ssize_t input);

/* execute.c */

#endif
