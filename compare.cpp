<<<<<<< HEAD
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
=======
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
>>>>>>> 3f0af950e9d8ca54c0edf24c0761567622e21877
}