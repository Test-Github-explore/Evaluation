#include <stdlib.h> // for malloc
#include <string.h> // for memcpy and strlen

typedef struct {
    char sig_desc[256]; // assuming sig_desc is a string of length 256
    // other members...
} signal_info;

void some_function() {
    size_t num_of_records = 10; // assuming num_of_records is 10
    size_t temp_num = 5; // assuming temp_num is 5
    char tmp2[256] = "some string"; // assuming tmp2 is "some string"

    signal_info * start = malloc(num_of_records * sizeof(signal_info));
    if (start == NULL) {
        // handle malloc failure...
        return;
    }

    signal_info * point = start;
    point = start + temp_num - 1; 
    memcpy(point->sig_desc, tmp2, strlen(tmp2) + 1); // +1 to include the null terminator

    // ...

    free(start); // don't forget to free the allocated memory
}

int main(void) {
    some_function();
    return 0;
}