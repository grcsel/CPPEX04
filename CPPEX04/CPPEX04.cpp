#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
    double x;
    double y;
    double z;
    double volume = 0;
    double surface = 0;

    int i;

    cout << "幅を入力：";
    cin >> x;

    cout << "高さを入力：";
    cin >> y;

    cout << "奥行を入力：";
    cin >> z;

    getVolumeSurface(x, y, z, &volume, &surface);

    cout << "体積は" << volume << endl;
    cout << "表面積は" << surface << endl;

}