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
void InterchangeSort(int a[], int n)
{
	for(int i=0;i<n-1;i++){
	    for(int j=1;j<n;j++){
	        if(a[i]>a[j])
	        {
        		int temp= a[i];
	            a[i]=a[j];
	            a[j]=temp;
        	}
	    }
	}
	printf("\n Mang sau sap xep: ");
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
	InterchangeSort(a,n);
}
	            