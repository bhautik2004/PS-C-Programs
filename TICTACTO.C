/*
  Tic Tac Toe Game in c.
  Bhautik Thumar
*/
#include<stdio.h>
// #include<conio.h>
void PrintArray(char a[][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("\t%c",a[i][j]);

		}
		printf("\n");
	}
}
char CheckWinner(char arr[][3]){
	int i;
	for(i=0;i<3;i++){
		if(arr[i][0] == arr[i][1] && arr[i][1]== arr[i][2] && arr[i][0] !='-')
			return arr[i][0]; 
		if(arr[0][i] == arr[1][i] && arr[1][i]== arr[2][i] && arr[0][i] !='-')
			return arr[0][i];			
	}
	if(arr[0][0] == arr[1][1] && arr[1][1]== arr[2][2] && arr[0][0] !='-')
			return arr[0][0];
	if(arr[0][2] == arr[1][1] && arr[1][1]== arr[2][0] && arr[0][2] != '-')
			return arr[0][0];
	
	return '-';
}
int main(){
	char arr[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
	int position=0,count=1;
	int flag=0;
	// clrscr();
	while(count<10){
			PrintArray(arr);
			if(flag==0){
				printf("\nX Turn \t ");
			}
			else{
				printf("\nO Turn \t ");
			}
			
			again:
			printf("Enter Position : ");
			scanf("%d",&position);
			if(position >9){
				printf("\nposition Must be graterthan 0 or less than 10 \n");
				goto again;
			}
			if(position<10 && position >0){
			switch(position){
			 case 1:
			 		if(arr[0][0] != '-'){
						printf("already filled this position \n");
						 goto again;
					}

					arr[0][0] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
					
				break;
			 case 2:
			 		if(arr[0][1] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
			 		arr[0][1] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
					
				break;
			 case 3:
			 		if(arr[0][2] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[0][2] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
					
				break;
			 case 4:
			 		if(arr[1][0] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[1][0] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
					
				break;
			 case 5:
			 		if(arr[1][1] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[1][1] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
				
				break;
			 case 6:
			 		if(arr[1][2] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[1][2] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
				break;
			 case 7:
			 		if(arr[2][0] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[2][0] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
					
				break;
			 case 8:
			 		if(arr[2][1] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[2][1] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
				break;
			 case 9:
			 		if(arr[2][2] != '-'){
						printf("already filled this position \n");
						 goto again;
					}
					arr[2][2] = (flag == 0) ? 'X' : 'O';
					flag = (flag==1)?0:1;
				break;
			 default:
				break;
			}
			printf("\n%d\n",count);
			
			if(CheckWinner(arr) == 'X'){
				PrintArray(arr);
				printf("\n X is Win ");
				break;
			}else if(CheckWinner(arr) == 'O'){
			 	PrintArray(arr);
				printf("\n O is Win ");
				break;
			}else if(count ==9 && CheckWinner(arr)=='-'){
				PrintArray(arr);
				printf("Its an Draw");
				break;
			}
			else
				count++;			
			}
			else
				printf("Invalid Choice \n GAME OVER..");
	}
	return 0;
	// getch();
}