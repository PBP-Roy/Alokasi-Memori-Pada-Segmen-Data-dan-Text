#include <stdio.h>

// Segmen Data
int largeArray[1000000];  // Array besar yang mungkin tidak diperlukan
int unusedVariable = 42;  // Variabel yang tidak pernah digunakan

// Segmen Text
void duplicateFunction() {
    printf("Ini adalah fungsi yang duplikat dan tidak diperlukan.\n");
}

void main() {
    duplicateFunction();
    duplicateFunction();
}
