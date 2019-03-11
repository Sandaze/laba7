#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;

int main()
{   //Включение русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
        int n=1;

    //Переменные,Константы,Структуры
    struct Streets {
    string Name[20];
    int NumberStreet[20];
    string Country[20];
    string City[20];


    }Street;
    int Size,NumberStruct,ExitStruct;


    //шапка
    wcout<<L".+++++++++++++++++++++++++++."<<endl;
    wcout<<L"+    Лабораторная № 7       +"<<endl;
    wcout<<L"+                           +"<<endl;
    wcout<<L"+   Белкин АндрейПКС 17-1   +"<<endl;
    wcout<<L".+++++++++++++++++++++++++++."<<endl;
    wcout<<endl;

    wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
    wcout<<L" +                                                                                       +"<<endl;
    wcout<<L"  +                         Введите размер не больше 20                                   +"<<endl;
    wcout<<L"   +                                                                                       +"<<endl;;
    wcout<<L"    + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;;
    wcin>>Size;
    wcout<<L"                                                                                   |"<<endl;
    wcout<<L".----------------------------------------------------------------------------------."<<endl;
    if(Size<=0||Size>20)
     {
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
        wcout<<L"|                                 Ошибка                                           |"<<endl;
        wcout<<L".----------------------------------------------------------------------------------."<<endl;

        return 1;


     }
    for(int i=0;i<Size;i++)
     {

        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                             Введите название "<<n<<L" Улицы                           +"<<endl;
        wcout<<L"  +                               Пример: Окружная                                        +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        cin>>Street.Name[i];
        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                      Введите номер "<<n<<L" Улицы                                     +"<<endl;
        wcout<<L"  +                            Пример: 1 или 43                                           +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        while (!(cin >> Street.NumberStreet[i]) || (cin.peek() != '\n'))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Error!" << endl;
        }
        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                            Введите в каком городе расположена "<<n<<L"улица           +"<<endl;
        wcout<<L"  +                                         Пример: Хельсинки                             +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        cin>>Street.City[i];
        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                         Введите в какой стране находится "<<n<<L" улица               +"<<endl;
        wcout<<L"  +                            Пример: Дания                                              +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        cin>>Street.Country[i];

        n=n+1;
     }
    do{


    wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
    wcout<<L" +                       Введите номер структуры                                         +"<<endl;
    wcout<<L"  +                               Пример: 2                                               +"<<endl;
    wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
    cin>>NumberStruct;
    ExitStruct=NumberStruct;
    //--NumberStruct;
    if(NumberStruct>0){
    wcout<<L"Название "<<NumberStruct<<L" Улицы =";
    cout<<Street.Name[NumberStruct-1]<<endl;
    wcout<<L"Номер "<<NumberStruct<<L" Улицы =";
    cout<<Street.NumberStreet[NumberStruct-1]<<endl;
    wcout<<L"Страна "<<NumberStruct<<L" Улицы =";
    cout<<Street.Country[NumberStruct-1]<<endl;
    wcout<<L"Город "<<NumberStruct<<L" Улицы =";
    cout<<Street.City[NumberStruct-1]<<endl;

    }
    }while(ExitStruct!=0);
    return 0;
    wcout<<L".----------------------------------------------------------------------------------."<<endl;
    wcout<<L"|                                   Вышел                                          |"<<endl;
    wcout<<L".----------------------------------------------------------------------------------."<<endl;



    return 1;
}
