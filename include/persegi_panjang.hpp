#ifndef __PERSEGI_PANJANG_HPP__
#define __PERSEGI_PANJANG_HPP__


namespace press{

void pressenter();

}
class persegipanjang{

private : 
    float xmin,xmax,ymin,ymax;

public  : 
    persegipanjang();
    persegipanjang(float tengah_x, float tengah_y, float panjang, float lebar);
    persegipanjang operator+ (persegipanjang const &);
    persegipanjang operator- (persegipanjang const &);
    void operator ++ ();
    void operator ++ (int);
    void operator -- ();
    void operator -- (int);
    float operator[](int index);
    bool operator== (persegipanjang const &) const;

    void printhasil ();
    
};

#endif