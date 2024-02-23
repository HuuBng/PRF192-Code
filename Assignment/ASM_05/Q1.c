#include <stdio.h>
#include <stdlib.h>
//----------------------------------------------------------
void countSumOddDigits(int n, int *count,int *sum){
	*sum = 0;
  *count=0;
	//Write your statements here
	do {
		int remainder = n % 10;
		if(remainder % 2 == 1) {
			*sum += remainder;
			*count += 1;
		}
		n /= 10;
	} while (n != 0);
	//End your statements
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{

  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int n;
  int i,count, sum;
  printf("Enter n = "); scanf("%d",&n);
  countSumOddDigits(n, &count , &sum);
  printf("\nOUTPUT:\n");
  printf("%d,%d",count,sum);
  printf("\n");
  system ("pause");
  return(0);
}
//================================================================================
