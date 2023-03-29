#include <iostream>
using namespace std;

double rerata(double a, double b){
	return (a+ b) / 2;
}

string status(double c) {
	if (c >= 70)
		return "Lulus";
	else
		return "gagal";
}

string status2(double r, double n) {
	if (r >= 70 && n >= 80)
		return "Lulus";
	else
		return "Gagal";
}

string status3(double r, double n, double m) {
	if (r >= 70 || n >= 80 && m >= 70)
		return "Lulus";
	else
		return "Gagal";
}

int main(){
	double nilM, nilB;

	cout << "Masukkan Nilai Matematika = ";
	cin >> nilM;
	cout << "Masukkan Nilai Bahasa Inggris = ";
	cin >> nilB;

	//rata = (nilM+nilB)/2;
	//rata = rerata(nilM,nilB);
	//st = status(rerata(nilM,nilB));
	//if (rata >= 70)
	//status = "Lulus";
	//else
	//status = "Gagal";

	//cout<< "Status Kelulusan : " << st;
	cout << "Status Kelulusan : " << status(rerata(nilM, nilB));
	cout << "\nStatus Kelulusan ke 2 : " << status(rerata(nilM, nilB));
	cout << "nStatus Kelululusan ke 3 : " << status(rerata(nilM, nilB));
	return 0;

}




