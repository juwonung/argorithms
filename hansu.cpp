#include<iostream>

using namespace std; 

bool hansu (int num){
    int n1, n2, n3;
    n3 = num%10;
    num = num/10;
    n2 = num%10;
    num = num/10;
    n1 = num%10;
    if((n1 -n2) == (n2 - n3)) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;
    if(n<100) {
        cout << n;
        return 0;
    }
    else if(n ==1000) {
        cout << "144";
        return 0;
    }
    else{
        int count = 99;
        for(int i=100; i <= n; i++){
            if(hansu(i)) {
                count++;
            }    
        }
        cout << count;
    }
    return 0;
}