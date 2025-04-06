#include <stdio.h>

// exercise 1
void pointers(int* array, int size) {
    if (array == NULL || size <= 0) {
        return;
    }
    int number = 10;
    int *ptr = &number;
    printf("Number: %d\n", number);
    printf("Pointer: %p\n", ptr);
    printf("Pointer value: %d\n", *ptr);
    printf("Number address: %p\n", &number);
}

// exercise 2
void print_array(int* tab, int size) {
    if (tab == NULL || size <= 0) {
        return;
    }
    printf("Array elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void fill_array(int* tab, int size){
    if(tab == NULL) {
        return;
    }
    int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for(int i = 0; i < size; i++){
        tab[i] = prime[i];
    }
}

int min(int* tab, int size){
    if (tab == NULL || size <= 0) {
        return 0;
    }
    int min = tab[0];
    for(int i = 1; i < size; i++){
        if(tab[i] < min){
            min = tab[i];
        }
    }
    return min;
}

// exercise 3
int string_length(const char *str) {
    if (str == NULL) return 0;
    const char *ptr = str;
    int count = 0;

    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
}

// exercise 4
char* strcpy(char *dest, const char *src) {
    if (dest == NULL || src == NULL) {
        return 0;
    }
    char *ptr = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}

// exercise 5
int operation(float* num1, float* num2, float *result, int operation, const char **op_name) {
    if (num1 == NULL || num2 == NULL || result == NULL || op_name == NULL) {
        return 0;
    }
    switch (operation) {
        case 1:
            *op_name = "addition";
            *result = *num1 + *num2;
            return 1;
        case 2:
            *op_name = "subtraction";
            *result = *num1 - *num2;
            return 1;
        case 3:
            *op_name = "multiplication";
            *result = *num1 * *num2;
            return 1;
        case 4:
            *op_name = "division";
            if (*num2 != 0) {
                *result = *num1 / *num2;
            } else {
                return 0;
            }
            return 1;
        default:
            return 0;
    }
}

// exercise 6
int find(int (*tab)[10], int key, int *row, int*col) {
    if (tab == NULL || row == NULL || col == NULL) {
        return 0;
    }
}

int main(){
    int array[10];
    pointers(array, 10);
    fill_array(array, 10);
    print_array(array, 10);

    printf("Minimum: %d\n", min(array, 10));
    const char *tekst = "Hello, World!";
    int length = string_length(tekst);
    printf("String length: '%s' is: %d\n", tekst, length);
    char dest[20];
    char src[] = "Hello, World!";
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    printf("Original string: %s\n", src);
    float num1 = 10.0;
    float num2 = 5.0;
    float result;
    const char *op_name;
    operation(&num1, &num2, &result, 1, &op_name);
    printf("Result of %s: %f\n", op_name, result);

    return 0;
}