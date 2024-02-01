#include <stdio.h>
#include <stdlib.h>
//The function used to find the smallest element in the array
int findMinElement(int *a,int n) {
  int i, min = 100;
  for(i = 0; i < n; i++)
    min = (a[i] < min) ? a[i] : min;
  return min;
}
//The function used to find the largest element in the array
int findMaxElement(int *a,int n) {
  int i, max = 0;
  for(i = 0; i < n; i++)
    max = (a[i] > max) ? a[i] : max;
  return max;
}
//----------------------------------------------------------
int sum(int *a, int n){
    int s;
	//Write your statements here
  int i, min = findMinElement(a, n), max = findMaxElement(a, n);
  s = 0;
  for(i = 0; i < n; i++) {
    if(a[i] == min || a[i] == max)
      s += a[i];
  }
	//End your statements
	return s;
}
//-----------------------------------------------------
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{
  system("cls");
  printf("\nTEST Q4 (2 marks):\n");
  int a[50];
  int n,result;
  printf("Enter n = "); scanf("%d",&n);
  input(a,n);
  result = sum(a,n);
  printf("\nOUTPUT:\n");
  printf("%d",result);
  printf("\n");
  system ("pause");
  return(0);
}
//===========================================================================
