#include<iostream>
using namespace std;

int main() {
    int star;
    cin >> star;
    int i,j,k;
    for(i=0; i< star; i++) {
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(k=0; k< star*2-1-i*2 ; k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i < star; i++){
       for(j = star-i-1; j>0; j--){
            printf(" ");
        }
        for(k=0; k<i*2+1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}