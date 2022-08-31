/**
 * The sequence of triangle numbers is generated by adding the natural numbers.
 * So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. 
 * The first ten terms would be:
 * 
 * 	1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 * 
 * Let us list the factors of the first seven triangle numbers:
 * 
 * 	1: 1
 * 	3: 1,3
 * 	6: 1,2,3,6
 * 	10: 1,2,5,10
 * 	15: 1,3,5,15
 * 	21: 1,3,7,21
 * 	28: 1,2,4,7,14,28
 * 
 * We can see that 28 is the first triangle number to have over five divisors.
 * 
 * What is the value of the first triangle number to have over five hundred divisors?
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int tri_num, nat;
	nat = tri_num = 1;

	for (int count = 0;; tri_num += ++nat) {
		count = 0;

		for (int i = 1; i <= sqrt(tri_num); i++) {
			if (tri_num % i == 0) {
				if (tri_num / i == i)
					count++;
				else
					count += 2;
			}
		}
		
		if (count > 500)
			break;
	}

	printf("%d\n", tri_num);
	return 0;
}