/*
Write a program in C for the following scenario:
A country has coins of denomination 3, 5 and 10, respectively.
Define a recursive function canchange(k) that returns –1 if it is
not possible to pay a value of k using these coins. Otherwise, it
returns the minimum number of coins needed to make the
payment.
For example, canchange(7) will return –1. On the other hand,
canchange(14) will return 4 because 14 can be paid as 3+3+3+5,
and there is no other way to pay with fewer coins. Finally, 15 can
be changed as 3+3+3+3+3, 5+5+5, 5+10, so canchange(15) will
return 2.
*/

// Description: Finds the minimum number of coins needed to make a given amount using denominations 3, 5, and 10 (recursive).
// Concepts used: Recursion, conditional statements, minimum calculation

#include <stdio.h>

int canChange(int k){
	if (k == 0) return 0;
	if (k < 0) return -1;

	int minCoins = -1;

	int res1 = canChange(k - 3);
	if(res1 != -1){
		res1++;
		if(res1 < minCoins || minCoins == -1) minCoins = res1;
	}
	int res2 = canChange(k - 5);
	if(res2 != -1){
		res2++;
		if(res2 < minCoins || minCoins == -1) minCoins = res2;
	}
	int res3 = canChange(k - 10);
	if(res3 != -1){
		res3++;
		if(res3 < minCoins || minCoins == -1) minCoins = res3;
	}
	return minCoins;
}

int main(){
	int n;
	printf("Enter the amount: ");
	scanf("%d", &n);

	printf("%d", canChange(n));

	return 0;
}