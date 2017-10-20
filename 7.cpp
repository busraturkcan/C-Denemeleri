//

#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout<<"Pozitif bir sayi giriniz:";
    cin>>sayi;
    while(sayi<=0)
         cin>>sayi;
    cout<<"Girdiginiz son sayi:"<<sayi<<endl;
    system("Pause");
    return 0;
}
