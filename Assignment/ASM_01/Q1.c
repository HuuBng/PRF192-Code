#include <stdio.h>
#include <stdlib.h>

int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int number01, number02;
  char op;
  double finalResult;
  printf("Enter number01 : "); scanf("%d",&number01);   
  printf("Enter number02 : "); scanf("%d%*c",&number02);   
  printf("Enter op (+ , - , * , /) : "); scanf("%c",&op);  
  //============================================================
  //Begin your statements here
  //Note: you must store the result into the finalResult variable
	switch(op) {
		case '+': {
			finalResult = number01 + number02;
			break;
		}
		case '-': {
			finalResult = number01 - number02;
			break;
		}
		case '*': {
			finalResult = number01 * number02;
			break;
		}
		case '/': {
			if(number02 == 0)
				finalResult = 0;
			else
				finalResult = number01*1.0 / number02;
			break;
		}
		default: finalResult = 0;
	}
  //End your statements
  //============================================================= 
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  printf("\nOUTPUT:\n");    
  printf("%.2lf",finalResult);  
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
