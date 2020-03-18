#include <bits/stdc++.h>
using namespace std;
/**
 *
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 08.12.19
 */
string in;
int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> in;
    cout << in[0];
    for (int i = 1; i < in.length(); i++) {
        if (!(in[i] == in[i - 1])) {
            cout << in[i];
        }
    }
}