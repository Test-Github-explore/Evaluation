// INT32-C: Noncompliant Code Example
void func(signed int si_a, signed int si_b) {
  signed int sum = si_a + si_b;
  /* ... */
}

int main(void) {
  func(0x7FFFFFFF, 0x7FFFFFFF);
  return 0;
}