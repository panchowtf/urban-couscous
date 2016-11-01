#include <iostream>
using namespace std;
//get input from user
int getInput()
{
    cout << "Pick a number :";
    int x;
    cin >> x;
    return x;
}

void compute(int x, int y)
{
    //compare both
   if (x < y)
   {
       cout << "the bigger number is:" << y <<endl;
       cout << "the smaller number is:" << x <<endl;
   }
   else
   {
       cout << "Swapping values"<<endl;
       int z;
       z=x;
       x=y;
       y=z;
       cout << "the bigger number is:" << y << endl;
       cout << "the smaller number is:" << x << endl;
   }
}

int main()
{
    int x = getInput();
    int y = getInput();
    compute(x,y);
}
