#include <iostream>
#include<vector>
#include<string>
#include<ctime>
#include <cstdio>
using namespace std;

int N;
int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Варианты ответа:да = 1 или нет = 2." << endl;
    cout << "Вы Президент. " << endl;

    cout << "____________________________" << endl;
    cout << "ПРОЛОГ" << endl;
    cout << "В стране к власте пришёл новый президент " << endl;
    cout << "Налоги возросли так сильно, что стало невозможно купить еды." << endl;
    cout << "Оружие и доспехи  снимает % смертности солдат." << endl;
    cout << "Враг будет нападать каждый месяц в течении года." << endl;
    cout << "УДАЧИ." << endl;

    system("pause");
    int A = 0;
        cin >> A;
    if (A == 1) {
    }
    else {
        exit(0);
    }

    int M = 10000;
    int a = 100;
    int O = 0;
    int D = 0;
    int amountValue = 100;

    cout << "___________________" << endl;
    cout << "Начальные имущество" << endl;
    cout << "$ =" << M << endl;
    cout << "Армия =" << a << endl;
    cout << "Оружые =" << O << endl;
    cout << "Доспехи =" << D << endl;
    system("pause");
    system("cls");


    cout << "Mесяц 1" << endl;
    cout << "___________________" << endl;
    cout << "Ресурсы" << endl;
    cout << "$ =" << M << endl;
    cout << "Армия =" << a << endl;
    cout << "Оружые =" << O << endl;
    cout << "Доспехи =" << D << endl;
    cout << "Нам предлогают купить оружие 1 и заплатить 1000." << endl;
    cout << "Нам предлогают купить доспехи 1 и заплатить 1000." << endl;
    cout << "Укажите количество." << endl;
    int F;
    int K;
    cin >> K;


    if (K > 10) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - K * 1000;
        O = O + K;
    }


    cin >> F;
    if (F > 10) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - F * 1000;
        D = D + F;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }

    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }


    system("pause");
    system("cls");


    cout << "Mесяц 2" << endl;


    if (O / O == D / D) {

        int count = rand() % amountValue - 10;
        a = a - count;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int count = rand() % amountValue;
        a = a - count;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;


    }


    cout << "Натренировать солдат? 1солдат=10$" << endl;
    int E;
    cin >> E;
    if (E * 10 > M) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - E * 10;
        a = a + E;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");



    cout << "Mесяц 3" << endl;
    if (O / O == D / D) {

        int pol = rand() % amountValue - 10;
        a = a - pol;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int pol = rand() % amountValue;
        a = a - pol;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    cout << "Открыть бизнес за 1500$ каждый месяц будет приность 1000$." << endl;
    int L;
    cin >> L;
    if (M > 1500) {

        int H = 1000;

        if (L == 1) {
            M = M - 1500;
        }
        if (M < -5000) {
            cout << "Вы проиграли." << endl;
            system("pause");
            exit(0);
        }

        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");



    cout << "Mесяц 4" << endl;

    if (L == 1) {
        M = M + 1000;
    }


    if (O / O == D / D) {

        int dgdf = rand() % amountValue - 10;
        a = a - dgdf;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int dgdf = rand() % amountValue;
        a = a - dgdf;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;


    }



    cout << "Натренировать солдат? 1солдат=50$" << endl;
    int B;
    cin >> B;
    if (B * 50 > M) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - B * 50;
        a = a + B;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }


    system("pause");
    system("cls");



    cout << "Mесяц 5" << endl;

    if (L == 1) {

        M = M + 1000;
    }


    if (O / O == D / D) {

        int gfhfdgh = rand() % amountValue - 10;
        a = a - gfhfdgh;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int gfhfdgh = rand() % amountValue;
        a = a - gfhfdgh;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;


    }

    cout << "Вы желаете улучшить заработок + 2500$ за 4000$" << endl;
    int P;
    cin >> P;


    if (M > 4000) {
        cout << "Опирацыя успешна." << endl;
        if (P == 1) {
            M = M - 4000;
            cout << "___________________" << endl;
            cout << "Ресурсы" << endl;
            cout << "$ =" << M << endl;
            cout << "Армия =" << a << endl;
            cout << "Оружые =" << O << endl;
            cout << "Доспехи =" << D << endl;
        }
    }
    else {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }


    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");


    cout << "Mесяц 6." << endl;

    if (L == 1) {
        M = M + 1000;
    }
    if (P == 1) {
        M = M + 2500;
    }


    if (O / O == D / D) {

        int hucxjksbhd = rand() % amountValue - 10;
        a = a - hucxjksbhd;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int hucxjksbhd = rand() % amountValue;
        a = a - hucxjksbhd;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;


    }


    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    cout << "Докупить армию?1солдат=25" << endl;
    int X;
    cin >> X;
    if (X * 25 > M) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - X * 25;
        a = a + X;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }

    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");



    cout << "Mесяц 7." << endl; 

    if (L == 1) {
        M = M + 1000;
    }
    if (P == 1) {
        M = M + 2500;
    }
    if (O / O == D / D) {

        int asasd = rand() % amountValue - 10;
        a = a - asasd;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int asasd = rand() % amountValue;
        a = a - asasd;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;


    }


    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    cout << "Жители страны напуганы сильной атакой врага, успокоить их? стоимость = 1000$ и Армия = 50. " << endl;


    int V;
    cin >> V;
    if (M >= 1000, a >= 50) {

        if (V == 1) {
            M = M - 1000;
            a = a - 50;
        }
        else {
            cout << "Жители испуганлись ещё больше" << endl;
        }
    }

    cout << "___________________" << endl;
    cout << "Ресурсы" << endl;
    cout << "$ =" << M << endl;
    cout << "Армия =" << a << endl;
    cout << "Оружые =" << O << endl;
    cout << "Доспехи =" << D << endl;

    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");



    cout << "Mесяц 8." << endl;

    if (L == 1) {
        M = M + 1000;
    }
    if (P == 1) {
        M = M + 2500;
    }
    if (O / O == D / D) {

        int dsffwe = rand() % amountValue - 10;
        a = a - dsffwe;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int dsffwe = rand() % amountValue;
        a = a - dsffwe;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;


    }


    cout << "Нам предлогают купить оружие 1 и заплатить 1500." << endl;
    cout << "Нам предлогают купить доспехи 1 и заплатить 1500." << endl;
    cout << "Укажите количество." << endl;
    int G;
    int Q;
    cin >> G;


    if (G > M) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - G * 1500;
        O = O + G;
    }


    cin >> Q;
    if (Q > M) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - Q * 1500;
        D = D + Q;
    }
    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }

    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");


    cout << "Mесяц 9." << endl;


    if (L == 1) {
        M = M + 1000;

        if (P == 1) {
            M = M + 2500;
        }
        if (O / O == D / D) {

            int vdgd = rand() % amountValue - 5;
            a = a - vdgd;
            cout << "___________________" << endl;
            cout << "Ресурсы" << endl;
            cout << "$ =" << M << endl;
            cout << "Армия =" << a << endl;
            cout << "Оружые =" << O << endl;
            cout << "Доспехи =" << D << endl;
        }
        else {
            int vdgd = rand() % amountValue;
            a = a - vdgd;
            cout << "___________________" << endl;
            cout << "Ресурсы" << endl;
            cout << "$ =" << M << endl;
            cout << "Армия =" << a << endl;
            cout << "Оружые =" << O << endl;
            cout << "Доспехи =" << D << endl;
        }


        cout << "Ремонтировать дороги? Цена = 5000$. " << endl;
        int U;
        cin >> U;

        if (U == 1) {
            M = M - 5000;
            cout << "___________________" << endl;
            cout << "Ресурсы" << endl;
            cout << "$ =" << M << endl;
            cout << "Армия =" << a << endl;
            cout << "Оружые =" << O << endl;
            cout << "Доспехи =" << D << endl;
        }
    }
    else {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }


    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");


    cout << "Mесяц 10." << endl;


    if (L == 1) {
        M + 1000;
    }
    if (P == 1) {
        M + 2500;
    }

    if (N == 1) {
        M + 5000;
    }
    if (F / F == K / K) {

        int vdgd = rand() % amountValue + 65;
        a = a - vdgd;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int vdgd = rand() % amountValue;
        a = a - vdgd;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }




    cout << "Супер зароботок 10000$." << endl;
    int S;
    int N = 5000;
    cin >> N;
    if (N == 1) {
        if (M > 10000) {
            M - 10000;
        }
    }
    else {
        cout << "ОК" << endl;
    }


    cout << "___________________" << endl;
    cout << "Ресурсы" << endl;
    cout << "$ =" << M << endl;
    cout << "Армия =" << a << endl;
    cout << "Оружые =" << O << endl;
    cout << "Доспехи =" << D << endl;


    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");

    cout << "Mесяц 11." << endl;


    if (L == 1) {
        M + 1000;
    }
    if (P == 1) {
        M + 2500;
    }

    if (N == 1) {
        M + 5000;
    }


    if (F / F == K / K) {

        int vdgdh = rand() % amountValue + 45;
        a = a - vdgdh;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }
    else {
        int vdgdh = rand() % amountValue;
        a = a - vdgdh;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }


    cout << "Натренировать солдат? 1солдат=100$" << endl;
    int KOL;
    cin >> KOL;
    if (KOL * 100 > M) {
        cout << "Вам отказано." << endl;
        cout << "Недостаточно средств." << endl;
    }
    else {
        M = M - KOL * 100;
        a = a + KOL;
        cout << "___________________" << endl;
        cout << "Ресурсы" << endl;
        cout << "$ =" << M << endl;
        cout << "Армия =" << a << endl;
        cout << "Оружые =" << O << endl;
        cout << "Доспехи =" << D << endl;
    }


    if (M < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    if (a < 0) {
        cout << "Вы проиграли." << endl;
        system("pause");
        exit(0);
    }
    system("pause");
    system("cls");


    cout << "Mесяц 12." << endl;


    if (L == 1) {
        M + 1000;
    }
    if (P == 1) {
        M + 2500;
    }

    if (N == 1) {
        M + 5000;
    }


    cout << "Заключить мир за 20000$." << endl;
    cout << "Если вы откажитесь вы потоеряете 1500 воинов.";
    int W;
    cin >> W;

    if (W == 1) {
        if (M > 20000) {
            M - 20000;
        }
        else {
            a - 1500;
            if (a < 0) {
                cout << "Вы проиграли!!!" << endl;
                system("pause");
                exit(0);
            }
        }
    }

    if (W == 2) {
        if (a > 1500) {
            a - 1500;
        }
        else {
            if (a < 0) {
                cout << "Вы проиграли!!!" << endl;
                system("pause");
                exit(0);
            }
        }

        if (M < 0) {
            cout << "Вы проиграли!!!" << endl;
            system("pause");
            exit(0);
        }


        system("pause");
    }
}



