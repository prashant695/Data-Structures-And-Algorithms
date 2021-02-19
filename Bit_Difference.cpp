#include <iostream>
using namespace std;

int countBitsFlip(int a, int b)
{
    int flg = 0, cnt = 0;
    while (max(a, b))
    {
        cnt += (1 & a) != (1 & b);
        a = a >> 1, b = b >> 1;
    }
    return cnt;
}
int main()
{
    cout << countBitsFlip(12, 20) << endl;
    return 0;
}