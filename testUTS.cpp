#include <iostream>
using namespace std;

int main(){

int program, i, angka1, angka2;
char restart;
//create 'hasil' as a global varible
//so you dont need to recreate it for each case


cout << "Program apa yang ingin anda gunakan?\n1. Perkalian\n2. Pembagian\n3. Tes Kebugaran" << endl;
cin >> program;

switch (program)
{
case 1:
    do
    {
        int hasil = 0;
        cout << "Program perkalian" << endl;
        cout << "Masukkan angka pertama : ";
        cin >> angka1;
        cout << "Masukkan angka kedua : ";
        cin >> angka2;

        for (i = 1; i <= angka2; i++)
        {
            //use hasil += angka1;
            //shorter 
            hasil = hasil + angka1;
        }
        cout << angka1 << " x " << angka2 << " = " << hasil << endl;

        cout << "\nTekan y untuk mengulang program" << endl;
        cin >> restart;
        
    } while (restart == 'Y'|| restart == 'y');
    break;
case 2:
    do
    {
        int hasil = 0;
        cout << "Program pembagian" << endl;
        cout << "Masukkan angka pertama : ";
        cin >> angka1;
        cout << "Masukkan angka kedua : ";
        cin >> angka2;

        //use (if else)
        //so program can calculate if angka2 is bigger than angka1
        while (angka1 >= angka2)
        {
            angka1 -= angka2;
            hasil++;
        }
        
        cout << "hasilnya adalah " << hasil << endl;
        
        cout << "\nTekan y untuk mengulang program" << endl;
        cin >> restart;

    } while (restart == 'Y' || restart == 'y');  
    break;
case 3:
    int umur;
    char kelamin;
    string keterangan;
    float hasilTes1, hasilTes2, hasil, skor1, skor2;

    cout << "Masukkan Umur Anda : ";
    cin >> umur;
    cout << "Masukka Jenis Kelamin Anda (L/P) : ";
    cin >> kelamin;
    cout << "Hasil tes 1: ";
    cin >> hasilTes1;
    cout << "Hasil tes 2: ";
    cin >> hasilTes2;

    if (umur >= 20 && umur <= 30)
    {
        cout << "pass";
        if (kelamin == 'l' || kelamin == 'L')
        {
            //tes1
            if (hasilTes1 >= 38 && hasilTes1 <= 40)
            {
                skor1 = 3;
            } else if (hasilTes1 > 35 && hasilTes1 <= 37)
            {
                skor1 = 2;
            } else if (hasilTes1 <= 35)
            {
                skor1 = 1;
            }
            
            //tes2
            if (hasilTes2 >= 14 && hasilTes2 <= 16)
            {
                skor2 = 3;
            } else if (hasilTes2 > 11 && hasilTes2 <= 13)
            {
                skor2 = 2;
            } else if (hasilTes2 <= 11)
            {
                skor2 = 1;
            }
            
        } else if (kelamin == 'p' || kelamin == 'P')
        {
            //Test 1
                if (hasilTes1 >= 34 && hasilTes1 <= 36)
                {
                    skor1 = 3;
                } else if (hasilTes1 >= 32 && hasilTes1 < 34)
                {
                    skor1 = 2;
                } else if (hasilTes1 <= 31)
                {
                    skor1 = 1;
                }

                //Test 2
                if (hasilTes2 > 10 && hasilTes2 <= 13)
                {
                    skor2 =  3;
                } else if (hasilTes2 >= 8 && hasilTes2 <= 10)
                {
                    skor2 = 2;
                } else if (hasilTes2 < 8)
                {
                    skor2 = 1;
                }
        }
        
        
    } else if (umur >= 31 && umur <= 40)
    {
        if (kelamin == 'L' || kelamin == 'l')
            {
                //Test 1
                if (hasilTes1 > 35 && hasilTes1 <= 37)
                {
                    skor1 = 3;
                } else if (hasilTes1 > 32 && hasilTes1 <= 35)
                {
                    skor1 = 2;
                } else if (hasilTes1 >= 30 && hasilTes1 <= 32)
                {
                    skor1 = 1;
                }

                //Test 2
                if (hasilTes2 >= 28 && hasilTes2 <= 30)
                {
                    skor2 =  3;
                } else if (hasilTes2 > 25 && hasilTes2 <= 27)
                {
                    skor2 = 2;
                } else if (hasilTes2 < 25)
                {
                    skor2 = 1;
                }
                
            //Perempuan
            } else if (kelamin == 'P' || kelamin == 'p')
            {
                //Test 1
                if (hasilTes1 > 30 && hasilTes1 <= 32)
                {
                    skor1 = 3;
                } else if (hasilTes1 >= 28 && hasilTes1 <= 30)
                {
                    skor1 = 2;
                } else if (hasilTes1 < 28)
                {
                    skor1 = 1;
                }

                //Test 2
                if (hasilTes2 > 22 && hasilTes2 <= 24)
                {
                    skor2 =  3;
                } else if (hasilTes2 >= 20 && hasilTes2 <= 22)
                {
                    skor2 = 2;
                } else if (hasilTes2 < 20)
                {
                    skor2 = 1;
                }
            }
    }   
        
    hasil = (skor1+skor2)/2;

    if (hasil >= 2.5)
    {
        keterangan = "Sangat Bugar";
    } else if (hasil >= 2)
    {
        keterangan = "Cukup Bugar";
    } else if (hasil >= 1)
    {
        keterangan = "Kurang Bugar";
    }
        
    cout << "Umur Anda Adalah " << umur << endl;
    cout << "Jenis Kelamin Anda Adalah " << kelamin << endl;
    cout << "Tingkat Kebugaran Anda adalah : " << hasil << " " << keterangan << endl; 
    break;
}

}
