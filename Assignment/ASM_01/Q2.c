#include <stdio.h>
#include <stdlib.h>

int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");  
  double math, physics , chemistry; 
  double avg;
  int result;
  printf("Enter math : "); scanf("%lf",&math);   
  printf("Enter physics : "); scanf("%lf",&physics);
  printf("Enter chemistry : "); scanf("%lf",&chemistry);   
  //============================================================ 
  //Begin your statements here
  //Note: after processing the result variable will have value of : 1 / 2 / 3  / 4
  
  avg = (math + physics + chemistry) / 3.0;
  if (avg >= 8 && avg < 10)
  	result = 1;
  else if (avg >= 6.5)
		result = 2;
	else if (avg >= 5)
		result = 3;
	else if (avg >= 0)
		result = 4; 
  
  //End your statements
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  printf("\nOUTPUT:\n"); 
  printf("%d",result);
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
