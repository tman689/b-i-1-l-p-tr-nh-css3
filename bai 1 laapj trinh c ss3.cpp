#include<stdio.h>

int main(){
	char ten[50];
	
	printf("Nhap ten cua ban: ");
	scanf("%s[49]", ten);
	
	printf("xin chao %s!\n", ten);
	
	return 0;
}
