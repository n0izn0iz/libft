#ifndef HELPERS_H
#define HELPERS_H

#include <strings.h>

void del_lst_content(void* ptr, size_t size);
void test_isfunc(int (*func)(int), int (*control)(int));

#endif