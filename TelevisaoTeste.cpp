#include "Televisao.h"
#include <iostream>
using namespace std;

int main()
{
    int v,d,e,c;
    cout << "Digite um canal e um volume" << endl;
    cin>>c >> v;

    Televisao t1= Televisao(1,3);

    t1.setCanal(c);
    t1.setVolume(v);

    cout << "Deseja alterar o volume?" << endl << " 1 para aumentar\n -1 para diminuir"<< endl ;
    cin >> e;

    t1.alteraVolume(t1.getVolume());

    cout << "Deseja alterar o canal?" << endl << " 1 para aumentar\n -1 para diminuir"<< endl ;
    cin >> d;
    t1.alteraCanal(t1.getCanal());

    t1.mostraCanal(t1.getCanal());
    t1.mostraVolume(t1.getVolume());
}
