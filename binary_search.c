#include <stdio.h>
int main(){
    
    int arr[] = {5, 2, 8, 7, 1, 3, 4, 6, 9, -5,11}; //n =  11
    int bas=0;
    int son=10;
    int orta;
    int aranan;
    int bulundu;

    int swap=0;
    int temp;
    int i=0;

    while(swap==0){
        swap=1;
        for(int j = 0;j<10-i;j++){
            if(arr[j]>arr[j+1]){
                swap=0;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        i++;

    }

    for(int k = 0 ; k<10;k++){
        printf("%d ",arr[k]);
    }
    

    printf("aranan deger: ");
    scanf("%d",&aranan);

    while(bulundu == 0 && son >= bas){
        orta=(bas+son)/2;
        printf("%d",orta);
        if(aranan == arr[orta]){
            bulundu = 1;
        }
        else if(aranan > arr[orta]){
            bas=orta-1;
        }
        else if(aranan < arr[orta]){
            son=orta+1;
        }
    }

    printf("aranan degerin indeksi: %d", orta);

    

}