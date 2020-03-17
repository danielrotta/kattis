#include <bits/stdc++.h>
using namespace std;
/**
 *
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 12.16.19
 * 
 */
static string in;
static int scoreA = 0, scoreB = 0;

char winner();

int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> in;

    cout << winner();

    return 0;
}

char winner() {
    for (int i = 0; i < in.size(); i += 2) {
        if (in[i] == 'A') {
            scoreA += in[i + 1] - '0';
        } else {
            scoreB += in[i + 1] - '0';
        }
        if (scoreA == 10 && scoreB == 10) {
            //win by two mode
            for (int j = i + 2; j < in.size(); j += 2) {
                if (in[j] == 'A') {
                    scoreA += in[j + 1] - '0';
                } else {
                    scoreB += in[j + 1] - '0';
                }
                if (scoreA >= scoreB + 2) {
                    return 'A';
                }
                if (scoreB >= scoreA + 2) {
                    return 'B';
                }
            }
        }
        //before win by two mode
        if (scoreA >= 11) {
            return 'A';
        }
        if (scoreB >= 11) {
            return 'B';
        }
    }
    return 'Z';
}
