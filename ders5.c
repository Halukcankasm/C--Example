#include<stdio.h>

int main(){
	int x=5;
	int y=7;
	int a=2;
	
	x=y;
	y=x+a+1;
	
	printf("x:%d\n y:%d\n a:%d\n ",x,y,a);
	 x=4;
	 y=5;
	 a=6;
	
	printf("x:%d y:%d a:%d ",--x,++y,a++);	
	printf("x:%d y:%d a:%d ",x,y,a);		
	
	return 0;
}
