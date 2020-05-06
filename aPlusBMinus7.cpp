#include<iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T ;
    int *A = (int *)malloc(sizeof(int)*T);
    int *B = (int *)malloc(sizeof(int)*T);
    for(int i=0; i<T ; i++){
        cin >> A[i] >>B[i];
    }
    for(int i =0; i<T ; i++){
        cout << "Case #" << i+1 << ": "<< A[i] << " + " << B[i] << " = " << A[i]+B[i] <<'\n';
    }
    return 0;
    
}