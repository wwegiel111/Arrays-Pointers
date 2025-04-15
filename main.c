#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Complete exercise of Arrays and Pointers

void ex_1() {
  int x;
  int *px;

  px = &x;
  *px = 10;
  printf("Value of variable x (directly) = %d\n", x);
  printf("Value of variable x (indirectly) = %d\n", *px);
  printf("Adress of variable x = %p\n", px);
  printf("Address of pointer x %p\n", &px );
}

void fill_array(int* tab, int size) {
  printf("Array filled with random values: \n");
  for (int i = 0; i < size; i++) {
    *(tab + i) = rand() % 10;
  }
  for (int i = 0; i < size; i++) {
    printf("%d ", *(tab + i));
  }
  printf("\n");
}

int min(int* tab, int size) {
  int min = *tab;
  int min_index = 0;
  for (int i = 0; i < size; i++) {
    if (*(tab + i) < min) {
      min = tab[i];
      min_index = i;
    }
  }
  return min_index;
}

int strlen(char *str) {
  int len = 0;
  while (*(str + len) != '\0') {
    len++;
  }
  return len;
}

char* strcpy(char* dest, const char* src) {
  char* start = dest;

  while (*src != '\0') {\
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return start;
}

int additon(float* num1, float* num2, float *result) {
  *result = *num1 + *num2;
  return 1;
}

int divide(float* num1, float* num2, float *result) {
  *result = *num1 / *num2;
  return 1;
}

int find(int (*tab)[10], int key, int *row, int*col) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      if (*(*(tab + i) + j) == key) {
        *row = i+1;
        *col = j+1;
        return 1;
      }
      }
    }
    return 0;
  }

int main(void){
  //printf("Enter the number of elements: ");
  int n = 5;
  //scanf("%d", &n);
  int arr[n];
  srand(time(NULL));
  fill_array(arr, n);
  int min_index = min(arr, n);
  printf("Smallest value of array: %d\n", *(arr + min_index));
  char* str = "GPP_MDS2";
  printf("Text is: %s\n", str);
  int length = strlen(str);
  printf("Length of string is: %d\n", length);
  char dest[length];
  strcpy(dest, str);
  printf("Coppied string is: %s\n", dest);
  int a = 4;
  int b = 2;
  int wynik0 = 0;
  float wynik = 0.0;
  additon(&a, &b, &wynik0);
  divide(&a, &b, &wynik);
  printf("Wynik is: %.2f\n", wynik);
  printf("Wynik is: %d\n", wynik0);
  int tab[3][10] = {
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25, 26, 27, 28, 29, 30}
  };
  int key = 16;
  int row, col;
  if (find(tab, key, &row, &col)) {
    printf("Key %d found at row %d, col %d\n", key, row, col);
  } else {
    printf("Key %d not found\n", key);
  }

  return 0;
}