
// ARR38-C: Noncompliant Code Example (Pointer + Integer)
#include <stdlib.h>
#include <string.h>
  
void f1(size_t nchars) {
  char *p = (char *)malloc(nchars);
  /* ... */
  const size_t n = nchars + 1;
  /* ... */
  memset(p, 0, n);
}

int main(void) {
  f1(10);
  return 0;
}