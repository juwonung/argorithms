#include<iostream>
using namespace std;
int main() {
    int num;
    float arr[1000];
    float result=0;
    float max=0;
    cin >> num;
    for(int i =0; i<num; i++){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }
    for(int i=0; i<num ; i++){
        arr[i] = (arr[i]/max)*100.0;
        result += arr[i];
    }
    result = result / (float)num;
    cout << result;
    return 0;
}