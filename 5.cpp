// const kullanarak dairenin çevresini hesaplayan program
//const her zaman sabit kalmasýný istediðimiz deðerlerde kullanýlýr.
#include<iostream>
using namespace std;
int main()
{
    int yaricap;
    cout<<"Dairenin yaricapini giriniz"<<endl;
    cin>>yaricap;
    const float pi=3.14;//Pi sayýsý her zaman sabit kalacak
    cout<<"Dairenin cevresi= "<<2*pi*yaricap<<endl;
    system("pause");
    return 0;
}
    
