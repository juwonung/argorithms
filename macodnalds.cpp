#include<iostream>

using namespace std;

int main() {
    int b1, b2, b3;
    int d1, d2;
    scanf("%d %d %d %d %d", &b1, &b2, &b3, &d1, &d2);
    int minB, minD;
    b1 < b2 ? (b1 < b3 ? minB = b1 : minB = b3) : (b2 < b3 ? minB = b2 : minB = b3);
    d1 < d2 ? minD = d1 : minD = d2;
    cout << minD + minB - 50 ;
    return 0;
}