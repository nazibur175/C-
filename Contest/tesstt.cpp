#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// Function to check if O and P are inside circle A
bool isInsideA(int Ox, int Oy, int Px, int Py, int Ax, int Ay, double radius) {
    return distance(Ox, Oy, Ax, Ay) <= radius && distance(Px, Py, Ax, Ay) <= radius;
}

// Function to check if O and P are inside circle B
bool isInsideB(int Ox, int Oy, int Px, int Py, int Bx, int By, double radius) {
    return distance(Ox, Oy, Bx, By) <= radius && distance(Px, Py, Bx, By) <= radius;
}
//O is inside circle A and P is inside circle B and distance (A,B)<=2*radius
bool checkCircles(int Ox, int Oy, int Px, int Py, int Ax, int Ay, int Bx, int By, double radius) {
    double distanceAO = distance(Ax, Ay, Ox, Oy);
    double distanceBP = distance(Bx, By, Px, Py);
    double distanceAB = distance(Ax, Ay, Bx, By);

    // Check if O is inside circle A
    if (distanceAO <= radius) {
        // Check if P is inside circle B
        if (distanceBP <= radius) {
            // Check if distance(A, B) <= 2 * radius
            if (distanceAB <= 2 * radius) {
                return true;
            }
        }
    }
    
    return false;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int Px, Py, Ax, Ay, Bx, By;
        cin >> Px >> Py >> Ax >> Ay >> Bx >> By;

        double L = 0, R = 2e9;
        double ans = 0;

        while (R - L >= 1e-10) {
            double mid = (L + R) / 2.0;
            
            if (isInsideA(0,0,Px, Py, Ax, Ay, mid) || isInsideB(0, 0, Px, Py, Bx, By, mid) ||
            checkCircles(0,0,Px,Py,Ax,Ay,Bx,By,mid)) {
                ans = mid;
                R = mid;
            } else {
                L = mid;
            }
        }

        printf("%.10f\n", ans);
    }

    return 0;
}
