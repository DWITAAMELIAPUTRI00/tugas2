//Dibuat oleh Dwita Amelia Putri
//Tanggal dibuat 11 september 2024
#include <iostream>
#include <iomanip>

using namespace std;
 int main()
{
	int minpenjualan = 500000; //Penjualan minimum untuk mendapatkan komisi
	int komisi = 0, penjualan = 0;
	
	cout << "Total Penjualan salesman; "; cin >> penjualan;
	//komisi pertama
	if(penjualan >= minpenjualan) {
		komisi = (int)(minpenjualan = 10 / 100);
	}
	else {
		cout << "-tidak mendapatkan komisi karena penjualan kurang dari " << minpenjualan << "\n";
   }
   //Bonus komisi lebih dari 500.000
   if(penjualan > minpenjualan) {
   	int komisibonus = (int)((penjualan - minpenjualan) * 10 / 100);
   	komisi += komisibonus;
   	cout << "- komisi bonus 15% : " << komisibonus << "\n";
   }
   cout << "- total komisi : " << komisi;
   return 0;
}
 
    