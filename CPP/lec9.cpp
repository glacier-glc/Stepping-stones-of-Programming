#include <iostream>
using namespace std;

int main(){
    //***********CONTROL STRUCTURES******* */
    //****sequence structure********** */
    // simple input - action 1 - action 2 - output

    // **********selection structure***********
    // input --- if true action 1 or if false action 2 ----- output

    // **********loop structure ***************
    // input ---- condition1  ---if true x------- contdition1 ----------if false ----X and exit


    int age;
    cout<<"Enter your age";

    cin>>age;


    if (age<18){
        cout<<"You are a minor";
    }
    else if(age==18){
        cout<<"You are adoloscent";
    }
    else{
        cout<<"You are a adult";
    }
    

    // ***************SWITCH ************
    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"you are 22";
        break;
    

    
    default:
        cout<<"nothing special";
        break;
    }
    
    return 0;
}
