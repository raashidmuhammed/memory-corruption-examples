#include <fifo.h>
#include <stm.h>

#include <stdio.h>

void fifo_test(fifo_page_t_v1 *fp)
{
	printf("Size @fifo(): %lu\n", sizeof(*fp));
}
