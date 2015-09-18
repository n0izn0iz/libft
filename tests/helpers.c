#include "helpers.h"

#include <stdlib.h>
#include <check.h>
#include <stdio.h>

void del_lst_content(void* ptr, size_t size)
{
	(void)size;
	if (ptr != NULL)
		free(ptr);
}

void test_isfunc(int (*func)(int), int (*control)(int))
{
	char c = 0;
	char* str = strdup("output differ from stdlib for  ");
	while (c < 127)
	{
		str[30] = c;
		fail_unless(!!func(c) == !!control(c), str);
		c++;
	}
	free(str);
	fail_unless(!!func(EOF) == !!control(EOF), "output differ from stdlib for EOF");
}