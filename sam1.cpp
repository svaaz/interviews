#include <iostream>
using namespace std;
int main()
{
cout << "Hello World\n";


int x = 5;
int& r = x; // r is an alias to x
int &s = x; // alternative syntax

cout <<x<<"\t"<<r<<"\t"<<s<<"\n";

r = 10; // assigns value to r/x

cout <<x<<"\t"<<r<<"\t"<<s;
}
