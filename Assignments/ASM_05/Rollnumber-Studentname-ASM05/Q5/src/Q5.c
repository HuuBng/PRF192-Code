#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 101
//-------------------------------------------------------
//The function used to convert a character to an integer
int toInt(char c) ;
//-------------------------------------------------------
int sumDigits(char *s){
 	int i,length,sum;
    //Begin your statements here
    //
    //End your statements
	return sum;
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{
  system("cls");
  printf("\nTEST Q5 (2 marks):\n");
  int n,sum;
  char s[MAX];
  printf("Enter s : "); scanf("%100[^\n]",s);     
  sum = sumDigits(s);
  printf("\nOUTPUT:\n");  
  printf("%d",sum);
  printf("\n");
  system ("pause");
  return(0);    
}
 //============================================================ 
