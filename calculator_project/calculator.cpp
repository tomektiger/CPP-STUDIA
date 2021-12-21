#include <iostream>
using namespace std;

int main(){
    cout <<"|-------------------------------|"<<endl;
    cout <<"| CALCULATOR BY TOMASZ KREMIEC  |"<<endl;
    cout <<"|-------------------------------|"<<endl;
    cout<<""<<endl;
    cout <<">>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<"<<endl;

    double result;
    double number;
    string user_input;

    while(true){
        cout<<"\nENTER FIRST NUMBER: ";
        cin>>number;

        string method;
        cout<<"TAKE THE OPERATOR: *, /, +, -  : ";
        cin>>method;

        cout<<"ENTER 2nd NUMBER: ";
        double second_number;
        cin>>second_number;

        if (number && second_number && method == "*" || method == "/" || method == "+"|| method == "+"|| method == "-"){
            if (method == "*"){
                result = number * second_number;
                cout <<"|-------------------------------|"<<endl;
                cout <<"   THE RESULT IS: "<<result<<endl;
                cout <<"|-------------------------------|"<<endl;
            }
            else if (method == "/"){
                result = number / second_number;
                cout <<"|-------------------------------|"<<endl;
                cout <<"   THE RESULT IS: "<<result<<endl;
                cout <<"|-------------------------------|"<<endl;
            }
            else if (method =="+"){
                result = number + second_number;
                cout <<"|-------------------------------|"<<endl;
                cout <<"   THE RESULT IS: "<<result<<endl;
                cout <<"|-------------------------------|"<<endl;
            }
            else if (method=="-"){
                result = number - second_number;
                cout <<"|-------------------------------|"<<endl;
                cout <<"   THE RESULT IS: "<<result<<endl;
                cout <<"|-------------------------------|"<<endl;
            }
        }
        else{
            cout <<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
            cout <<"\n!!!! COŚ POSZŁO NIE TAK !!!!!!! "<<endl;
            cout <<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n"<<endl;
            break;
        }

        cout <<"\nDo you want to calculate again ? y/n: ";
        cin >> user_input;
        if (user_input == "y"){
            continue;
        }
        else if (user_input == "n"){
            break;
        }
        else{
            cout<<"Pick correct answer";
        }
    }
}