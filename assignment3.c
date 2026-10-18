#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct A3{
	char a;
	int b;
	double c;
};
int main(){
	struct A3 dt;
	printf("Size of struct: %zu\n", sizeof(dt));
	printf("Address of char: %p\nAddress of int: %p\nAddress of double: %p\n",(void *)&dt.a, (void *)&dt.b, (void *)&dt.c);
	return 0;
}
