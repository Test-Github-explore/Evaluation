// EXP39-C: Noncompliant Code Example
#include <stdio.h>
  
void f(void) {
  if (sizeof(int) == sizeof(float)) {
    float f = 0.0f;
    int *ip = (int *)&f;
    (*ip)++;
    printf("float is %f\n", f);
  }
}

int main(void) {
  f();
  return 0;
}