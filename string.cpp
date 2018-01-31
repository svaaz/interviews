#include <string>
#include <iostream>

using namespace std;
int main()
{
string h = "Hello";
string w (" World");

string a = h + w; // Hello World


cout<<h<<endl;
cout<<w<<endl;
cout<<a<<endl;

h += w; // Hello World

cout<<h<<endl;
}

