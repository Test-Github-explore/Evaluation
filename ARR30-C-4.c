// ARR30-C: Noncompliant Code Example (Apparently Accessible Out-of-Range Index)
#include <stddef.h>
#define COLS 5
#define ROWS 7
static int matrix[ROWS][COLS];
 
void init_matrix(int x) {
  for (size_t i = 0; i < COLS; i++) {
    for (size_t j = 0; j < ROWS; j++) {
      matrix[i][j] = x;
    }
  }
}

int main(void) {
  init_matrix(0);
  return 0;
}
