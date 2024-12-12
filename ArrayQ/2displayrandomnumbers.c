// Write a program to read and display n random numbers using an array.
#include<stdio.h>
#include<stdlib.h>
#define max 10
int randomnumbergenerator();
void readarray(int*, int);
void displayarray(int*, int);
int main(void){
  int size;
  printf("Enter the Size of this array = ");
  scanf("%d", &size);
  int array[size];
  printf("Enter the values in the array - \n");
  readarray(array, size);
  printf("This is your elements - ");
  displayarray(array, size);
  return 0;
}
int randomnumbergenerator(void){
  int number;
  number = rand() % max;
  return number;
}
void readarray(int array[], int size){
  for(int i = 0; i < size; i++){
    int number = randomnumbergenerator();
    array[i] = number;
  }
}
void displayarray(int array[], int size){
  for(int i = 0; i < size; i++){
    printf("\n Array[%d] = %d", i, array[i]);
  }
}
