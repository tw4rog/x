                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     #include <iostream>
#include <cstdlib>
using namespace std;
string PIN;
float x,y;
int wybor, wybranko;
int main()

{

    {

       cout << "Czesc Uzytkowniku" << endl;
       cout << "Podaj swoj PIN: ";
       cin >> PIN;
     if(PIN!="fiona")






    {
       cout << "Zly PIN";

    }
     else

       cout << "Dobry PIN"<< endl;
       cout << "-.-.-.-.-.-.-.-.-.-.-.-" <<endl;
       cout << "-.-.-.-.-MENU-.-.-.-.-.-"<< endl;
       cout << "1.Kalkulator"<< endl;
       cout << "2.FACEBOOK"<< endl;
       cout << "Wybierz"<<endl;
       cin  >> wybor;

       switch(wybor)

    {
       case 1:
       cout<< "Podaj 1 liczbe"<<endl;
       cin >> x;
       cout << "Podaj 2 liczbe"<<endl;
       cin >> y;

       cout<<endl;
       cout<<"---------"<<endl;
       cout<<"1.Dodawanie"<<endl;
       cout<<"2.Odejmowanie"<<endl;
       cout<<"3.Mnozenie"<<endl;
       cout<<"4.Dzielenie"<<endl;
       cout<<"5.Koniec programu"<<endl;
       cout<<"Wybierz"<<endl;
       break;
       default: cout<<"Nie ma takiej opcji";
    }
       cin>> wybranko;


       switch(wybranko)
        {
        case 1:
           cout<< "SUMA = "<<x+y;
        break;

        case 2:
           cout<<"ROZNICA = " <<x-y;         //tylko kalk
        break;

        case 3:
           cout<<"ILOCZYN = " <<x*y;
        break;

        case 4:
            cout<<"ILORAZ = " <<x/y;
         break;

        default: cout<<"Nie ma takiej opcji";
       }

       exit(0);


    }



     return 0;
}
