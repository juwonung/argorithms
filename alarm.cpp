<<<<<<< HEAD
#include<iostream>

using namespace std;

int main() {
    int h, m;

    scanf("%d %d", &h, &m);
    if(m>=45) cout << h << " " << m-45;
    else {
        if(h<1) cout<< "23 " << m + 15;
        else cout << h-1 << " " << m+15; 
    }
    return 0;
=======
#include<iostream>

using namespace std;

int main() {
    int h, m;

    scanf("%d %d", &h, &m);
    if(m>=45) cout << h << " " << m-45;
    else {
        if(h<1) cout<< "23 " << m + 15;
        else cout << h-1 << " " << m+15; 
    }
    return 0;
>>>>>>> 3f0af950e9d8ca54c0edf24c0761567622e21877
}