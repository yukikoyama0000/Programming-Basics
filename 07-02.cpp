#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// sincos関数を実装
void sincos(double &sv, double &cv, double radian)
{
    sv = sin(radian);
    cv = cos(radian);
}
    
int main(void)
{
    for (int angle = 0; angle <= 360; ++angle)
    {
        // ラディアンに変換（計算式を追加）
        double radian = angle * 3.1415 / 180.0;
        
        double sv = 0, cv = 0;
        sincos(sv, cv, radian);

        cout << sv << ", " << cv << endl;
    }
    return 0;
}
