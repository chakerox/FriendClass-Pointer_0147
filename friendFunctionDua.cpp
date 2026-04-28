#include<iostream>
using namespace std;

class pelajar;
class manusia{
    public:
    void showNilaiPelajar(pelajar &x);
};

class pelajar{
    private:
    int nilai;
    public:
    friend void manusia :: showNilaiPelajar(pelajar &x);
};

void manusia :: showNilaiPelajar(pelajar &x){
    cout << x.nilai;
};

int main(){
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}