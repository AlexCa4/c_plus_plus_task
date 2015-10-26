#include <iostream>
using namespace std;

int main()
{
    int a, b,c;
   cout<<"Entered A = ";
   cin>>a;
   cout<<"Entered B = ";
   cin>>b;
   cout<<"Entered C = ";
   cin>>c;


    if(a<b)
    {
        if(b>c)
        {
            cout<<"B is bigerst of this numbers"<<endl;
        }
        else
            cout<<"B >a but b<c"<< endl;
    }
    else
    {if (a<c)
            cout<<"A >b but <c"<<endl;
        else
            cout<<"A >b but<c"<<endl;
}

    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;

}
