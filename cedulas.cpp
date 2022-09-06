#include <iostream>

using namespace std;

int main(){
    int cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, duas=0, um=0, N=0;

    cin >> N;
    cout << N << endl;
    
    while (N / 100 >= 1)
    {
        N = N -100;
        cem++;
    }
        while (N / 50 >= 1)
    {
        N = N -50;
        cinquenta++;
    }
        while (N / 20 >= 1)
    {
        N = N -20;
        vinte++;
    }
        while (N / 10 >= 1)
    {
        N = N -10;
        dez++;
    }
        while (N / 5 >= 1)
    {
        N = N -5;
        cinco++;
    }
        while (N / 2 >= 1)
    {
        N = N -2;
        duas++;
    }
        while (N / 1 >= 1)
    {
        N = N -1;
        um++;
    }
    

    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << vinte << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00" << endl;
    cout << duas << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;


    
    

    return 0;
}
