#include<stdio.h>
int main(){
	int i,j;
	int nhapso;
	printf("nhap 1 so: ");
	scanf("%d", &nhapso);
	for (i=2;i<=nhapso;i++){
		for(j=1;j<=10;j++){
			printf("\n%d",i*j);
		}
	}
	
}
