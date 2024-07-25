/*
 6.WAP in c to convert the given tempeature from fahrenhit to ccelsius using formula c=(f-32)/1.8
 author:bhautik thumar
 date:24.7.2024
 */

#include<stdio.h>
#include<conio.h>

float FahrenhitToCelsius(float fahrenhit){
      float celsius;
      celsius=(fahrenhit-32)/1.8;
      return celsius;
}

void main(){
 float fahrenhit,celsius;
 clrscr();
 printf("Enter Value of Fahrenhit : ");
 scanf("%f",&fahrenhit);
 celsius=FahrenhitToCelsius(fahrenhit);
 printf("Celsius = %f",celsius);
 getch();

}

/*
  output:
  Enter Value of Fahrenhit : 45
Celsius = 7.222222                                                              
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


*/