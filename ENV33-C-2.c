// ENV33-C: Noncompliant Code Example (POSIX)
#include <stdlib.h>
  
void func(void) {
  system("rm ~/.config");
}

int main(void) {
  func();
  return 0;
}