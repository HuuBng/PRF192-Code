#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//---------------------------------------
double sum(int n){
	//Write your statements here
  double i, sum = 0;
  for(i = 1; i <= n; i++) {
    sum += i / sqrt(i);
  }
  return sum;
	//End your statements
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{
  system("cls");
  printf("\nTEST Q2 (2 marks):\n");
  int n;
  double result;
  printf("Enter n = "); scanf("%d",&n);
  result = sum(n);
  printf("\nOUTPUT:\n");
  printf("%.2lf",result);
  printf("\n");
  system ("pause");
  return(0);
}
//===============================================================================
