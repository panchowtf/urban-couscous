#include <iostream>
#include "constants.h"
using namespace std;

float getInput()
{
    cout << "how tall is the tower?";
    float t;
    cin >> t;
    return t;
}

float compute(float tt, int secs)
{
    return tt-(gravity * (secs * secs)/2);
}
void printResult(int secs, float result)
{
    if (result >= 0)
        cout << "At" << secs << "seconds the ball is at "<<result<<" meters"<<endl;
    else
        cout << "At" << secs << "seconds the ball is at the ground"<<endl;
}

void calandPrintRes(float tt, int secs)
{
    float x = compute(tt,secs);
    printResult(secs,x);
}

int main()
{
    float x = getInput();
    calandPrintRes(x, 0);
    calandPrintRes(x, 1);
    calandPrintRes(x, 2);
    calandPrintRes(x, 3);
    calandPrintRes(x, 4);
    calandPrintRes(x, 5);
    return 0;
}
