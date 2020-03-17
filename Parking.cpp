#include <bits/stdc++.h>
using namespace std;
/**
 * ~/Documents/Kattis/Parking
 * 
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 12.16.19
 */
static int t, n, walk;
static int a[20];

int biggest();
int smallest();

int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //input:
    //t == test cases
    //n == number of stores Michael wantw to visit
    //a[] == positions on longstreet
    cin >> t;
    while (t > 0) {
        //case input
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calculate minimum walking distance
        //(biggest - smallest) * 2
        cout << (biggest() - smallest()) * 2 << "\n";

        t--;
    }
}

int biggest() {
    int output = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > output) {
            output = a[i];
        }
    }
    return output;
}

int smallest() {
    int output = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < output) {
            output = a[i];
        }
    }
    return output;
}