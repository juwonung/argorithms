<<<<<<< HEAD
#include<iostream>

using namespace std;

int sum(int n);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;
    int k = sum(num);
    cout << k <<endl;
    return 0;
}
int sum(int n) {
    if(n==1) return 1;
    else return (n + sum(n-1));    
=======
#include<iostream>

using namespace std;

int sum(int n);

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int num;
    cin >> num;
    int k = sum(num);
    cout << k <<endl;
    return 0;
}
int sum(int n) {
    if(n==1) return 1;
    else return (n + sum(n-1));    
>>>>>>> 3f0af950e9d8ca54c0edf24c0761567622e21877
}