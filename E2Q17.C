/*
  17.WAP to Swap two number;
  author bhautik thummar
  date : 8-9-2024
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a, b;
    clrscr();
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;  
    b = a ^ b;  
    a = a ^ b;  

    printf("After swapping: a = %d, b = %d\n", a, b);
    getch();

}
Enter two numbers:
4                                                                               
5                                                                               
Before swapping: a = 4, b = 5                                                   
After swapping: a = 5, b = 4                                                    

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


