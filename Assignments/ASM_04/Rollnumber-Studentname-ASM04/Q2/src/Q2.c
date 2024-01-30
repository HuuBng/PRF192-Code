#include <stdio.h>
#include <stdlib.h>
//The function used to find smallest element in the array
int findMinElement(int *a,int n);
//--------------------------------------------
//The function used to count the number of occurrences of the smallest elements in the array
int count(int *a, int n){
	int count;
	//Write your statements here  
    //......
	//End your statements 	
	return count;
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
  printf("\nTEST Q2 (3 marks):\n");
  int a[50];
  int n,result; 
  printf("Enter n = "); scanf("%d",&n);   
  input(a,n);
  result = count(a,n);
  printf("\nOUTPUT:\n");
  printf("%d",result); 
  printf("\n");
  system ("pause");
  return(0);  
}
//===========================================================================
