#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int W, H, M, N;
    cin>> W>> H>> M>> N;

    vector<int> arrX(M + 2), arrY(N + 2);
    arrX[0] = 0;
    arrX[1] = W;
    arrY[0] = 0;
    arrY[1] = H;
    for (int i = 2; i<M+2; i++) {
        cin>> arrX[i];
    }
    for (int i = 2; i<N+2; i++) {
        cin>> arrY[i];
    }
    sort(arrY.begin(), arrY.end(), greater<int>());
    sort(arrX.begin(), arrX.end());
    vector<int> area;

    for (int i = 0; i<N+1; i++) {
        for (int j = 0; j<M+1; j++) {
            int findarea = (arrY[i] - arrY[i+1]) * (arrX[j+1] - arrX[j]);
            area.push_back(findarea);
        }
    }

    int n = sizeof(area)/sizeof(area[0]);
    sort(area.begin(), area.end(), greater<int>());

    cout << area[0] << " " << area[1];
}