/*
  14.Write a program to check whether input is vovel or not.
  author : Thummar Bhautik
  date : 8-9-2024
*/
#include<conio.h>
#include<stdio.h>

int IsVovel(char alphabet){
       if(alphabet == 'a'||alphabet == 'e'||alphabet == 'i'||alphabet == 'o'||alphabet == 'u'||alphabet == 'A'||alphabet == 'E'||alphabet == 'I'||alphabet == 'O'||alphabet == 'U'){
		return 1;
       }
       else {
		return 0;
       }
}
void main(){
	char alphabet;
	clrscr();
	printf("Enter Any Alphabet : ");
	scanf("%c",&alphabet);
	if(IsVovel(alphabet) > 0){
		printf("Given Alphabet is Vovel ");
	}
	else{
		printf("Given Alphabet is Not Vovel ");
	}
	getch();
}
/*
  output:
  Enter Any Alphabet : e
Given Alphabet is Vovel                                                         
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/