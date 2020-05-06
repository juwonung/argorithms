<<<<<<< HEAD
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
=======
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
>>>>>>> 3f0af950e9d8ca54c0edf24c0761567622e21877
}