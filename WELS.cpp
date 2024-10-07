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

void pintar(){
	
		string memilih;
			cout << "=================================" << endl;
			cout << "   == WELLCOME TO SI PINTAR ==" << endl;
			cout << "=================================" << endl;
			cout << "" << endl;
			cout << "======================" << endl;
			cout << "== 1. KALKULATOR  ==" << endl;
			cout << "== 2. P. SUHU     ==" << endl;
			cout << "== 3. B. DATAR    ==" << endl;
			cout << "======================" << endl;
			cout << "" << endl;
			cout << "================================" << endl;
			cout << "== MAU COBA YANG MANA NIH ? "; cin >> memilih;
			
			system("cls");
			
					if (memilih == "1"){
			float a,b;
			string hasil;
			
			cout << "================================\n";
	        cout << "selamat datang di kalkulator\n";
	        cout << "================================\n";
	        cout << "" << endl;
	        cout << "=======================\n";
	        cout << "== GUNAKAN INI UNTUK ==\n";
	        cout << "=======================\n";
	        cout << "==  ( 1 ) TAMBAH     ==\n";
	        cout << "==  ( 2 ) KURANG     ==\n";
	        cout << "==  ( 3 ) PERKALIAN  ==\n";
	        cout << "==  ( 4 ) PEMBAGIAN  ==\n";
	        cout << "=======================\n";
	        cout << "== MASUKAN ANGKA AWAL   :"; cin >> a;
	        cout << "" << endl;
	        cout << "== MASUKAN ANGKA AKHIR  :"; cin >> b;
	        cout << "" << endl;
	        cout << "== PILIH OPERATOR : "; cin >> hasil;
	        
	        if (hasil == "1"){
	        	cout << "= " << a + b << endl;
			} else if (hasil == "2"){
				cout << "= " << a - b << endl;
			} else if (hasil == "3"){
				cout << "= " << a * b << endl;
			} else if (hasil == "4"){
				cout << "= " << a / b << endl;
			} else {
				cout << "PILIHAN ANDA SALAH" << endl;
			}
	}
	
	       else if (memilih == "2"){	
				int pil;
				float suhu, hasil;
				
				cout << "  == SELAMAT DATANG DI CONVERT SUHU ==" << endl;
	            cout << "========================================" << endl;
	            cout << "  == 1. CELCIUS TO FARENHEIT ==" << endl;
	            cout << "  == 2. CELCIUS TO KELVIN    ==" << endl;
	            cout << "  == 3. CELCIUS TO REAMUR    ==" << endl;
            	cout << "  == 4. FARENHEIT TO CELCIUS ==" << endl;
	            cout << "  == 5. FARENHEIT TO REAMUR  ==" << endl;
	            cout << "  == 6. REAMUR TO CELCIUS    ==" << endl;
	            cout << "  == 7. REAMUR TO FARENHEIT  ==" << endl;
	            cout << "========================================" << endl;
	            cout << "  == SILAHKAN DIPILIH : "; cin >> pil;
	        
	         switch (pil) {
        case 1:
            cout << "MASUKAN SUHU AWAL CELCIUS: "; 
            cin >> suhu;
            hasil = celciusKeFahrenheit(suhu);
            cout << "SUHU " << suhu << " CELCIUS = " << hasil << " FAHRENHEIT" << endl;
            break;

        case 2:
            cout << "MASUKAN SUHU AWAL CELCIUS: "; 
            cin >> suhu;
            hasil = celciusKeKelvin(suhu);
            cout << "SUHU " << suhu << " CELCIUS = " << hasil << " KELVIN" << endl;
            break;

        case 3:
            cout << "MASUKAN SUHU AWAL CELCIUS: "; 
            cin >> suhu;
            hasil = celciusKeReamur(suhu);
            cout << "SUHU " << suhu << " CELCIUS = " << hasil << " REAMUR" << endl;
            break;

        case 4:
            cout << "MASUKAN SUHU AWAL FAHRENHEIT: "; 
            cin >> suhu;
            hasil = fahrenheitKeCelcius(suhu);
            cout << "SUHU " << suhu << " FAHRENHEIT = " << hasil << " CELCIUS" << endl;
            break;

        case 5:
            cout << "MASUKAN SUHU AWAL FAHRENHEIT: "; 
            cin >> suhu;
            hasil = fahrenheitKeReamur(suhu);
            cout << "SUHU " << suhu << " FAHRENHEIT = " << hasil << " REAMUR" << endl;
            break;

        case 6:
            cout << "MASUKAN SUHU AWAL REAMUR: "; 
            cin >> suhu;
            hasil = reamurKeCelcius(suhu);
            cout << "SUHU " << suhu << " REAMUR = " << hasil << " CELCIUS" << endl;
            break;

        case 7:
            cout << "MASUKAN SUHU AWAL REAMUR: "; 
            cin >> suhu;
            hasil = reamurKeFahrenheit(suhu);
            cout << "SUHU " << suhu << " REAMUR = " << hasil << " FAHRENHEIT" << endl;
            break;

        default:
            cout << "PILIHAN ANDA TIDAK TERSEDIA" << endl;
            break;
        }
    } 

	    else if (memilih == "3"){
		
			int nomor;
		
			cout<<"========================="<<endl;
         	cout<<"  == 1. Luas Persegi =="<<endl;
	        cout<<"========================="<<endl;
	        cout<<""<<endl;
	        cout<<"      =================================="<<endl;
	        cout<<"         == 2. Luas Persegi Panjang =="<<endl;
	        cout<<"      =================================="<<endl;
	        cout<<""<<endl;
	        cout<<"==================================="<<endl;
	        cout<<"  == 3. Kel Segitiga Sama Sisi =="<<endl;
	        cout<<"==================================="<<endl;
	        cout<<""<<endl;
            cout<<"===================================="<<endl;
	        cout<<"  == pilih nomor berapa == "; cin>>nomor;
	        
	        switch (nomor){
	        	
	        	case 1:
	        		int s;
	        	
	        	cout << "MASUKAN SISI : "; cin >> s;
	        	cout << "====================================" << endl;
	        	cout << "Luas dari persegi tersebut adalah :  " << LuasPersegi(s);
	        	break;
	        	
	        	case 2:
	        		int p,l;
	        		
	        	cout << "MASUKAN PANJANG : "; cin >> p;
	        	cout << "MASUKAN LEBAR : "; cin >> l;
	        	cout << "====================================" << endl;
	        	cout << "Luas dari Persegi Panjang tersebut adalah : " << LuasPersegiPanjang(p,l);
	        	
	        	case 3:
	        		int sisi;
	        		
	        	cout << "MASUKAN SISI : "; cin >> sisi;
	        	cout << "====================================" << endl;
	        	cout << "Keliling dari segitiga tersebut adalah :  " << KelilingSegitiga(sisi);
	        	        		
			}
	        
		}        
		
	
}
 //======================================================================
int main() {
    string pil;

    cout << "\n \n ";
    cout << "==========================" << endl;
    cout << "  == SELAMAT DATANG ==" << endl;
    cout << "==========================" << endl;

    cout << "\t =======================" << endl;
    cout << "\t\t ============ \n\n" << endl;

    cout << "\t ===============" << endl;
    cout << "\t   == ENTER ==" << endl;
    cout << "\t ===============" << endl;
    cin.get();
    system("cls");

    cout << "====================================" << endl;
    cout << "   === SELAMAT DATANG DI SINI ===" << endl;
    cout << "====================================" << endl;
    cout << "== mau yang mana ? ==" << endl;
    cout << "=========================" << endl;
    cout << "== 1. KELOMPOK" << endl;
    cout << "== 2. SI PINTAR" << endl;
    cout << "== 3. KELUAR" << endl;
    cout << "=========================" << endl;
    cout << "== KETIK NOMOR : "; 
    cin >> pil;
    cout << "=========================" << endl;
    system("cls");

    if (pil == "1") {
        kel();  
    } 
    else if (pil == "2") {
        pintar();
    } 
    else {
        cout << "TERIMA KASIH" << endl;
    }

    return 0;
}
