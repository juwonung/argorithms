#include<iostream>

using namespace std;

int main() {
    int a;
    scanf("%d",&a);
    if(a%400 ==0) cout << "1";
    else if((a%4==0)&&(a%100!=0)) cout<<"1";
    else cout<<"0";
    return 0;
}