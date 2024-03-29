// STR31-C: Noncompliant Code Example (Off-by-One Error)
#include <stddef.h>
  
void copy(size_t n, char src[n], char dest[n]) {
   size_t i;
  
   for (i = 0; src[i] && (i < n); ++i) {
     dest[i] = src[i];
   }
   dest[i] = '\0';
}

int main(void) {
  char src[] = "Hello, world!";
  char dest[sizeof(src)];
  copy(sizeof(src), src, dest);
  return 0;
}