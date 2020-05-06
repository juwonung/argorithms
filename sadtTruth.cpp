#include<iostream>
using namespace std;
int main() {
    int numTimes, numPerson;
    float result=0;
    float average = 0;
    int sum = 0;
    int count=0;
    int points[1000];
    cin >> numTimes;
    for(int i=0; i<numTimes ;i++){
        cin >> numPerson;
        for(int j=0; j<numPerson ; j++){
            cin >> points[j];
            sum += points[j];
        }
        average = sum / (float)numPerson;
        for(int j=0; j<numPerson ; j++){
            if(points[j] > average) count++;
        }
        result = count / (float)numPerson * 100.0;
        printf("%.3f%%", result);
        printf("\n"); 
        result =0;
        average =0;
        sum =0;
        count =0;
    }
    return 0;
}