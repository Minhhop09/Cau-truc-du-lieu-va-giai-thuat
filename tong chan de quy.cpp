#include <stdio.h>
#include <conio.h>
long Tong(int n){
	if(n==0)
	return 0;
	if(n%2==0)
	return Tong(n-2)+n;
}
int main (){
	int n, S;
	printf("Nhap n:");
	scanf("%d", &n);
	S=Tong(n);
	printf("S=%d", S);
	getch(); 
	return 0;
}