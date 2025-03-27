#include <stdio.h>

// exercise 1
void pointers(int* array, int size) {
    int number = 10;
    int *ptr = &number;
    printf("Number: %d\n", number);
    printf("Pointer: %p\n", ptr);
    printf("Pointer value: %d\n", *ptr);
    printf("Number address: %p\n", &number);
}

// exercise 2
void print_array(int* tab, int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void fill_array(int* tab, int size){
    int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for(int i = 0; i < size; i++){
        tab[i] = prime[i];
    }
}

int min(int* tab, int size){
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
    const char *ptr = str;
    int count = 0;

    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
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
    return 0;
}