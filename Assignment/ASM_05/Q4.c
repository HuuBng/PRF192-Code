#include <stdio.h>
#include <stdlib.h>
//--------------------------------------------
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
//--------------------------------------------
int findLastPrime(int *a,int n){
	int lastPrime;
	int i;
	//Write your statements here
	lastPrime = 0;
  for(i = 0; i < n; i++) {
		lastPrime = (isPrime(a[i])) ? a[i] : lastPrime;
	}
	lastPrime = (lastPrime == 0) ? a[0] : lastPrime;
	//End your statements
	return lastPrime;
}
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
  int n, result;
  printf("Enter n = "); scanf("%d",&n);
  input(a,n);
  result = findLastPrime(a,n);
  printf("\nOUTPUT:\n");
  printf("%d",result);
  printf("\n");
  system ("pause");
  return(0);
}
//===========================================================================
