// ARR30-C: Noncompliant Code Example (Forming Out-of-Bounds Pointer)
enum { TABLESIZE = 100 };
 
static int table[TABLESIZE];
 
int *f(int index) {
  if (index < TABLESIZE) {
    return table + index;
  }
  return NULL;
}