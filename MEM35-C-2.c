// MEM35-C: Noncompliant Code Example (Integer)
#include <stdint.h>
#include <stdlib.h>
  
void function(size_t len) {
  long *p;
  if (len == 0 || len > SIZE_MAX / sizeof(long)) {
    /* Handle overflow */
  }
  p = (long *)malloc(len * sizeof(int));
  if (p == NULL) {
    /* Handle error */
  }
  free(p);
}

int main(void) {
  function(SIZE_MAX);
  return 0;
}