#include<stdio.h>
int main(){
    int a[100],i,j,n,temp=0;     
    printf("Enter number of elements of array to be sorted:");
    scanf("%d",&n);
    printf("Enter all the elements of array to be sorted:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=temp;
                a[i]=a[j];
                a[j]=temp;
            }
}
        }
    printf("Sorted array is:");
    for (i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
