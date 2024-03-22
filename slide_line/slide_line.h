#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#include <stddef.h>

#define SLIDE_LEFT   -1
#define SLIDE_RIGHT  1

static void print_array(int const *array, size_t size);
int slide_line(int *line, size_t size, int direction);
int slide_left(int *line, int *line2, size_t size);
int slide_right(int *line, int *line2, size_t size);

#endif /* SLIDE_LINE_H */

