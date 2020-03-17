#include <bits/stdc++.h>
using namespace std;
/**
 * ~/Documents/Kattis/OddManOut
 * 
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 12.16.19
 */
static int n, g, nIncriment = 1;
static int c[1000];

int lonelyGuy();

int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    while(n > 0) {
        //input
        cin >> g;
        for (int i = 0; i < g; i++) {
            cin >> c[i];
        }
        
        cout << "Case #" << nIncriment << ": "
                << lonelyGuy() << "\n";

        nIncriment++;
        n--;
    }
}

//for each position, find another match
//else return that number.
int lonelyGuy() {
    for (int i = 0; i < g; i++) {
            int code = c[i];
            for (int j = 0; j < g; j++) {
                if (code == c[j] && i != j) {
                    code = -1; //mark as not it
                }
            }
            if (code != -1) {
                return code;
            }
        }
    return -1;
}
