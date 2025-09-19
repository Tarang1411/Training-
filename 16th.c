#include<stdio.h>
int main(){
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[6]={1,2,3,4,5,6};
    for(int i=0;i<3;i++){
        printf("%d ",a[i]); 
    }
    for(int j=0;j<3;j++){
        printf("%d ",b[j]);
    }
    for(int k=0;k>6;k++){
        printf("%d",c[k]);
    }
    return 0;
}