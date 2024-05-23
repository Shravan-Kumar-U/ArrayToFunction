# include<stdio.h>
 
    
int positive(int ptr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ptr[i]>0){
            count++;
        }
    }
    printf("The number of poisitive integers int the array are: %d",count);
}

int main(){
    int arr[]={24,46,-89,95,-32,81,-56};
    positive(arr,7);
    
    

    
    return 0;
}

    

