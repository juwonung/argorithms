#include<iostream>

using namespace std;

int main() {
    int star;
    cin >> star;
    if(star==1) {
        printf("*");
        return 0;
    }
    int i,j;
    for(i=0; i<star*2;i++){
        if(i%2==0){
        for(j=0; j<star;j++){
            if(j%2==0) cout << "*";
            else cout<< " ";
        }
            cout<< "\n";
        }
        else{
            for(j=0; j<star; j++){
                if(j%2==1)cout<<"*";
                else cout << " ";
            }
            cout<< "\n";
        }
    }
    return 0;
}