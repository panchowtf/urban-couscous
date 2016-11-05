#include <iostream>
#include<string>

using namespace std;
void doSomething(float x, float y)
{
  cout <<"You been alive "<< x/y << "years for every letter in your name." << endl;  
}
int main()
{
    cout << "What's your name?" << endl;
    string user_name;
    cin >> user_name;
    cout << "How old are you?" << endl;
    int user_age;
    cin >> user_age;
    doSomething(user_age,user_name.length());
    return 0;
}
