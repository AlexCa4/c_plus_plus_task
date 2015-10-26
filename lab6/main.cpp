#include <iostream>
using namespace std;
int main()
{
    cout <<"\t\t\tДеление числа на разряды\n\n";
    int a;
    cout <<"Введите пятизначное число:" ;
    cin >>a;
    cout<<"\n";

    if (1<=a<=9999)
    {
        cout <<"Вы ввели неверное число. Число должно быть пятизначным!";
            }
    else {
        if (a>=10000)
        {
           cout <<"invalid!!!";
        }
        else{

            cout<<"number 1 ="<<(a/10000)<<"\n";
            cout<<"number 2 ="<<(a/1000)%10<<"\n";
            cout<<"number 3 ="<<(a/100)%10<<"\n";
            cout<<"number 4 ="<<(a/10)%10<<"\n";
            cout<<"number 5 ="<<a%10<<"\n";

            cout<<endl;
            return 0;

        }
    }

}
