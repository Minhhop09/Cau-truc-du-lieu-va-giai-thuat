#include <math.h>
#include <conio.h>
#include <stdio.h>
#define MAX 1000

void Nhap(float a[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]:", i);
		scanf("%f", &a[i]);
	}
}
void Xuat(float a[], int n){
	for(int i=0;i<n;i++){
		printf("%8.3f", a[i]);
	}
}
float dem_duong(float a[], int n)
{

  int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            dem++;
        }
    }
    return dem;
  
  
  
}
int main(){
	float a[MAX];int n;
	printf("Nhap so phan tu:");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
    int dem = dem_duong(a, n);
    printf("\nSo phan tu duong trong mang: %d", dem);
    getch(); 
	return 0;
	
}