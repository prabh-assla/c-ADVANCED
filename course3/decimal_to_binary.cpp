#include <algorithm>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

string forDecimalPart(float decimalPart, int tillDecimalPlaces){
    cout << decimalPart << endl;
    string finalOutput = "";
    int step = 1;

    while(step <= tillDecimalPlaces){
        finalOutput.push_back(to_string(floor(decimalPart*2))[0]);
        decimalPart = (decimalPart*2) - (floor(decimalPart*2));
        ++step;
    }

    return finalOutput;
}

string forIntegerPart(int number){
    string finalOutput = "";

    while(number >= 1){
        finalOutput.push_back(to_string(number%2)[0]);
        number = number/2;
    }

    reverse(finalOutput.begin(), finalOutput.end());

    return finalOutput;
}

int main(){
    float number = 0;
    cin >> number;
    string result = forIntegerPart(floor(number)) + '.' + forDecimalPart(number - floor(number), 1000);
    cout << result << endl;

return 0;
}