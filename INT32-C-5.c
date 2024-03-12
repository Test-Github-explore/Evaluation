// INT32-C: Noncompliant Code Example
void func(signed long s_a, signed long s_b) {
  signed long result;
  if (s_b == 0) {
    /* Handle error */
  } else {
    result = s_a % s_b;
  }
  /* ... */
}

//main関数
int main(void) {
  signed long s_a = 0x7FFFFFFF;
  signed long s_b = 0x00000001;
  func(s_a, s_b);
  return 0;
}