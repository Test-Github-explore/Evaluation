// ARR30-C: Noncompliant Code Example (Forming Out-of-Bounds Pointer)

enum { TABLESIZE = 100 };
 
static int table[TABLESIZE];
 
int *f(int index) {
  if (index < TABLESIZE) {
    return table + index;
  }
  return 0;
}
//main関数
int main(void) {
  int *p = f(50);
  if (p) {
    *p = 0;
  }
  return 0;
}
