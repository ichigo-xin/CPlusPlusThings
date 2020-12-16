#include <iostream>

using namespace std;

union myU
{
    struct
    {
        int a;
        int b;
        int c;
    } u;
    int d;

} A;

int main()
{
    A.u.a = 1;
    A.u.b = 2;
    A.u.c = 3;
    A.d = 0;

	printf("%d %d %d %d \n",A.u.a, A.u.b, A.u.c,A.d);
    
    system("pasue");
    return 0;
}