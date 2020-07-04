

#include<stdio.h>
#include<stdlib.h>

int add(){
	static int a = 0;
	printf("%d\n",a);
	++a;
	return a;
}

int main()
{
	while(1){
		if(add()>10){
			break;
		}
	}
}
