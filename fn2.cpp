#include <string>
#include <iostream>

using namespace std;


void change(int* i) 
{
 *i = 10; 
}

int main()
{
int x = 0; // value type
change(&x); // address is passed
cout << x; // 10
}
