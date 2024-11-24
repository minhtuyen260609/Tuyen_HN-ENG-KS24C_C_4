#include<stdio.h>
int main(){
	int a, b, c;
	printf("moi nhap 3 so nguyen: "); 
	scanf("%d %d %d", &a, &b, &c);
	if( c > a && b > c ){
		printf("so thu ba nam giua hai khoang so thu nhat va so thu hai");
	}else{
		printf("so thu ba khong nam giua so thu nhat va so thu hai");
	} 
	return 0; 
} 
