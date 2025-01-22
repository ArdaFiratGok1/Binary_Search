#include <stdio.h>
int main(){

    int arr[] = {3,4,5,6,7,8,9,10,11,12}; //n =  10

    int num;

    int n=10;

    int bas = 0, son =n-1;

    int orta;

    int bulundu_mu =0;

    printf("Entry the which number's index u want the learn: ");
    scanf("%d",&num);

    while(son>=bas && bulundu_mu==0){
        orta = (bas + son) / 2 ;
        if (num==arr[orta]){
            bulundu_mu=1;
        }
        else if(num>arr[orta]){
            bas=orta+1;
        }
        else{
            son=orta-1;
        }
    }
    if(bulundu_mu==1){
    printf("the index of the number u entered: %d",orta);

    }
    else{
        printf("yok");
    }


}