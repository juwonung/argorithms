#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int num;
    cin >> num;
    char str[80];
    int cont=0;
    int result=0;

    for(int i=0;i<num; i++){
        cin >> str;
        for(int j=0; j<strlen(str);j++){
            if(str[j]=='O'){
                cont++;
                result += cont;
            }
            else{
                cont=0;
            }
        }
        cout << result <<"\n";
        cont =0;
        result = 0;
    }
    return 0;
}