/*
FILE : m1.cpp
PROJECT : Major1
PROGRAMMER : Eunyoung Kim
FIRST VERSION : 2021/09/21
DECRIPTION : Outputs from a to z using the ASCII code. In addition, the average of the values is output as the character, 
and the first letter of the name is output as a number.


*/


#include<stdio.h>


int main(){

	
	
	const int MYINITIALNUMBER = 101;	
	int asciiNumber = 96;
	int increaseNumber = 1; 
	int averageNumber = 0; 
	

	
	while(increaseNumber < 27)
	{

		
		int sum = asciiNumber + increaseNumber;	
		int average = (averageNumber + asciiNumber + increaseNumber) / increaseNumber; 

		
		if (sum == MYINITIALNUMBER) {
			printf("%c  %d\n", sum, average);
		}
		else {																		
			printf("%c   %c\n", sum, average);
		}

		averageNumber = averageNumber + asciiNumber + increaseNumber;		
			increaseNumber++;													
		
	}

}