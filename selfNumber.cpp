#include<iostream>
using namespace std;
bool arr[10001];//전역으로 선언시 초기화
int selfNumber(int num){
   int selfNum = num;
   while(1){
       if(num == 0) break;
       selfNum += num %10;
       num = num/10;
   }
   return selfNum;
}

int main() { 
    
    int selfNum;
    for(int i=1; i< 10000; i++){
        selfNum = selfNumber(i);
        if(selfNum <=10001){
            arr[selfNum] = true;
        }
    }
    for(int i=1; i< 10001; i++){
        if(!arr[i]) printf("%d\n", i);
    }
    return 0;
}