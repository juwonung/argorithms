#include<iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j =0; j < n; j++){
            if(j < n-i-1) cout << " ";
            else cout << "*"; 
        }
        cout << "\n";
    }
    return 0;
}