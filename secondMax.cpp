#include<iostream>

using namespace std;

int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int max, sec;
    max = 0;
    sec = 0;
    for(int i =0; i< 3; i++){
        if(max <= a[i]) {
            sec = max;
            max = a[i] ;
        } 
        else if(sec < a[i] && a[i] < max)
            sec = a[i];
    }
    cout << sec;
    return 0;
}