// ARR30-C: Noncompliant Code Example (Null Pointer Arithmetic)
#include <string.h>
#include <stdlib.h>
 
char *init_block(size_t block_size, size_t offset,
                 char *data, size_t data_size) {
  char *buffer = malloc(block_size);
  if (data_size > block_size || block_size - data_size < offset) {
    /* Data won't fit in buffer, handle error */
  }
  memcpy(buffer + offset, data, data_size);
  return buffer;
}

int main(void) {
  char *data = "This is a test";
  char *buffer = init_block(10, 5, data, strlen(data));
  if (buffer == NULL) {
    /* Handle error */
  }
  free(buffer);
  return 0;
}