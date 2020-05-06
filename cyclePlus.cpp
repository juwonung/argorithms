#include<iostream>

using namespace std;


int main() {
    int count = 0;
    int num, fix;
    scanf("%d", &num);
    fix = num;
    int ten, one, result;
    while(1){
        ten = num/10;
        one = num%10;
        num = (ten+one)%10+one*10;
        count++;
        if(fix == num) break;
    }
    cout << count;
    return 0;
}
