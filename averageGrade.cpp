#include<iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int result;
    if(n1<40) n1=40;
    if(n2<40) n2=40;
    if(n3<40) n3=40;
    if(n4<40) n4=40;
    if(n5<40) n5=40;
    result = (n1 + n2 + n3 + n4 + n5) / 5;
    cout << result;
    return 0;
}