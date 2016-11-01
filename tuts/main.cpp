#include <iostream>
#include "constants.h"
using namespace std;

float getInput()
{
    cout << "Pick a number :";
    float t;
    cin >> t;
    return t;
}

void compute(int t)
{
    if (t % 2==0)
        cout << "the number is even"<<  endl;
    else
        cout << "the number is odd" << endl;
}

int main()
{
    int n;
    n = getInput();
    compute(n);
    return 0;
}
