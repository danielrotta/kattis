#include <bits/stdc++.h>
using namespace std;
/**
 *
 * ~/Documents/Kattis/Gerrymandering
 * 
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 12.18.19
 */
static int total = 0, totalWastedA = 0, totalWastedB = 0;
static int n, districts, d, votes;
static int a[100000000];
static int w[2];

double efficiencyGap (double volume, double wastedA, double wastedB);
void wastedVotes (int volume, int votesA, int votesB);

int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // needed to win: (V / 2) + 1

    //read in all data
    cin >> n;
    cin >> districts;
    for (int i = 1; i <= n; i++) {
        cin >> d;
        cin >> votes;
        total += votes;
        a[d - 1] += votes;
        cin >> votes;
        total += votes;
        a[d * districts] += votes;
    }

    //output
    for (int i = 1; i <= districts; i++) {
        //district winner
        if (a[i - 1] > a[i * districts]) {
            cout << "A ";
        } else {
            cout << "B ";
        }
        //wasted votes
        wastedVotes(a[i - 1] + a[i * districts], a[i - 1], a[i * districts]);
        totalWastedA += w[0];
        totalWastedB += w[1];
        cout << w[0] << " " << w[1] << "\n";
    }
    //efficiency gap output
    cout << efficiencyGap(total, totalWastedA, totalWastedB);
}

double efficiencyGap (double volume, double wastedA, double wastedB) {
    return abs(wastedA - wastedB) / volume;
}

//returns wasted votes a at position 0 and
//wasted votes of b at position 1.
void wastedVotes (int volume, int votesA, int votesB) {
    //if a does not win all are wasted
    if (votesA < ((volume / 2) + 1)) {
        w[0] = votesA;
    } else { //a does win, so all extra are wasted
        w[0] = votesA - ((volume / 2) + 1);
    }
    //if b does not win all are wasted
    if (votesB < ((volume / 2) + 1)) {
        w[1] = votesB;
    } else { //b does win, so all extra are wasted
        w[1] = votesB - ((volume / 2) + 1);
    }
}

