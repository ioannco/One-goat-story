#include "FxLib.h"

void Titry();
void GoatLove();
void TitryEnd();


int main()
    {
    txCreateWindow (1200, 700);

    txSelectFont ("Comic Sans MS", -20, -30);
    txPlaySound ("msc.wav");
    Titry();
    txClear();
    txTextOut (500, 350, "��� ��� ���� ����...");
    txSleep (1000);
    txClear ();
    txTextOut (500, 350, "� ��� ��� ������");
    GoatLove ();
    txPlaySound ("msc.wav");
    txSleep (2000);
    txClear ();
    txTextOut (500, 350, "�� ����� ��������");
    txSleep (1000);
    txClear ();
    txPlaySound ("Tam.wav");
    txTextOut (575, 350, "��");
    FxDrawTv (TX_LIGHTGRAY, TX_BLACK, 500, 500);
    txSleep(5000);
    txPlaySound ("msc.wav");
    TitryEnd();



    return 0;

    }

void Titry()
    {
     int t = 0;

     while (t <= 100)
        {
        t++;

        FxDrawGoat (500, 350, 0, 0, 1, 0, 0, 5);

        txTextOut (-600+t*18, 200, "������� ������ ����� (�����: ���� �����������)");
        txSleep (70);


        txSetFillColor (TX_WHITE);
        txClear ();

        }


    }

void GoatLove()
    {
    int t = 0;

    txPlaySound ("kzl.wav");

    while (t <= 50)
        {
        t++;

        txTextOut (500, 350, "� ��� ��� ������");
        FxDrawGoat (500, 150, t%2*20, 0, 1, 0, 0, 0, "����");
        FxDrawMan (800, 150, t%2*20, t%2*20, 0);

        txSleep (100);

        txSetFillColor (TX_WHITE);
        txClear();
        }
    }

void TitryEnd()
    {
    int t = 0;
    while (t <= 100)
        {
        t++;

        txTextOut (-100+t*13, 200, "����� ������ �����");

        txSleep (50);

        txSetFillColor (TX_WHITE);
        txClear ();

        }
    }






