#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap so thu nhat: ");
	scanf("%f", &a);
	printf("nhap so thu hai: ");
	scanf("%f", &b);
	char item ;
	printf("nhap dau: ");
	scanf("%s", &item);
	if (item = ' + '){
		c = a + b;
		printf("tong cua 2 so la: %.2f", c);
	}else if (item = '-'){
		c = a - b;
		printf("hieu cua 2 so la: %.2f",c);
	}else if (item = '*'){
		c = a*b;
		printf("tich cua 2 so la: %.2f", c);
	}else if (item = '/'){
		c=a/b;
		printf("thuong cua 2 so la: %.2f",c);
	}

}
