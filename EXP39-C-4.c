// EXP39-C: Noncompliant Code Example
enum { ROWS = 10, COLS = 15 };
  
void func(void) {
  int a[ROWS][COLS];
  int (*b)[ROWS] = a;
}

int main(void) {
  func();
  return 0;
}