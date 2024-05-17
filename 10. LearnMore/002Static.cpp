#include <iostream>
#include <string>
#include <cstring>
class Sinhvien
{
private:
    char *ho, *ten;
    static int somon;
    float *diem;
    static float dtb;

public:
    Sinhvien(const char *hoSV, const char *tenSV, int numMon, float *diemMon)
    {
        ho = new char[strlen(hoSV) + 1];
        strcpy(ho, hoSV);

        ten = new char[strlen(tenSV) + 1];
        strcpy(ten, tenSV);
        somon = numMon;
        diem = new float[somon];
        for (int i = 0; i < somon; ++i)
        {
            diem[i] = diemMon[i];
        }

        float tong = 0;
        for (int i = 0; i < somon; i++)
        {
            tong = tong + diem[i];
        }

        dtb = tong / somon;
    }

    ~Sinhvien()
    {
        delete[] ho;
        delete[] ten;
        delete[] diem;
    }

    void xuat()
    {
        std::cout << "Ho: " << ho << "\n";
        std::cout << "Ten: " << ten << "\n";
        std::cout << "Diem tb:" << dtb << "\n";
    }

    static float getDTB()
    {
        return dtb;
    }
};

int Sinhvien::somon = 0;
float Sinhvien::dtb = 0;

int main()
{
    float diemMon[] = {8, 7, 9, 7, 8};
    Sinhvien *s1 = new Sinhvien("Tran", "Thanh", 5, diemMon);

    s1->xuat();
    delete s1;
}