#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool isInsideA(int Ox, int Oy, int Px, int Py, int Ax, int Ay, double radius) {
    return distance(Ox, Oy, Ax, Ay) <= radius && distance(Px, Py, Ax, Ay) <= radius;
}


bool isInsideB(int Ox, int Oy, int Px, int Py, int Bx, int By, double radius) {
    return distance(Ox, Oy, Bx, By) <= radius && distance(Px, Py, Bx, By) <= radius;
}


bool checkCircles(int Ox, int Oy, int Px, int Py, int Ax, int Ay, int Bx, int By, double radius) {
    double AO = distance(Ax, Ay, Ox, Oy);
    double BP = distance(Bx, By, Px, Py);
    double AB = distance(Ax, Ay, Bx, By);

    if (AO <= radius) {
        if (BP <= radius) {
            if (AB <= 2 * radius) {
                return true;
            }
        }
    }
    
    return false;
}
bool checkCircles2(int Ox, int Oy, int Px, int Py, int Ax, int Ay, int Bx, int By, double radius) {
    double distanceBO = distance(Bx, By, Ox, Oy);
    double distanceAP = distance(Ax, Ay, Px, Py);
    double distanceAB = distance(Ax, Ay, Bx, By);

    if (distanceBO <= radius) {
        
        if (distanceAP <= radius) {
        
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

        while (R - L >= 1e-11) {
            double mid = (L + R) / 2.0;
            
            if (isInsideA(0,0,Px, Py, Ax, Ay, mid) || isInsideB(0, 0, Px, Py, Bx, By, mid) ||
            checkCircles(0,0,Px,Py,Ax,Ay,Bx,By,mid) || checkCircles2(0,0,Px,Py,Ax,Ay,Bx,By,mid)) {
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
