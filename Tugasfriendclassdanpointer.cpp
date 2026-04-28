#include <iostream>
using namespace std;

class belahKetupat;

class layangLayang{
private:
    int d1,d2,s1,s2,luas,keliling;

public:
    void input(){
        cout<<"Diagonal 1 : "; cin>>d1;
        cout<<"Diagonal 2 : "; cin>>d2;
        cout<<"Sisi pendek : "; cin>>s1;
        cout<<"Sisi panjang : "; cin>>s2;
    }

    void hitung(){
        luas = 0.5*d1*d2;
        keliling = 2*(s1+s2);
    }

    void output(){
        cout<<"Luas = "<<luas<<endl;
        cout<<"Keliling = "<<keliling<<endl;
    }

    friend class belahKetupat;
};

class belahKetupat{
private:
    int d1,d2,s,luas,keliling;

public:
    void input(){
        cout<<"Diagonal 1 : "; cin>>d1;
        cout<<"Diagonal 2 : "; cin>>d2;
        cout<<"Sisi : "; cin>>s;
    }

    void hitung(){
        luas = 0.5*d1*d2;
        keliling = 4*s;
    }

    void output(){
        cout<<"Luas = "<<luas<<endl;
        cout<<"Keliling = "<<keliling<<endl;
    }
};

int main(){
    layangLayang L;
    belahKetupat B;

    cout<<"Input Layang-Layang\n";
    L.input();
    L.hitung();
    L.output();

    cout<<"\nInput Belah Ketupat\n";
    B.input();
    B.hitung();
    B.output();

    return 0;
}