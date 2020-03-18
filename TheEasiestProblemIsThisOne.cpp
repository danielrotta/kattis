#include <bits/stdc++.h>
using namespace std;
/**
 *
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 8.8.2019
 */
static int N = 0, p = 11;

int sum (int sumIn);
int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    while (N != 0) {
        while (sum(N) != sum(p * N)) {
            p++;
        }
        cout << p << "\n";
        cin >> N;
        p = 11;
    }
}

int sum (int sumIn) {
    int output = 0;
    while (sumIn != 0) {
        output += sumIn % 10;
        sumIn = sumIn / 10;
    }
    return output;
}
