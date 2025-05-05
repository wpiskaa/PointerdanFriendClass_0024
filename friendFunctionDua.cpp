#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    public:
    void showNilauPelajar(pelajar &x);
    //void showNilaiPelajar2(pelajar &x);
};

class pelajar
{
    private:
    int nilai;

    public: pelajar(){nilai = 100;}
    friend void manusia::showNilauPelajar(pelajar &x);
}