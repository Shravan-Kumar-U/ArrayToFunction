# include<stdio.h>

int rever(int ptr[],int n){
    for(int i=0;i<n/2;i++){
        int temp;
       temp= ptr[i];
       ptr[i]=ptr[n-i-1];
       ptr[n-i-1]=temp;
       

    }
    for(int i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    
}

int main(){
    int arr[]={24,46,89,95,32,81,56};
    rever(arr,7);
    

    
    return 0;
}

    

