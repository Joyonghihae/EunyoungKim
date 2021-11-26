/*
FILE : f2.cpp
PROJECT : assignment
PROGRAMMER : Eunyoung Kim
VERSION : 2021/09/16
DESCRIPTION : Add up all the numbers from 1 to 100 using loop, and express the sum.
*/
#include <stdio.h>


int main() {

	int ii = 1;
	int sum = 0; 

	
	while (ii < 101) {

		sum += ii;

		ii++;
	}
	printf("%d", sum);

	return 0;
	
	
	/*
	while (i += 1) {
		sum += i;
		if (i == 100) {
			printf("%d", sum);
		}
	}
	*/

}
