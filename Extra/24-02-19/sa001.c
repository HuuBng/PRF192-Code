#include <stdio.h>
#define arrSize 20

int main()
{

  int arr[arrSize] = {3, 5, 6, -45, 43, 534, 66, 78, 88, 99, 100};
  int i;


  for(i = 0; i < arrSize; i++) {
    printf("arr[%d] = \t%d\t\t&arr[%d] = \t%d\n", i, arr[i], i, &arr[i]);
  }

  printf("\n----------------------------------------------------------\n\n");
  for(i = arrSize - 1; i >= 0; i--) {
    printf("arr[%d] = \t%d\t\t&arr[%d] = \t%d\n", i, arr[i], i, &arr[i]);
  }

  // printf("arr[%d] = %d\n&arr[%d] = %d\n", 0, arr[0], 0, &arr[0]);
  // printf("arr[%d] = %d\n&arr[%d] = %d\n", 10, *(arr+10), 10, arr+10);

  return 0;
}
