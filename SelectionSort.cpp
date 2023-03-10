#include <stdio.h>
#include <math.h>
#include <conio.h>
void Nhap(int a[],int n){
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n){
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
 
// Hàm selection sort
void selectionSort(int a[], int n)
{
    int i, j, min_idx;
   
    for (i = 0; i < n-1; i++)
    {

 min_idx = i;
 for (j = i+1; j < n; j++)
     if (a[j] < a[min_idx])
 min_idx = j;
 

        swap(a[min_idx], a[i]);
    }
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n); 
}
int main()
{
	int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
	selectionSort(a,n);
}
	   