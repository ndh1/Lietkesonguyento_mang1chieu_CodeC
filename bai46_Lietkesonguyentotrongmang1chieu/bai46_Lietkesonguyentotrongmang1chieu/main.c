//
//  main.c
//  bai46_Lietkesonguyentotrongmang1chieu
//
//  Created by Nguyen Dinh Huong on 03/07/2021.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void nhap(int a[], int n){
    do {
        if (n<0){
            printf("nhap lai n = ");
        }
    } while (n<0);
    
    for (int i=0;i<n;i++){
        printf("Phan tu thu %d = ",i);
        scanf("%d",&a[i]);
    }
}
void xuat(int a[],int n){
    for (int i=0;i<n;i++){
        printf("\ta[%d] = %d ",i,a[i]);
    }
}

//Kiem tra snt
bool kiemtrasnt(int n){
    if (n<2){
        return false;
    }
    for (int i=2;i<=sqrt(n);i++){
        if (n%2==0){
            return false;
        }
    }
    return true;
    
}

//Dem so nguyen to
int demsnt(int a[],int n){
    int count = 0;
    for (int i=0;i<n;i++){
        if (kiemtrasnt(a[i])){
            count++;
        }
    }
    return count;
}

void insnt(int a[],int n){
    for (int i=0;i<n;i++){
        if (kiemtrasnt(a[i])){
            printf("\n%d",a[i]);
        }
    }
}

int main(){
    int n,a[50];
    
    printf("nhap n = ");
    scanf("%d",&n);
    nhap(a, n);
    xuat(a, n);
    kiemtrasnt(n);
    demsnt(a, n);
    insnt(a, n);
    return 0;
}
