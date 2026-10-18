#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	char b;
	double c;
	short d;
	printf("size of INT: %zu, address of INT a %p\n",sizeof(a), (void *)&a);
        printf("size of CHAR: %zu, address of CHAR b %p\n",sizeof(b), (void *)&b);
	printf("size of DOUBLE: %zu, address of DOUBLE a %p\n",sizeof(c), (void *)&c);
        printf("size of SHORT: %zu, address of SHORT d %p\n",sizeof(d),(void *)&d);
	return 0;
}	
