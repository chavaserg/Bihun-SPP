#include <iostream>

void calculateValuesWithPointers(int n, int* a, int* b) {
    *a = n / 5;
    *b = 0;
    while (*a >= 0) {
        if ((*a + *b) * 5 + *b * 3 == n) {
            break;
        }
        (*a)--;
        (*b)++;
    }
}

void calculateValuesWithExternalVariables(int n, int& a, int& b) {
    a = n / 5;
    b = 0;

    while (a >= 0) {
        if ((a + b) * 5 + b * 3 == n) {
            break;
        }
        a--;
        b++;
    }
}

int main() {
    int n = 17; 

    int a_ptr, b_ptr;
    calculateValuesWithPointers(n, &a_ptr, &b_ptr);
    std::cout << "Values with pointers: a = " << a_ptr << ", b = " << b_ptr << std::endl;

    int a_ext, b_ext;
    calculateValuesWithExternalVariables(n, a_ext, b_ext);
    std::cout << "Values with external variables: a = " << a_ext << ", b = " << b_ext << std::endl;

    return 0;
}
