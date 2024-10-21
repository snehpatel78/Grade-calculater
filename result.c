#include <stdio.h>

int main(){
	int num,grade;
	
	printf("Enter your score out of 100:");
	scanf("%d",&num);
	
	num=num/10;
	(int)num;
	grade=(int)num;
	switch(grade){
		
		case 1:printf("fail");
		break;
		
		case 2:printf("fail");
		break;
		
		case 3:printf("fail");
		break;
		
		case 4:printf("F");
		break;
		
		case 5:printf("E");
		break;
		
		case 6:printf("D");
		break;
		
		case 7:printf("C");
		break;
		
		case 8:printf("B");
		break;
		
		case 9:printf("A");
		break;
		
		case 10:printf("A+");
		break;
		
		default :printf("better luck next time");
		break;
		
	
	}
}
