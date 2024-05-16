# include<stdio.h>

void arrayfn(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The value of %d is %d\n",i+1,*(ptr+i));
    }
    
}

int main(){
    int arr[] = {264,68,3,73,27,86,89};
    arrayfn(arr,7);
}