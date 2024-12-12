//Write a program to find the mean of n numbers  using arrays.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void readarray(int*, int);
float meanarray(int*, int);
int main(void){
  int size;
  printf("Enter the size of this array = ");
  scanf("%d", &size);
  int array[size];
  printf("Enter the values of this array\n");
  readarray(array, size);
  float mean = meanarray(array, size);
  double frac, inte;
  frac = modf(mean, &inte);
  frac == 0.0 ? printf("The mean = %d\n", (int)inte) :
  printf("The mean = %.2f\n", mean); 
  return 0;
}
void readarray(int array[], int size){
  for(int i = 0; i < size; i++){
    printf(" Array[%d] = ", i);
    scanf("%d", &array[i]);
  }
}
float meanarray(int array[], int size){
  float sum = 0;
  for(int i = 0; i < size; i++)
    sum += array[i];
  sum = sum/size;
  return sum;
}
