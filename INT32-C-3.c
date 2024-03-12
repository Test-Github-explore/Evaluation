// INT32-C: Noncompliant Code Example
void func(signed int si_a, signed int si_b) {
  signed int result = si_a * si_b;
  /* ... */
}

int main(void) {
  func(0x80000000, 0x80000000);
  return 0;
}