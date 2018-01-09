#include <stdio.h>
#include<string.h>
#include<math.h>
int main(void) {
	int n,i=0,a[10],j,remainder,count=0,binary=0,base=1,length,flag=0,len;
	char ch[10]="372";
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]=='.'){
			flag++;
		}
	}
	if(flag==0)		
	{
	n=atoi(ch);	
		while(n!=0)
    {
        remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %ld\n", binary);
	}
	else
	{
		printf("error");
	}
	return 0;
}
