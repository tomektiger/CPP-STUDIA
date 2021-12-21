#include <iostream>
#include <random>
using namespace std;

int main(){
    cout<<"\nWITAJ W GRZE ZA DUŻO ZA MAŁO ! :) "<<endl;
    int wczytana, wylosowana;
    string decyzja;
    srand(time(0));
    wylosowana = rand()%100+1;
    while (decyzja != "n"&&wczytana<0 ||wczytana >0){
        cout <<"-------------------------------------------------------"<<endl;
        cout <<"Sprobuj zgadnac liczbe o ktorej pomyslalem >>>> ";
        cin>>wczytana;
        cout<<"";
        if (wczytana < 0 || wczytana >0){
            if (wczytana > wylosowana){
                cout<<"\nTrafiłeś za wysoko!!!!\n";
            }
            else if (wczytana < wylosowana){
                cout<<"\nTrafiłeś za nisko!!!\n";
            }
            else if (wczytana == wylosowana){
                cout<< "\nTrafiłeś dobrze !!!\n";
                cout<<"Chcesz zagrać ponownie ? t/n >> ";
                cin>>decyzja;
                if (decyzja == "t"){
                    wylosowana = rand()%100+1;
                    continue;
                }
                else if (decyzja == "n"){
                    cout<< "Dziękuję za wspolna gre ";
                    break;
                }
            }
        }
        else{
        cout<<"WPISZ POPRAWNA LCIZBE ";
        }
    }
}
