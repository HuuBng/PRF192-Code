#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");      
  int numberOfVowels = 0;
  char ch;
  //============================================================   
  do{
  	 printf("Enter character : "); 
	 scanf("%c%*c",&ch);   	 
	 //Begin your statements here
   //Note: after processing the result will be stored in the numberOfVowels variable  
	 
	  ch = toupper(ch);
		if(ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U')
			numberOfVowels += 1;
	 
	 //End your statements
  }while(ch!='#');  
  
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  printf("\nOUTPUT:\n"); 
  printf("%d",numberOfVowels );
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
