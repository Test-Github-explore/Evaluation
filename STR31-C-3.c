// STR31-C: Noncompliant Code Example (getchar())
#include <stdio.h>
  
enum { BUFFERSIZE = 32 };
  
void func(void) {
  char buf[BUFFERSIZE];
  char *p;
  int ch;
  p = buf;
  while ((ch = getchar()) != '\n' && ch != EOF) {
    *p++ = (char)ch;
  }
  *p++ = 0;
  if (ch == EOF) {
      /* Handle EOF or error */
  }
}

int main(void) {
  func();
  return 0;
}