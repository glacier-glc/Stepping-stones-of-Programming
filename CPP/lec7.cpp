#include <iostream>
using namespace std;


int main(){
    float f = 2.32f;// without fthe value will be stored as double with the f the value will be stored as float1!!!

    cout<<f<<endl;
    long double ld= 5.6666666666666666666666l;
    cout<<ld;

    //by default a higher precision value so a decimal value is considered double.
    cout<<"The size of f is"<<sizeof(2.32)<<endl;
    cout<<"The size of f is"<<sizeof(2.32f)<<endl;


    //********************REFERENCE VARIABLES****************************
    float x = 255.56;
    int q = 56;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;


    //***************type casting******************
    cout<<"Value of x"<<float(x)<<endl;
    cout<<"Value of x"<<(int)x<<endl;
    cout<<"Value of x"<<float(q)<<endl;
    cout<<"Value of x"<<(int)q<<endl;





    return 0;
}