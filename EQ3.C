/*
  3. Write a program to add,multiply and divide two integers and float numbers.
  author : thummar bhautik
  date:23.7.2024
*/

#include<stdio.h>
#include<conio.h>

int AddIntegers(int a, int b){
	return a+b;
}
float AddFloats(float c, float d){
	return c+d;
}
int MultiplyIntegers(int a,int b){
	return a*b;
}
float MultiplyFloats(float c, float d){
	return c*d;
}


void main(){
	int a,b;
	float c,d;
	clrscr();
	a=10;
	b=20;
	c=2.5;
	d=1.5;
	printf("The Addidition of Two integers is : %d",AddIntegers(a,b));
	printf("\nThe Addidition of Two floats is : %f",AddFloats(c,d));
	printf("\nThe multiply of two integers is : %d",MultiplyIntegers(a,b));
	printf("\nThe multiply of two floats is : %f",MultiplyFloats(c,d));
	getch();
}
/*
output:
The Addidition of Two integers is : 30
The Addidition of Two floats is : 4.000000                                      
The multiply of two integers is : 200                                           
The multiply of two floats is : 3.750000                                        
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/
