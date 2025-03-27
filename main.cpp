#include <stdio.h>

    void fill_array(int* tab, int size){
        int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
        for(int i = 0; i < size; i++){
            tab[i] = prime[i];
        }
    }

    void print_array(int* tab, int size) {
        printf("Array elements: ");
        for(int i = 0; i < size; i++){
            printf("%d ", tab[i]);
        }
        printf("\n");
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

    int main(){
        int number = 10;
        int array[10];
        int *ptr = &number;
        printf("Number: %d\n", number);
        printf("Pointer: %p\n", ptr);
        printf("Pointer value: %d\n", *ptr);
        printf("Number address: %p\n", &number);
        fill_array(array, 10);
        print_array(array, 10);
        printf("Minimum: %d\n", min(array, 10));
        return 0;
    }