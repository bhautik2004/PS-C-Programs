/*
 4. Write a program to find area of ractangle.(AREA=l*b)
 author: Thmmar Bhautik
*/
#include<stdio.h>
#include<conio.h>

float AreaOfRactangle(float length,float breath){
	float area;
	area=length*breath;
	return area;
}
void main(){
 float length,breath;
 clrscr();
 printf("Enter Value Of length");
 scanf("%f",&length);
 printf("Enter Value Of Width");
 scanf("%f",&breath);
 printf("The Area Of Ractangle Is %f",AreaOfRactangle(length,breath));
 getch();
}
/*
output:
  Enter Value Of length5
Enter Value Of Width4
The Area Of Ractangle Is 20.000000

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/