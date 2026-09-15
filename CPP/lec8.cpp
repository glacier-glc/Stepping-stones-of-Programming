#include <iostream>
#include <iomanip>


using namespace std;
int main(){
    //****************constants ****************
    const int A=3;
    // a=4;

    //**************manipulators************* */
    int a=22,b=3333,c=9564526;
    cout<<"the value of a without setw is"<<a<<endl;
    cout<<"the value of b without setw is"<<b<<endl;
    cout<<"the value of c without setw is"<<c<<endl;
    cout<<"the value of a is"<<setw(4)<<a<<endl;
    cout<<"the value of b is"<<setw(4)<<b<<endl;
    cout<<"the value of c is"<<setw(4)<<c<<endl;

    //**********operator precedence*********** */

    return 0;
 }
