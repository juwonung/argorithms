/*#include<iostream>
#include<string>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    string str = to_string(a*b*c);
    int count[10]={0,};
    for(int i=0; i<10;i++){
        count[str[i]-48]++;
    }
    for(int i=0; i<10; i++){
        cout << count[i]] << "\n";
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main() {
    int a,b,c, result;
    cin >> a >> b >> c;
    result = a*b*c;
    int count[10]={0,};
    while(result !=0){
        count[result % 10] +=1;
        result /= 10;
    }
    for(int i=0; i<10; i++){
        cout << count[i] << "\n";
    }
    return 0;
}