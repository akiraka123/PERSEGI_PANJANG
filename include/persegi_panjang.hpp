#ifndef __PERSEGI_PANJANG_HPP__
#define __PERSEGI_PANJANG_HPP__
#include <iostream>


class persegipanjang{

private : 
    float xmin,xmax,ymin,ymax;

public  : 
    persegipanjang();
    persegipanjang(float tengah_x, float tengah_y, float panjang, float lebar);
    bool operator== (persegipanjang const &) const;
    persegipanjang operator+ (persegipanjang const &);
    persegipanjang operator- (persegipanjang const &);
    void operator ++ ();
    void operator -- ();
    void operator ++ (int);
    void operator -- (int);
    float operator[](int index);
    void printhasil ();
    
};

#endif