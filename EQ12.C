/*
  12.WAP thet read the radius sphere "r" then it calculate its volume 'V' using formula (PI*r*r*r*4)/3;
  author:Bhautik Thummar
  date:25:07:2024
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float Volume(float radius){
	float volume;
	volume=(PI*radius*radius*radius*4)/3;
	return volume;
}
void main(){
	float volume,radius;
	clrscr();
	printf("Enter Radius: ");
	scanf("%f",&radius);
	volume=Volume(radius);
	printf("Volume = %g",volume);
	getch();
}