#include <stm.h>
#include <fifo.h>

#include <string.h>
#include <stdio.h>

fifo_page_t_v1 fp;
uint8_t arr[8];

int main(void)
{
	int i;

	printf("Size @main(): %lu\n", sizeof(fp));

	memset(arr, 0xa5, sizeof(arr));
	printf("\nArray before corruption:\n");
	for (i = 0; i < 8; i++)
		printf("Arr[%d]: %02X\n", i, arr[i]);

	fifo_test(&fp);

	printf("\n\nArray after corruption:\n");
	for (i = 0; i < 8; i++)
		printf("Arr[%d]: %02X\n", i, arr[i]);

	return 0;
}
