//C program to implement Insertion sort recursively
#include <stdio.h>
#include<stdlib.h>
#include<time.h> 
// Recursive function to implement insertion sort
   void insertionSort(int arr[], int n)
 {
    if (n <= 1)
     return;
    insertionSort(arr,n-1); //Recursive call of insertion sort function
    int key = arr[n-1];
    int j = n-2;
     while (j >= 0 && arr[j] > key)
	{
      arr[j+1] = arr[j];
      j--;
    }
   arr[j+1] = key;
 } 
// Function to print the elements of an array
   int printArray(int arr[], int n)
 {
 	int i;
     for (i = 0; i < n; i++) 
       printf("%d\t ", arr[i]);
    printf("\n");
    return 0;
 }
//Main Function  
   int main()
 {
    int arr[10000]; 
    int lower,upper,count,i,j;
    clock_t begin,end;
    printf("Enter the values for lower, upper and count \n");
    scanf("%d%d%d",&lower,&upper,&count);
    srand(time(0));
   //Generation of random numbers 
   printf("The given elements are: \n");
       for(i=0;i<count;i++)
     {
 	    arr[i] = (rand()%(upper-lower+1))+lower;
        printf("%d\t",arr[i]);
     }
   printf("\n");
   begin=clock(); //returns the begining clock tick
   insertionSort(arr,count); //Calling the function to implement insertion sort
   printf("Array of elements after insertion sort are: \n");
   printArray(arr,count);
   end = clock(); //returns the ending clock tick
   end = end - begin; //returns the number of clock ticks taken to execute the function
   double time = ((double)end)/CLOCKS_PER_SEC;     //returns the number of seconds taken to execute the function
   printf("\n\n Time taken by the CPU to sort the %d elements using insertion sort is %f seconds",count,time);
   return 0;
 }
