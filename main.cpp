#include <iostream>
#include <string>
#include <windows.h>
 using namespace std;

struct Street
{


};

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
    /*объявление структуры*/
    struct Street
    {
    string NameStrit[20];              /*объявление переменный в структуре*/
    int NumberStreet[20];
    string CountryStreet[20];
    };
Street street;
int Size,SizeRead;
    wcout<<L"Введите количество улиц(от 0 до 20)"<<endl;
    wcin>>Size;
    if(Size<0||Size>20)
    {
        wcout<<L"Ошибка компиляции"<<endl;
        return 1;
    }
    for (int i=0;i<Size;i++)            /*ввод всех данных вструктуру*/
        {
        wcout<<L"Введите название улицы.  Например:Ялтинская или ул.Ялтинская"<<endl;
        cin>>street.NameStrit[i];
        wcout<<L"Введите номер улицы.  Например:6"<<endl;
        cin>>street.NumberStreet[i];
        wcout<<L"Введите страну где находится эта улица.  Например:  Дания"<<endl;
        cin>>street.CountryStreet[i];
        }
    wcout<<L"Введите номер структуры которые нужно вывести от 0 до "<<Size-1<<endl;
    cin>>SizeRead;
    if(SizeRead<0||SizeRead>=Size)
    {
    wcout<<L"Такого номера структуры нет"<<endl;
    return 1;
    }
        if(SizeRead)
        {
        cout<<street.NameStrit[SizeRead];
        }

}
