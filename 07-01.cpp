#include <iostream>
#include <algorithm>

using namespace std;

// 2つの整数値を小さい順に並び替える
// 関数 myswap をポインタを引数として作成
void myswap(int *a, int *b)
{
    if (*a > *b)
    {
        int z = *a;
        *a = *b;
        *b = z;
    }
}

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
    int b[5] = {5, 4, 3, 2, 1};
    
    for (int i = 0; i < 5; ++i)
    {
        // myswap を呼び出して a[i] と b[i] を並び替え
        myswap(&a[i], &b[i]);

        cout << a[i] << ", " << b[i] << endl;
    }
    return 0;
}
