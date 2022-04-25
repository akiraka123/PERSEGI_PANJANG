#include <iostream>
#include "include/persegi_panjang.hpp"

void persegipanjang::printhasil(){

    std::cout << "\ntitik tengah x      : " << (this->xmax + this->xmin)/2 + this->xmin;
    std::cout << "\ntitik tengah y      : " << (this->ymax + this->ymin)/2 + this->ymin;
    std::cout << "\npanjang (x)         : " << this->xmax + this->xmin; 
    std::cout << "\nlebar (y)           : " << this->ymin + this->ymax;
    std::cout << "\nnilai xmin          : " << this->xmin;
    std::cout << "\nnilai xmax          : " << this->xmax;
    std::cout << "\nnilai ymin          : " << this->ymin;
    std::cout << "\nnilai ymax          : " << this->ymax;
}

persegipanjang::persegipanjang(float tengah_x,float tengah_y, float panjang, float lebar) {
    
    this->xmin = tengah_x - (panjang/2);
    this->ymin = tengah_y - (lebar/2);
    this->xmax = tengah_x + (panjang/2);
    this->ymax = tengah_y + (lebar/2);

}
//untuk mengetahui apakah kedua persegi panjang beririsan atau tidak
bool persegipanjang::operator==(persegipanjang const &baru)const {

if (this->xmax > baru.xmin && this->xmin < baru.xmax && this->ymax > baru.ymin && this->ymin < baru.ymax)return true;
else return false;

}

//operator + menambah luasa persegi panjang dengan menggabungkan kedua luasan persegi panjang
persegipanjang persegipanjang::operator+(persegipanjang const &baru){

    persegipanjang temp(0,0,0,0);

    if (*this == baru) //syarat yang harus dipenuhi (pada line 22)
    {
        temp.xmin = std::min(this-> xmin,baru.xmin);
        temp.ymin = std::min(this-> ymin,baru.ymin);
        temp.xmax = std::max(this-> xmax,baru.xmax);
        temp.ymax = std::max(this-> ymax,baru.ymax);

    }else std::cout<<"kedua persegi panjang tidak beririsan";

        return temp;
}

//operator - mengambil irisan dari kedua buah persegipanjang
persegipanjang persegipanjang::operator-(persegipanjang const &baru){

    persegipanjang temp(0,0,0,0);

    if (*this == baru)
    {
        temp.xmin = std::max(this-> xmin,baru.xmin);
        temp.ymin = std::max(this-> ymin,baru.ymin);
        temp.xmax = std::min(this-> xmax,baru.xmax);
        temp.ymax = std::min(this-> ymax,baru.ymax);
        
        return temp;
    }
       return temp; 
}

//operator ++ membuat luasan menjadi 2 kali luasan semula
void persegipanjang::operator++(){

    float panjang = 0,lebar = 0,t_x = 0, t_y = 0;

   panjang  = this->xmax + this->xmin;
   lebar    = this->ymin + this->ymax;
    t_x     = panjang/2 + this->xmin;
    t_y     = lebar/2 + this->ymin;

    panjang*=2;
    lebar*=2;

    this->xmin = t_x - (panjang/2);
    this->ymin = t_y - (lebar/2);
    this->xmax = t_x + (panjang/2);
    this->ymax = t_y + (lebar/2);

}

//operator -- membuat luasan menjadi setengah dari luasan sebelumnya
void persegipanjang::operator--(){ 
    
    float panjang = 0,lebar = 0,t_x = 0, t_y = 0;

   panjang  = this->xmax + this->xmin;
   lebar    = this->ymin + this->ymax;
    t_x     = panjang/2 + this->xmin;
    t_y     = lebar/2 + this->ymin;

    panjang /=2;
    lebar   /=2;

    this->xmin = t_x - (panjang/2);
    this->ymin = t_y - (lebar/2);
    this->xmax = t_x + (panjang/2);
    this->ymax = t_y + (lebar/2);
}

//mengambil nilai salah satu properti kelas
float persegipanjang::operator[](int index){

    switch (index)
    {
    case 1:
        return this->xmin;
        break;

    case 2:
        return this->xmax;
        break;

    case 3:
        return this->ymin;
        break;

    case 4:
        return this->ymax;
        break;
    }
    return 0;
}