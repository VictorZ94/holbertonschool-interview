#ifndef SLIDE_H
#define SLIDE_H

#include <stdlib.h>
void swap(int *a, int *b);
void shift_left(int *line, size_t size);
void shift_right(int *line, size_t size);

int slide_line(int *line, size_t size, int direction);

#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1

#endif /* slide */
