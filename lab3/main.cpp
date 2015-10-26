#include <iostream>
#include <cstdlib>
using namespace std;

void mul(int x, int y);

int main()
{
    mul(10, 20);
    cout<<endl;
    mul(5, 6);
    cout<<endl;
    mul(8, 9);
    cout<< endl;

    return 0;
}
void mul(int x, int y)
{
    cout<< x * y<<"  ";
}
