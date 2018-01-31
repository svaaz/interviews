#include <string>
#include <iostream>

using namespace std;


int& byRef(int& i) { return i; }
int main()
{
int a = 10;
cout << byRef(a); // 10
}
