// INT30-C: Noncompliant Code Example
void func(unsigned int ui_a, unsigned int ui_b) {
  unsigned int usum = ui_a + ui_b;
  /* ... */
}

int main(void) {
  func(0x80000000, 0x80000000);
  return 0;
}