#include <fifo.h>
#include <stm.h>

#include <string.h>
#include <stdio.h>

void fifo_test(fifo_page_t_v1 *fp)
{
	int i;

	printf("\nSize @fifo(): %lu\n", sizeof(*fp));

	memset(fp, 0, sizeof(*fp));

	for(i = 0; i < sizeof(*fp); i++) {
		if ((i % 8) == 0)
			printf("\n");
		printf("%02x ", ((uint8_t *)fp)[i]);
	}
}
