#include <stdint.h>

typedef struct __packed {
	uint32_t page_type;
	uint64_t head;
	uint32_t session_id;
	uint32_t session_seq;
	uint64_t timestamp;
	uint32_t size;
	uint64_t header_crc;
	uint64_t page_crc;
} fifo_page_t_v1; ///< Physical storage format of a flash FIFO page.

void fifo_test(fifo_page_t_v1 *fp);
