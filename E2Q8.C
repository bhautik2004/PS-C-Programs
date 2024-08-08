/*
  8.WAP to check eligiblity of student for admission student should fullfill the following criteria for admission:
	Mathematics >=50
	Physics >= 45
	Chemistry >= 60
	total of subject >=170
	or
	total Mathematics + Physics >=120
	Accept the mark of all three subject from the user and check if the student is eligible for admission .
	print the message :
			Student is eligible for Admission
			Student is not eligible for admission.

	Author :Bhautik Thummar
*/
#include<stdio.h>
#include<conio.h>

int IsEligible(const int mathematics,const int physics,const int chemistry ){
	int total;
	total = mathematics+physics+chemistry;
	if(mathematics>=50 && physics >= 45 && chemistry >=60 && total >= 170 && mathematics+physics >=120){
		return 1;
	}
	else
		return 0;
}
void main(){
	int mathematics,physics,chemistry;
	clrscr();
	printf("Enter Mark Of Subject Mathematics : ");
	scanf("%d",&mathematics);
	printf("Enter Mark Of Subject Physics : ");
	scanf("%d",&physics);
	printf("Enter Mark Of Subject chemistry : ");
	scanf("%d",&chemistry);
	if(IsEligible(mathematics,physics,chemistry)==1){
		printf("Student Is Eligible For Admission");
	}
	else{
		printf("Student Is Not Eligible For Admission");
	}
	getch();
}

/*
  output:
  Enter Mark Of Subject Mathematics : 76
Enter Mark Of Subject Physics : 65                                              
Enter Mark Of Subject chemistry : 83

Student Is Eligible For Admission                                               
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/