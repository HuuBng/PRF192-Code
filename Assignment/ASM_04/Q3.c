#include <stdio.h>
#include <stdlib.h>
//The function used to check whether n is prime or not
int isPrime(int n) {
	int i;
	if(n < 2)
		return 0;
	for(i = 2; i < n; i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}
//----------------------------------------------------
double average(int *a, int n,int x){
	int i,count,sum;
	double avg;
	//Write your statements here
	count = 0;
  for(i = 0; i < n; i++) {
		if(a[i] > x && isPrime(a[i])) {
			sum += a[i];
			count++;
		}
	}
	avg = sum * 1.0 / count;
	//End your statements
	return avg;
}
//----------------------------------------------------
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
  printf("\nTEST Q3 (2 marks):\n");
  int a[50];
  int n,x;
  double result;
  printf("Enter n = "); scanf("%d",&n);
  input(a,n);
  printf("Enter x = "); scanf("%d",&x);
  result = average(a,n,x);
  printf("\nOUTPUT:\n");
  printf("%.2lf",result);
  printf("\n");
  system ("pause");
  return(0);
}
//===========================================================================
