/* Second Largest Element in Array */

#include <stdio.h>

int secondlargest(int arr[], int n)
{
  int largest = -1;
  int secondlarg = -1;

  for(int i=0; i<n; i++)
  {
       if(arr[i] > largest)
       {
         secondlarg = largest;
         largest = arr[i];
       }
       else if( arr[i] < largest && arr[i] > secondlarg)
       {
          secondlarg = arr[i];
       }
  }
  return secondlarg;
}

int main()
{
    int arr[] = {2,4,5,7,9,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", secondlargest(arr, n));
    return 0;
}
