#include <iostream>
using namespace std;
void myfunc();

int main()
{
    cout<<"In function main()"<<endl;
    myfunc();
    cout<<"Already in function main()"<< endl;
    return 0;


}

void myfunc()
{
    cout<<"a = 115"<< endl;
}
