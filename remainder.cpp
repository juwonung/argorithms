#include<iostream>
using namespace std;

int main() {
    int arr[10]={0};
    int count[42] = {0};
    int result=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        arr[i] %= 42; 
        count[arr[i]]++; 
    }
    for(int i=0; i<42; i++){
        if(count[i]!=0) result++;
    }
    cout << result;
    return 0;

}