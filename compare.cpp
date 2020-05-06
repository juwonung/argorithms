#include<iostream>

using namespace std;

int main() {
    int a, b;
    char c;
    scanf("%d %d", &a, &b);
    a>b ? c='>' : a==b ? c='==' : c='<';
    if( c =='>' || c =='<') cout << c;
    else cout << "==";
    return 0; 
}