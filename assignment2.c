#include <stdio.h>
#include <stdlib.h>
struct DataType{
	 char a;
	 int b;
	 double c;
};
struct DataType2{
	double c;
	int b;
	char a;
};
int main(){
	struct DataType2 dt2;
	struct DataType dt;
	printf("Size of struct: %zu\n", sizeof(dt));
	printf("Address of char: %p\nAddress of int: %p\nAddress of double: %p\n",(void *)&dt.a, (void *)&dt.b, (void *)&dt.c);
	printf("Ordered struct!\n");
        printf("Size of struct: %zu\n", sizeof(dt2));
        printf("Address of double: %p\nAddress of int: %p\nAddress of char: %p\n",(void *)&dt2.c, (void *)&dt2.b, (void *)&dt2.a);

	
	return 0;
}

