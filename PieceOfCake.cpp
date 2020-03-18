#include <bits/stdc++.h>
using namespace std;
/**
 * working dir:
 * cd ~/Documents/Kattis/PieceOfCake
 * 
 * @author Daniel Rotta (dlr0032@auburn.edu)
 * @version 12.08.19
 */
static int n, h, v;
static int pieceHeight, pieceWidth;

int main() {
    //improves reading and writing speeds.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //input:
    //n == length of sides of whole cake
    //h == distance from the top of cake to horizontal cut
    //v == the distance from the left edge of the vertical cut
    //each cake is 4 thick
    cin >> n;
    cin >> h;
    cin >> v;

    //find biggest piece edges
    //height
    if (h > n / 2) {
        pieceHeight = h;
    } else {
        pieceHeight = n - h;
    }
    //width
    if (v > n / 2) {
        pieceWidth = v;
    } else {
        pieceWidth = n - v;
    }

    cout << pieceHeight * pieceWidth * 4;
}
