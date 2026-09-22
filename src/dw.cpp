#include "dw.h"

int sum_array(const int values[], int size) {
    int total = 0; //Added missing semicolon
    for (int i = 0; i < size; i++) {  // changed 'lenght' to 'size'
        total += values[i];
    }
    return total;
}
