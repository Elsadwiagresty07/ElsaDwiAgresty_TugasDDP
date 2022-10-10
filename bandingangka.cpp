#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int a;
    int b;
    cin>> a;
    cin>> b;
    
  if(1 < a && b > 100){
    cout << "INPUTAN SALAH" << endl; 
 }if(1 <= a && b <= 100 && a != b){
    cout << a << " != " << b << endl;
 }if(1 <= a && b <= 100 && a < b){
      cout << a << " < " << b << endl;
 }if(1 <= a && b <= 100 && a <= b){
    cout << a << " <= " << b;
 
 }

    return 0;


}
    
    
    // Program Membandingkan Dua Angka
// Elsa Dwi Agresty
// Ilkomp C
// 2217051058



