#include <bits/stdc++.h>
using namespace std;

void ON() {
    int v[6] = {3, 7, 4, 9, 10, 2};

    int l, r, ans = 0;
    cin >> l >> r;

    for (int i = l; i <= r; i++)
        ans += v[i];

    cout << ans << endl;
}

void O1() {
    int v[6] = {3, 7, 4, 9, 10, 2};

    // criando o vetor de soma acumulada
    int prefix_sum[6 + 1];

    // primeiro item sempre vai ser 0
    prefix_sum[0] = 0;
    for (int i = 0; i < 7; i++)
        prefix_sum[i + 1] = prefix_sum[i] + v[i];
    
    int l, r;
    cin >> l >> r;
    cout << prefix_sum[r + 1] - v[l] << endl;
}

int main() {
    // O1();
    ON();
}

