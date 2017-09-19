#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        Televisao(int canal,int volume);

        void setCanal(int c);
        int getCanal();

        void setVolume(int v);
        int getVolume();

        void alteraCanal(int d);
        void alteraVolume(int e);

        void mostraVolume();
        void mostraCanal();

    private:
        int canal;
        int volume;
};

#endif // TELEVISAO_H
