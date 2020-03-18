#include <bits/stdc++.h>
using namespace std;
/**
 *
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 9.11.19
 */
static int n = 0, ivalue = 1, output = 0;
static stack <int> b;
int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    //convert to binary
    while (n != 0) {
        if (n % 2 == 0) {
            b.push(0);
        } else {
            b.push(1);
        }
        n = n / 2;
    }

    while (!b.empty()) {
        output += b.top() * ivalue;
        b.pop();
        ivalue *= 2;
    }
    cout << output;
}
