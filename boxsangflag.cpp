#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the distance between two points (x1, y1) and (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

// Function to calculate the edge length of the largest equilateral triangle inscribed in the given triangle
double largestEquilateralTriangle(double AB, double BC, double CA) {
    double largestSide = max(AB, max(BC, CA));
    return largestSide;
}

// Function to calculate the edge length of the smallest equilateral triangle inscribed in the given triangle
double smallestEquilateralTriangle(double AB, double BC, double CA) {
    double smallestSide = min(AB, min(BC, CA));
    return smallestSide;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        double xA, yA, xB, yB, xC, yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;

        double AB = distance(xA, yA, xB, yB);
        double BC = distance(xB, yB, xC, yC);
        double CA = distance(xC, yC, xA, yA);

        double largestTriangle = largestEquilateralTriangle(AB, BC, CA);
        double smallestTriangle = smallestEquilateralTriangle(AB, BC, CA);

        cout << fixed << setprecision(9) << smallestTriangle << " " << largestTriangle << endl;
    }

    return 0;
}

