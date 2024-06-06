#include<stdio.h>
#include<stdlib.h>
void readarray(int*, int);
int findlargestval(int*, int);
int compare(const void *a, const void *b){
  return (*(int *)a - *(int *)b);
}
int main(void){
  int size;
  printf("Enter the size of this array = ");
  scanf("%d", &size);
  int array[size];
  readarray(array, size);
  int large_val = findlargestval(array, size);
  printf("The largest value of the array = %d", large_val);
  return 0;
}
void readarray(int array[], int size){
  for(int i = 0; i < size; i++){
    printf("Array[%d] = ", i);
    scanf("%d", &array[i]);
  }
}
int findlargestval(int array[], int size){
  if(size <= 0)
    exit(0);
  qsort(array, size, sizeof(int), compare);
  return (array[size - 1]);
}
