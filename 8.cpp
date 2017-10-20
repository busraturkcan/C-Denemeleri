//Function Overloading
//Fonksiyonlarý aþýrý yükleme örneðidir.Ayný isimde birden fazla fonksiyonu,farklý parametrelerle tanýmlayabiliriz

#include<iostream>
using namespace std;

int topla(int,int);
double topla(double,double);
int main()
{
    cout<<"1.topla fonksiyonu: "<<topla(2,3)<<endl;
    cout<<"2.topla fonksiyonu: "<<topla(2.1,3.1)<<endl;
    system("Pause");
    return 0;
}
int topla(int x,int y)
{
    return x+y;
}
double topla(double x,double y)
{
       return x+y;
}
       
