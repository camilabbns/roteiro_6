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

void Televisao:: setCanal(int c){
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

void Televisao::alteraCanal(int d)
{
    if(canal==0 && d== -1)
    {
        canal= 100;
    }
    if(canal==100 && d==1)
    {
        canal=0;
    }
    if(canal!=0 && canal!=100)
    {
        canal+=d;
    }
}
void Televisao::alteraVolume(int e)
{
     if(volume==0 && e== -1)
    {
        volume= 10;
    }
    if(volume==10 && e==1)
    {
        volume=0;
    }
    if(volume!=0 && volume!=10)
    {
        volume+=e;
    }
}
void Televisao:: mostraCanal()
{
cout<<"canal = "<< canal<<endl;
}

void Televisao:: mostraVolume(){

cout<< "volume = " <<volume<<endl;
}
