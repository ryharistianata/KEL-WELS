#include <iostream>
#include <cstdlib>
using namespace std;

 //=============================================
 
float celciusKeFahrenheit(float ce) {
    return (9.0 / 5.0 * ce) + 32;
}

float celciusKeKelvin(float ce) {
    return ce + 273.15;
}

float celciusKeReamur(float ce) {
    return ce * (4.0 / 5.0);
}

float fahrenheitKeCelcius(float fa) {
    return (5.0 / 9.0) * (fa - 32);
}

float fahrenheitKeReamur(float fa) {
    return (4.0 / 9.0) * (fa - 32);
}

float reamurKeCelcius(float re) {
    return (5.0 / 4.0) * re;
}

float reamurKeFahrenheit(float re) {
    return (9.0 / 4.0 * re) + 32;
}

 //===========
double LuasPersegi(int sisi) {
    return sisi * sisi;
}

double LuasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

double KelilingSegitiga(int sisi) {
    return sisi * 3; 
}
  //===========
  
 // ==========================================================================

void kel() { 
    string mas;

    cout << "=====================" << endl;
    cout << "  == WELL == FK == " << endl;
    cout << "=====================" << endl;
    cout << "=============================" << endl;
    cout << "  == Haris        ==" << endl;
    cout << " == Rheal        ==" << endl;
    cout << "  == Muthia       ==" << endl;
    cout << "=============================" << endl;
    cout << "  == mau cek yang mana ? "; 
    cin >> mas;


    for (int i = 0; i < 20000; i++) {
        cout << " || LOADING ||";
    }
    
    system("cls");
    
    if (mas == "Haris") {
        cout << "=============================" << endl;
        cout << "   == Ruddy Haristianata==" << endl;
        cout << "=============================" << endl;
        cout << endl;
        cout << "\t\t====================" << endl;
        cout << "\t\t  == 2457051011 ==" << endl;
        cout << "\t\t====================" << endl;
        cout << endl;
        cout << "\t==================" << endl;
        cout << "\t  == ILKOMP B ==  " << endl;
        cout << "\t==================" << endl;
    } 
    else if (mas == "Rheal") {
        cout << "===============================" << endl;
        cout << "   == Rheal Iftiqar Rozak ==" << endl;
        cout << "===============================" << endl;
        cout << endl;
        cout << "\t\t====================" << endl;
        cout << "\t\t  == 2417051029 ==" << endl;
        cout << "\t\t====================" << endl;
        cout << endl;
        cout << "\t==================" << endl;
        cout << "\t  == ILKOMP B ==  " << endl;
        cout << "\t==================" << endl;
    } 
    else if (mas == "Muthia") {
        cout << "============================" << endl;
        cout << "   == Muthia Zhafira  ==" << endl;
        cout << "============================" << endl;
        cout << endl;
        cout << "\t\t====================" << endl;
        cout << "\t\t  == 2467051025 ==" << endl;
        cout << "\t\t====================" << endl;
        cout << endl;
        cout << "\t==================" << endl;
        cout << "\t  == ILKOMP B ==  " << endl;
        cout << "\t==================" << endl;
    } 
    else {
        cout << "===============================" << endl;
        cout << "   == DATA TIDAK TERSEDIA ==" << endl;
        cout << "===============================" << endl;
    }
}
