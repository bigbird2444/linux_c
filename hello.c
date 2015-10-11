#include <stdio.h>
#include <malloc.h>
int a=3;
int b;

int main(){
	int arr[1024*1024];
	arr[0]=6;
	char *p1=malloc(sizeof(char));
	int  *p2=malloc(sizeof(int)*1024*1024*100);
	*p2=3;
	*p1=2;
	char str1[]="hello,world";	
	printf("%s\n",str1);
	printf("%x\n",p1);
	printf("%x\n",p2);
	printf("%x\n",(p2+1024*1024*98));
	return 0;
}

