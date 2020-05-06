#include<iostream>

using namespace std;

int main() {
    int length;
    cin >> length;
    int * arr = (int*)malloc(sizeof(int)*length);
    int max = -1000001;
    int min = 1000000;
    for(int i =0; i<length ; i++){
        cin >> arr[i];
        max = max < arr[i] ? arr[i] : max;
        min = min < arr[i] ? min : arr[i]; 
    }
    cout << min << " " << max;
    free(arr);
    return 0;
}