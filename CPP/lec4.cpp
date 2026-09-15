#include<string>
#include<iostream>
using namespace std;
// variable name limit 1-255
// vaiable can start with letter or a underscore no spaces case sensitive
int x = 2;//global variable and to use this (::)
void ex(){
    // creates a function
    cout<<x;


}
int main(){
    int x = 3;
    string op ="HELLO";
    int a =4;
    cout<<a <<op;
    cout<<x;
    ex();
    return 0;


}