#include<stdio.h>
int main()
{
	float x,y;
	char a;
	printf("enter the initial amount: \n");
	scanf("\n%f",&x);
	printf("enter c for credit , d for debit and b for balance \n");
	scanf("\n%c",&a);
	switch(a) {
		case 'c':
			printf("enter the credit amount \n");
			scanf("%f" , &y);
			x=x+y;
			printf("new amount in your account = %f",x);
			break;
		case 'd':
		printf("enter the debit amount: \n");
		scanf("%f" , &y);
		if(x>=y) {
			x=x-y;
			printf("new amount in your account = %f\n",x);
}
       else{
       	printf("insufficient amount\n");
	   }
	   break;
	   case 'b':
	   	printf("amount in your account is - %f \n" , x);
	   	break;
	   	
	
	default:
		printf("enter the valid character :\n");
}
return 0;
}
