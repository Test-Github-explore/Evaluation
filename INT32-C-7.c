// INT32-C: Noncompliant Code Example
void func(signed long s_a) {
  signed long result = -s_a;
  /* ... */
}

int main(void) {
  func(0x80000000);
  return 0;
}