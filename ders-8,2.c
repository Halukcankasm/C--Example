#include<stdio.h>
#include<math.h> //karekök için matemetik fonksiyonu çaðýrdýk

//ax^2 + bx + c þeklinde denklemin

int main(){
	float a,b,c;
	float x1,x2;
	float delta;
	
	printf("denklemin a'sini giriniz");
	scanf("%f",a);
		printf("denklemin b'sini giriniz");
	scanf("%f",b);
		printf("denklemin c'sini giriniz");
	scanf("%f",c);
	
	delta=b*b-4*a*c;
	x1=(-b+(sqrt(delta)) )/2*a;
		x2=(-b-(sqrt(delta)) )/2*a;
		
		printf("denklemin 1.koku %f,ikinci koku %f dir",x1,x2);
		
		return 0;
}
