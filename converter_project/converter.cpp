#include <iostream>
using namespace std;

double convertMetresToCal(double metres){
    return metres * 39.3700787;
}

double convertMetresToFeet(double metres){
    return metres * 3.2808399;
}

double convertMetresToYards(double metres){
    return metres * 1.0936133;
}

double convertMetresToMiles(double metres){
    return metres * 0.000621371192;
}
double convertMetresToSazen(double metres){
    return metres * 0.5468066491688539;
}
double convertMetresToSeaMiles(double metres){
    return metres * 0.0005399568;
}
double convertMetresToAngstrems(double metres){
    return metres * 10000000000.00;
}
double convertMetresToKable(double metres){
    return metres * 185.2;
}
double convertMetresToElbows(double metres){
    return metres * 1.6404199475065617;
}
double convertMetresToWiorst(double metres){
    return metres * 1066.8;
}


int main(){
    while(true){
        cout<<"KONWERTER METRÓW NA POSZCZEGÓLNE JEDNOSTKI: "<<endl;
        cout<<"METRES TO CONVERT: ";
        double metres;
        cin >> metres;
        cout<<"Cale: "<<convertMetresToCal(metres)<<endl;
        cout<<"Stopy: "<<convertMetresToFeet(metres)<<endl;
        cout<<"Jardy: "<<convertMetresToYards(metres)<<endl;
        cout<<"Sąznie: "<<convertMetresToSazen(metres)<<endl;
        cout<<"Mile Morskie: "<<convertMetresToSeaMiles(metres)<<endl;
        cout<<"Mile: "<<convertMetresToMiles(metres)<<endl;
        cout<<"Angstremy: "<<convertMetresToAngstrems(metres)<<endl;
        cout<<"Kable: "<<convertMetresToKable(metres)<<endl;
        cout<<"Łokcie: "<<convertMetresToElbows(metres)<<endl;
        cout<<"Wiorsty: "<<convertMetresToWiorst(metres)<<endl;

        cout<<"Naciśnij p by powtorzyc obliczenia, inny klawisz by zakonczyc....: "<<endl;
        char input;
        cin>>input;
        if (input != 'p' && input != 'P'){
            break;
        }

}
    





}