
#include <stdio.h> 
  
int n=8;
void fun(int arr[])  // SAME AS void fun(int *arr) 
{ 
   printf("\nArray size inside fun() is %d", arr[2]); 
} 
  
int main() 
{ 
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
   printf("Array size inside main() is %d", n); 
   fun(arr); 
   int p=arr[9];
   printf("%d", p);
   return 0; 
} 
