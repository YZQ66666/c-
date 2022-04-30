/*
*FileName:   T7_25.cpp
*Author£º    Ziqi Yang
*E-mail :    3273241847@qq.com
*Date :      April 25th.2022
*College:    He Nan University
*Funtion:    Eight Queens : ÂùÁ¦·½·¨
*/
#include <iostream>
using namespace std;

int c[20], n = 8, cnt = 0;
void print() {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == c[i]) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;
}
void search(int r) {
    if (r == n) {
        print();
        ++cnt;
        return;
    }
    for (int i = 0; i < n; ++i) {
        c[r] = i;
        int ok = 1;
        for (int j = 0; j < r; ++j)
            if (c[r] == c[j] || r - j == c[r] - c[j] || r - j == c[j] - c[r]) {
                ok = 0;
                break;
            }
        if (ok) search(r + 1);
    }
}
int main() {
    search(0);
    cout << cnt << endl;
    return 0;
}