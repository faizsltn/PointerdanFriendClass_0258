#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier
    int panjang, lebar;

    public:

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar :";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;
};

class Lingkaran
{
    public:
    int jarijari;

    void input()
    {
        cout << "Masukkan jari-jari : ";
        cin >> jarijari;
    }

    int luasLingkaran(int r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    PersegiPanjang objectPP;// mmebuat object
    Lingkaran ol;

    cout << "Masukkan panjang ; ";
    cin >> objectPP.panjang;
    cout << "Masukkan lebar : ";
    cin >> objectPP.lebar;
    cout << "Luas Persegi Panjang : " << objectPP.luasPp(objectPP.panjang, objectPP.lebar)
};