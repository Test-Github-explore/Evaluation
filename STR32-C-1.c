// STR32-C: Noncompliant Code Example
#include <stdio.h>
  
void func(void) {
  char c_str[3] = "abc";
  printf("%s\n", c_str);
}