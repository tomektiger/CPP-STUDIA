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

        cout<<"WARTOŚĆ STARTOWA: ";
        double metres_start;
        cin>>metres_start;

        cout<<"WARTOŚĆ KOŃCOWA: ";
        double metres_end;
        cin>>metres_end;

        cout<<"KROK METRÓW DO KONWERSJI: ";
        double metres_step;
        cin>>metres_step;

        printf("\nMetry\t    Cale\tStopy\t   Jardy        Mile\n");
        for(double metres=metres_start;metres<=metres_end;metres+=metres_step){
        double MetresToCal = convertMetresToCal(metres);
        double MetresToFeet = convertMetresToFeet(metres);
        double MetresToYards = convertMetresToYards(metres);
        double MetresToMiles = convertMetresToMiles(metres);
        printf("%3.0f  %15f  %10f  %10f  %10f\n",metres,MetresToCal,MetresToFeet,MetresToYards,MetresToMiles);
        }
        cout<<"\nPowtorzyc ? t/n : "<<endl;
        string user_input;
        cin>>user_input;
        if (user_input=="t"||user_input=="T"){
            continue;
        }
        else if (user_input=="n"||user_input=="N"){
            break;
        }
        else{
            break;
        }
    }
}