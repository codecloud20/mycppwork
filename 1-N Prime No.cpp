#include <iostream>
using namespace std;

int main()
{
    int num, i, flag,j;

    num = 20;
    j = 2;
    while (j < num)
    {
        flag = 0;

        for(i = 2; i <= j/2; ++i)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << j << " ";

        ++j;
    }

    return 0;
}
