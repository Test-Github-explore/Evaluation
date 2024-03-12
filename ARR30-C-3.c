// ARR30-C: Noncompliant Code Example (Using Past-the-End Index)
#include <stdlib.h>
  
static int *table = NULL;
static size_t size = 0;
 
int insert_in_table(size_t pos, int value) {
  if (size < pos) {
    int *tmp;
    size = pos + 1;
    tmp = (int *)realloc(table, sizeof(*table) * size);
    if (tmp == NULL) {
      return -1;   /* Failure */
    }
    table = tmp;
  }
 
  table[pos] = value;
  return 0;
}

//main関数
int main(void) {
  int ret;
  ret = insert_in_table(0, 1);
  if (ret != 0) {
    /* Handle error */
  }
  return 0;
}