#include <iostream>
using namespace std;

//menghitung BMI
float Hitung_BMI(float berat, float tinggi){
    return berat/(tinggi*tinggi);
}

//status BMI
string Status_BMI(float BMI)