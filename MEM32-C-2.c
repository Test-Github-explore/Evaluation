void f(char *input_string) {
  size_t size = strlen(input_string) + 1;
  char *str = (char *)malloc(size);
  strcpy(str, input_string);
  /* ... */
}