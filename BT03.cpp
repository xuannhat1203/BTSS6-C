#include<stdio.h>
int main(){
   printf("Menu");
   printf("\n1. Tong 3 so nguyen");
   printf("\n2.Trung binh cong cua 3 so nguyen");
   printf("\n3.So lon nhat va so nho nhat");
   printf("\n4.Thoat");
   char wish;
   printf("ban muon lam gi: ");
   scanf("%s", &wish);
   int a,b,c;
   printf("nhap so thu nhat: ");
   scanf("%d",&a);
   printf("nhap so thu hai: ");
   scanf("%d", &b);
   printf("nhap so thu ba: ");
   scanf("%d", &c);
   int ketqua;
   int i = 0;
   do {
   switch(wish){
   	case 'a':
   		ketqua =  a + b + c; 
   		printf("ket qua: %d", ketqua);
   		i +=1;
		break;
	case 'b':
		ketqua = (a+b+c)/3;
		printf("ketqua: %d",ketqua);
			i +=1;
		break;
	case 'c':
		if (a>b && b>c){
			printf("a la so lon nhat");
			printf("c la so nho nhat");
				i +=1;
		}else if( a > b && b < c){
			if ( a > c ){
				printf("a la so lon nhat");
				printf("b la so nho nhat");
					i +=1;
			}else{
				printf("c la so lon nhat");
				printf("b la so nho nhat");
					i +=1;
			}
		}else if ( b > a && a > c){
			printf("b la so lon nhat");
			printf("c la so nho nhat");
				i +=1;
		}else if ( b > a && a < c){
			if ( b > c ){
				printf("b la so lon nhat");
				printf("a la so nho nhat");
					i +=1;
			}else {
				printf("c la so lon nhat");
				printf("a la so nho nhat");
					i +=1;
			}
		}else if ( c > a && a > b ){
			printf("c la so lon nhat");
			printf("b la so nho nhat");
				i +=1;
		}else if ( c > a && a < b ){
			if (c>a){
				printf("c la so lon nhat");
				printf("b la so nho nhat");
					i +=1;
			}else{
				printf("a la so lon nhat");
				printf("b la so nho nhat");
					i +=1;
			}
		}
		break;
	case 'd':
			i +=1;
		break;
   }
}while(a!=b!=c && i==1);
	

}
