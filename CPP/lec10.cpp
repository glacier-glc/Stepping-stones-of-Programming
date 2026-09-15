#include <iostream>
using namespace std;
void lop(){
    int i=0;
    if (i<3){
        cout<<i;
        i++;
        lop();
    }}

int main(){
    // infinite printer
    // lop() ;
    // return 0;
}

    for (int i=0; i<5;i++){
        cout<<i<<endl;

    }
    int i=1;



    while (i<10){
        if (i==8){
            cout<<"oooooooooo";
            i++;
        }
        else{

            cout<<i;
            i++;
        }
        cout<<endl;
    }
    int c=1;

    do{
        cout<<c;
        c++;
    }while(c<5);

    

    int i;
    for (i=1; i<=10; i++)
    {
        cout<<6*i<<endl;
    }


    

    return 0;
}