#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int a;
    scanf("%d", &a);
    int *x = (int *)malloc(sizeof(int)*a);
    int *y = (int *)malloc(sizeof(int)*a);
    for(int i=0; i<a ; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for(int i=0; i<a ; i++){
        cout<< x[i]+y[i]<<endl;
    }
    free(x);
    free(y);
    return 0;
}