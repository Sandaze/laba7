#include <iostream>
#include <string>
#include <windows.h>
#include <algorithm>

using namespace std;

//Переменные,Константы,Структуры
struct Street {
    string Name;
    int NumberStreet;
    string Country;
    string City;
};

int main()
{   //Включение русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
        int n=1;


    Street Streets[20];  //удалять одну из структур


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
        cin>>Streets[i].Name;
        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                      Введите номер "<<n<<L" Улицы                                     +"<<endl;
        wcout<<L"  +                            Пример: 1 или 43                                           +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        while (!(cin >> Streets[i].NumberStreet) || (cin.peek() != '\n'))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Error!" << endl;
        }
        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                            Введите в каком городе расположена "<<n<<L" улица           +"<<endl;
        wcout<<L"  +                                         Пример: Хельсинки                             +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        cin>>Streets[i].City;
        wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        wcout<<L" +                         Введите в какой стране находится "<<n<<L" улица               +"<<endl;
        wcout<<L"  +                            Пример: Дания                                              +"<<endl;
        wcout<<L"   + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
        cin>>Streets[i].Country;

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
    cout<<Streets[NumberStruct-1].Name<<endl;
    wcout<<L"Номер "<<NumberStruct<<L" Улицы =";
    cout<<Streets[NumberStruct-1].NumberStreet<<endl;
    wcout<<L"Страна "<<NumberStruct<<L" Улицы =";
    cout<<Streets[NumberStruct-1].Country<<endl;
    wcout<<L"Город "<<NumberStruct<<L" Улицы =";
    cout<<Streets[NumberStruct-1].City<<endl;

    }
    }while(ExitStruct!=0);
    return 0;
    wcout<<L".----------------------------------------------------------------------------------."<<endl;
    wcout<<L"|                                   Вышел                                          |"<<endl;
    wcout<<L".----------------------------------------------------------------------------------."<<endl;



    return 1;
}
