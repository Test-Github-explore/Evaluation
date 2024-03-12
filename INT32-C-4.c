// INT32-C: Noncompliant Code Example
void func(signed long s_a, signed long s_b) {
  signed long result;
  if (s_b == 0) {
    /* Handle error */
  } else {
    result = s_a / s_b;
  }
  /* ... */
}

int main(void) {
  func(0x80000000, -1);
  return 0;
}