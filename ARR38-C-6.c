// ARR38-C: Noncompliant Code Example (One Pointer + Two Integers)
#include <stddef.h>
#include <stdio.h>
 
void f(FILE *file) {
  enum { BUFFER_SIZE = 1024 };
  wchar_t wbuf[BUFFER_SIZE];
 
  const size_t size = sizeof(*wbuf);
  const size_t nitems = sizeof(wbuf);
 
  size_t nread = fread(wbuf, size, nitems, file);
  /* ... */
}

int main(void) {
  FILE *file = fopen("file", "r");
  if (file == NULL) {
    /* Handle error */
  }
  f(file);
  fclose(file);
  return 0;
}