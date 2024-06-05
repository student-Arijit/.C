#include<stdio.h>
void readarray(int*, int);
void displayarray(int*, int);
int main(void){
  int size;
  printf("Enter the size of this array = ");
  scanf("%d", &size);
  int array[size];
  printf("Enter the values of this array\n");
  readarray(array, size);
  printf("The elements are - ");
  displayarray(array, size);
  return 0;
}
void readarray(int array[], int size){
  for(int i = 0; i < size; i++){
    printf(" Array[%d] = ", i);
    scanf("%d", &array[i]);
  }
}
void displayarray(int array[], int size){
  for(int i = 0; i < size; i++){
    printf("\n Array[%d] = %d", i, array[i]);
  }
}
