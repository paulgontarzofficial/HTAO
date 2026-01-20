#include <stdio.h>
#include <string.h>

int main(){
	char str_a[20];	// A 20-Element character array
	char *pointer;	// A pointer, meant for a character array
	char *pointer2;	// And how about anotha!

	strcpy(str_a, "Hello, World!\n");
	pointer = str_a;	//Setting the first pointer to the start of the char array
	printf(pointer);

	pointer2 = pointer + 2;	//Setting the second pointer two bytes further in.
	printf(pointer2);	//Print out the second pointer
	strcpy(pointer2, "y you guys!\n");	//Copy into that spot
	printf(pointer);
}
