// MEM35-C: Noncompliant Code Example (Pointer)
#include <stdlib.h>
#include <time.h>
  
struct tm *make_tm(int year, int mon, int day, int hour,
                   int min, int sec) {
  struct tm *tmb;
  tmb = (struct tm *)malloc(sizeof(tmb));
  if (tmb == NULL) {
    return NULL;
  }
  *tmb = (struct tm) {
    .tm_sec = sec, .tm_min = min, .tm_hour = hour,
    .tm_mday = day, .tm_mon = mon, .tm_year = year
  };
  return tmb;
}

int main(void) {
  struct tm *tmb = make_tm(2010, 11, 5, 14, 30, 0);
  if (tmb == NULL) {
    /* Handle error */
  }
  free(tmb);
  return 0;
}