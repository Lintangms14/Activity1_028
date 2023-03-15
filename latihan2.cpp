#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a + b)/2;
}

string status(double r){
    if (r >= 60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r >= 60 && n >= 70){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >= 70){
        return "lulus";
    }else {
        return "gagal";
    }
}

int main(){
    double nilmath, nilbindo;

    cout << "masukkan nilai matematika : ";
    cin >> nilmath;
    cout << "masukkan nilai bahasa indonesia : ";
    cin >> nilbindo;

    cout << "nilai rata-rata nya : " << rerata(nilmath, nilbindo);
    cout << "\nStatus Kelulusanya : " << status(rerata(nilmath, nilbindo));
    cout << "\nStatus Kelulusanya : " << status2(rerata(nilmath, nilbindo), nilmath);
    cout << "\nStatus Kelulusanya : " << status3(rerata(nilmath, nilbindo), nilmath);
    
}