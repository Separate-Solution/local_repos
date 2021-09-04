#include <stdio.h>

int main(void) {
	// your code goes here
	float initial_balance; 
	int amount_withdrawn;
	//printf("Enter Initial Balance and Amount to be withdrawn");
	scanf("%f %d", &initial_balance, &amount_withdrawn);
	if(amount_withdrawn<=initial_balance-0.50 && amount_withdrawn%5==0)
	{
	        initial_balance=initial_balance-amount_withdrawn-0.50;
	        printf("Remaining Balance is %0.2f\n", initial_balance);
	}
	else
	{
	printf("Remaining Balance is %0.2f\n", initial_balance);
	}
	return 0;
}

