#include <stdio.h>
#include<string.h>
int main(void) {
	int n=15,i=0,a[10],j,remainder,count=0,binary=0,base=1;
	char ch=ch+n;
while (ch > 0)
    {
        remainder = ch % 2;
        binary = binary + remainder * base;
        ch = ch / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %ld\n", binary);
	return 0;
}
