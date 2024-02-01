#include <stdio.h>
#include <stdlib.h>
int gcd(int n,int m){
	//Begin your statements here
	while(n != m) {
    if(n > m)
      n -= m;
    else
      m -= n;
  }
  return n;
	//End your statements
}
//--------------------------------------------------------
int lcm(int n,int m){
	//Begin your statements here
	return (n * m) / gcd(n, m);
	//End your statements
}
/*
========================DO NOT EDIT GIVEN STATEMENTS IN THE MAIN FUNCTION.============================
===IF YOU CHANGE, THE GRADING SOFTWARE CAN NOT FIND THE OUTPUT RESULT TO SCORE, THUS THE MARK IS 0.===
*/
int main()
{ 
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  int n,m, l, g; 
  printf("Enter n = "); scanf("%d",&n);   
  printf("Enter m = "); scanf("%d",&m);   
  g = gcd(n,m);
  l = lcm(n,m);
  printf("\nOUTPUT:\n"); 
  printf("%d;%d",g,l);
  printf("\n");
  system ("pause");
  return(0);  
}
//============================================================ 

