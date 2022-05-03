#include "include/persegi_panjang.hpp"
#include <iostream>

using namespace std;

// NAMA       : Mochamad Akiraka Harifanda
// NRP        : 5024211051
// Departemen : Teknik Komputer


void pressenter(){
    cout << "TEKAN ENTER UNTUK MELANJUTKAN PROGRAM";
    cin.ignore();
    system("CLS||CLEAR");
}

int main(){

system("CLS||CLEAR");
cout<< " OPERATOR OVERLOADING PERSEGI PANJANG By Akiraka\n\n";
float panjang,lebar,tx,ty;
cout<<"Masukkan persegi panjang 1 : \n\n";
cout<<"Panjang          : ";cin>>panjang;
cout<<"Lebar            : ";cin>>lebar;
cout<<"Titik tengah X   : ";cin>>tx;
cout<<"Titik tengah Y   : ";cin>>ty;
persegipanjang p1(tx,ty,panjang,lebar);

system("CLS||CLEAR");
cout<<"Masukkan persegi panjang 2 : \n\n";
cout<<"Panjang          : ";cin>>panjang;
cout<<"Lebar            : ";cin>>lebar;
cout<<"Titik tengah X   : ";cin>>tx;
cout<<"Titik tengah Y   : ";cin>>ty;
persegipanjang p2(tx,ty,panjang,lebar);

pressenter();
//persegipanjang p1(1,2,3,4),p2(2,1,4,4);
persegipanjang p3;

//melihat nilai mula mula persegipanjang 1 dan 2
cout << "persegi panjang 1 : \n";
p1.printhasil();
cout << "\npersegi panjang 2 : \n";
p2.printhasil();

pressenter();

// menggunakan Operator +
cout << "persegi panjang 1 : \n";
p1.printhasil();
cout << "\npersegi panjang 2 : \n";
p2.printhasil();
cout <<"Nilai hasil penjumlahan antara p1 dan p2 :\n";
p3 = p1 + p2;
if (p1==p2) p3.printhasil();

pressenter();

// menggunakan Operator -
cout << "persegi panjang 1 : \n";
p1.printhasil();
cout << "\npersegi panjang 2 : \n";
p2.printhasil();
cout << "Nilai hasil pengurangan antara p1 dan p2 :\n";
p3 = p1 - p2;
if (p1==p2) p3.printhasil();

pressenter();

// menggunakan Operator ++
cout << "persegi panjang 1 : \n";
p1.printhasil();
++p1;
cout << "persegi panjang 1 setelah dilakukan operator ++ : \n";
p1.printhasil();
--p1;

pressenter();

// menggunakan Operator --
cout << "persegi panjang 2 : \n";
p2.printhasil();
--p2;
cout << "persegi panjang 2 setelah dilakukan operator -- : \n";
p2.printhasil();
++p2;

pressenter();

// menggunakan Operator [] (membandingkan nilai xmin 1 dengan xmin 2)

cout<< "Membandingkan antara Xmin 1 dengan Xmin 2 dengan menggunakan operator[] \n";
cout<< "nilai x min 1 : "<<p1[1]<< "\nnilai x min 2 : "<< p2[1];
if (p1[1]>p2[1]) cout<< "\n\nnilai x min 1 lebih besar daripada x min 2\n\n";
else if (p2[1]>p1[1]) cout<< "\n\nnilai x min 2 lebih besar daripada x min 1\n\n";
else cout<< "\n\nnilai x min 1 dan x min 2 sama\n\n";

pressenter();

// menggunakan Operator == (membuktikan bahwa p1 dan p2 beririsan)
cout << "persegi panjang 1 : \n";
p1.printhasil();
cout << "\npersegi panjang 2 : \n";
p2.printhasil();

if (p1==p2) cout<< "Kedua Persegi panjang saling beririsan\n\n";
else cout<< "Kedua Persegi panjang tidak saling beririsan\n\n";
pressenter();

cout<< "PROGRAM SELESAI TERIMAKASIH";
cin.ignore();
system("CLS||CLEAR");


return 0;
}