#include "helpers.h"

#include <stdlib.h>

void del_lst_content(void* ptr, size_t size)
{
	(void)size;
	if (ptr != NULL)
		free(ptr);
}