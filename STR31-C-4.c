// STR31-C: Noncompliant Code Example (fscanf())
#include <stdio.h>
  
enum { BUF_LENGTH = 1024 };
  
void get_data(void) {
  char buf[BUF_LENGTH];
  if (1 != fscanf(stdin, "%s", buf)) {
    /* Handle error */
  }
 
  /* Rest of function */
}

int main(void) {
  get_data();
  return 0;
}