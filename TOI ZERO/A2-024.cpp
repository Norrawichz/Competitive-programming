#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int length, point;
    int rabbit, monkey, frog;
    cin>> length>> point;
    cin>> rabbit>> monkey>> frog;
    int r_p = 0, m_p = 0, f_p = 0;

    if (length > 2000 || point > 500) return 0;

    int arrpoint[point], arrvalue[point];
    for (int i = 0; i<point; i++) {
        cin>> arrpoint[i]>> arrvalue[i];
        if (arrpoint[i] > length) return 0;
    }

    for (int i = 0; i<point; i++) {
        if (arrpoint[i] % rabbit == 0 || arrpoint[i] == 0) r_p += arrvalue[i];
        if (arrpoint[i] % monkey == 0 || arrpoint[i] == 0) m_p += arrvalue[i];
        if (arrpoint[i] % frog == 0 || arrpoint[i] == 0) f_p += arrvalue[i];
    }

    int mx = r_p;
    if (m_p > mx)
        mx = m_p;
    if (f_p > mx)
        mx = f_p;
    if (mx == r_p) cout<< "Rabbit "<< mx<< endl;
    if (mx == m_p) cout<< "Monkey "<< mx<< endl;
    if (mx == f_p) cout<< "Frog "<< mx<< endl;
    return 0;
}