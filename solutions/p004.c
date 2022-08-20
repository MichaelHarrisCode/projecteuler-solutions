/**
 * Largest palindrome product
 * 
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. 
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>

int is_palindrome(int number)
{
	int reversed, temp;
	temp = number;
	reversed = 0;

	while (temp > 0) {
		reversed *= 10;
		reversed += temp % 10;

		temp /= 10;
	}

	if (number == reversed)
		return 1;
	return 0;
}

int main()
{
	int product, largest;

	for (int i = 100; i <= 999; i++) {
		for (int j = 100; j <= 999; j++) {
			product = i * j;

			if (is_palindrome(product) && product > largest)
				largest = product;
		}
	}

	printf("%d\n", largest);
	return 0;
}