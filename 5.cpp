// const kullanarak dairenin �evresini hesaplayan program
//const her zaman sabit kalmas�n� istedi�imiz de�erlerde kullan�l�r.
#include<iostream>
using namespace std;
int main()
{
    int yaricap;
    cout<<"Dairenin yaricapini giriniz"<<endl;
    cin>>yaricap;
    const float pi=3.14;//Pi say�s� her zaman sabit kalacak
    cout<<"Dairenin cevresi= "<<2*pi*yaricap<<endl;
    system("pause");
    return 0;
}
    
