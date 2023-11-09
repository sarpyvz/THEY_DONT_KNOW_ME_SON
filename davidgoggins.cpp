#include <iostream>
#include <string>
using namespace std;

int main(){
    int david;
    string Boats;
    int HoursGrined;
    string Bitch_today;
    string Bad_felt;    
    
    while ( david >= 80 ){
        cout << "Have you carried boats and logs today ?"<<endl;
        cin >> Boats;
        if ( Boats == "yes" || Boats == "Yes"||Boats == "YES"){
            david += 40;
        }
        else{
            cout << "Are you being a bitch today" << endl;
        }
        cout << "How many hours have you grined today" << endl;
        cin >> HoursGrined;
        if ( HoursGrined >= 2){
            cout << "Keep Grinding " << endl;
            david += 40;
        }
        else{
            cout << "So  you wanna be mediocre, like everybody else" << endl;
        }
        cout << "Have you done anything that made you feel like shit today" << endl;
        cin >> Bad_felt;
        if ( Bad_felt == "yes" ||Bad_felt == "Yes" ||Bad_felt == "YES"){
            cout << "Go get some LA bu benim söz değil ama GOOD" << endl;
            david += 20;
        }
        else{
            cout << "GET BACK TO WORK GET BACK TO FUCKING WORK" << endl;
        }


    }
    cout << "THEY DO NOT KNOW YOU SON NICE BROTHER" << endl;
    


}
