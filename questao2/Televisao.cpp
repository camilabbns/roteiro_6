#include "Televisao.h"
#include <iostream>
using namespace std;

Televisao::Televisao(int canal, int volume)
{
    if (canal< 0 || canal>100)
    {
        cout<<"canal invalido"<< endl;
    }
    if (volume<0 || volume>10)
    {
        cout<<"volume invalido"<<endl;
    }
}

void Televisao:: setCanal(int c)
{
    canal=c;
    }
int Televisao:: getCanal()
{
    return canal;
}

void Televisao::setVolume(int v)
{
    volume=v;
}
int Televisao::getVolume()
{
    return volume;
}

void Televisao::alteraCanal(int canal)
{
    int (opcao);

    cout<<"1 - aumentar canal"<<endl<< "2 - diminuir canal"<<endl;
    cin>>opcao;

    switch(opcao)
    {
    case 1:
        canal++;
        cout<< "canal atual: "<< canal<<endl;
        break;

    case 2:
        canal--;
        cout<<"canal atual: "<<canal<<endl;
        break;

    default:
        cout<< "invalido"<<endl;
        break;

    }
}
void Televisao::alteraVolume(int volume)
{
       int (opcao);

    cout<<"1 - aumentar volume"<<endl<< "2 - diminuir volume"<<endl;
    cin>>opcao;

    switch(opcao)
    {
    case 1:
        volume++;
        cout<< "volume atual: "<< volume<<endl;
        break;

    case 2:
        volume--;
        cout<<"volume atual: "<< volume<<endl;
        break;

    default:
        cout<< "invalido"<<endl;
        break;
}
}
