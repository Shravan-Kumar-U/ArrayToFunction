# include<stdio.h>

int main(){
    int arr[6];
    for(int i=0;i<5;i++){
        printf("Please enter the value for the %d index : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}