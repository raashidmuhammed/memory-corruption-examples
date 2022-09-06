#include <stm.h>
#include <fifo.h>

#include <stdio.h>

fifo_page_t_v1 fp;

int main(void)
{
	printf("Size @main(): %lu\n", sizeof(fp));

	fifo_test(&fp);

	return 0;
}
