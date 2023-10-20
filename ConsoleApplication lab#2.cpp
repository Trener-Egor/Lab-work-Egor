#include <iostream>
using byte = unsigned char;
using Coord = std::pair<byte, byte>;
bool HitByRook(Coord A, Coord B) {
    return A.first == B.first || A.second == B.second;
}
bool HitByBishop(Coord A, Coord B) {
    return std::abs(A.first - B.first) == std::abs(A.second - B.second);
}
bool HitByKing(Coord A, Coord B) {
    return (std::abs(A.first - B.first) < 2 && std::abs(A.second - B.second) < 2);
}
bool HitByQueen(Coord A, Coord B) {
    return (std::abs(A.first - B.first) == std::abs(A.second - B.second)) || A.first == B.first || A.second == B.second;
}
bool HitByPawn(Coord A, Coord B) {
    return (std::abs(A.first - B.first) < 2 && (B.second - A.second) < 2) || ((A.first == B.first) && ((B.second - A.second) < 3) && A.second == 2);
}
int main()
{
    int m;
    std::cin >> m;
    switch (m) {
    case 1:
        int  x, y, z;
        std::cin >> x >> y >> z;
        std::cout << "num 1" << std::endl;
        std::cout << "1-";
        if (x % 2 != 0 and y % 2 != 0) {
            std::cout << "condition is true" << std::endl;
        }
        else {
            std::cout << "condition is false" << std::endl;
        }
        std::cout << "2-";
        if ((x < 20 and y >= 20) or (x >= 20 and y < 20)) {
            std::cout << "condition is true" << std::endl;
        }
        else {
            std::cout << "condition is false" << std::endl;
        }
        std::cout << "3-";
        if (x == 0 or y == 0) {
            std::cout << "condition is true" << std::endl;
        }
        else {
            std::cout << "condition is false" << std::endl;
        }
        std::cout << "4-";
        if (x < 0 and y < 0 and z < 0) {
            std::cout << "condition is true" << std::endl;
        }
        else {
            std::cout << "condition is false" << std::endl;
        }
        std::cout << "5-";
        if ((x % 5 == 0 || y % 5 != 0 || z % 5 != 0) || (x % 5 != 0 || y % 5 == 0 || z % 5 != 0) || (x % 5 != 0 || y % 5 != 0 || z % 5 == 0)) {
            std::cout << "condition is true" << std::endl;
        }
        else {
            std::cout << "condition is false" << std::endl;
        }std::cout << "6-";
        if (x > 100 or y > 100 or z > 100) {
            std::cout << "condition is true" << std::endl;
        }
        else {
            std::cout << "condition is false" << std::endl;
        }
        break;
    case 2:
        {std::cout << "num 2" << std::endl;
        int a;
        int b;
        int c;
        int d;
        std::cin >> a >> b >> c >> d;
        Coord positionA(a, b);
        Coord positionB(c, d);
        if (a > 8 || a < 1 || b>8 || b < 1 || c>8 || c < 1 || d>8 || d < 1) {
            std::cout << "Error 404" << std::endl;
        }
        else {
            if (HitByRook(positionA, positionB)) {
                std::cout << "condition is true";
            }
            else {
                std::cout << "condition is false";
            }
            std::cout << std::endl;
            if (HitByBishop(positionA, positionB)) {
                std::cout << "condition is true";
            }
            else {
                std::cout << "condition is false";
            }
            std::cout << std::endl;
            if (HitByKing(positionA, positionB)) {
                std::cout << "condition is true";
            }
            else {
                std::cout << "condition is false";
            }
            std::cout << std::endl;
            if (HitByQueen(positionA, positionB)) {
                std::cout << "condition is true";
            }
            else {
                std::cout << "condition is false";
            }
            std::cout << std::endl;
            if (HitByPawn(positionA, positionB)) {
                std::cout << "condition is true";
            }
            else {
                std::cout << "condition is false";
            }
            std::cout << std::endl;
            }   
        }

        break;
    case 3:
        std::cout << "num 3" << std::endl;
        int n;
        std::cin >> n;
        for (int i = 1; i < 10; ++i) {
            std::cout << i << '*' << n << '=' << i * n << std::endl;
        }
        break;
    case 4:
        std::cout << "num 4" << std::endl;
        {std::cout << "1-";
        int n = 1;
        for (int i = 8; i < 16; ++i) {
            n = n * i;
        }
        std::cout << n << std::endl;
        }
        {std::cout << "2-";
        int n = 1;
        int a = 19;
        while (a < 21) {
            n = n * a;
            a++;
        }
        std::cout << n << std::endl;
        }
        {std::cout << "3-";
        int n = 1;
        int i = 1;
        int b = 6;
        while (i <= b) {
            n = n * i;
            i++;
        }
        std::cout << n << std::endl;
        }
        {   std::cout << "4-";
        int n = 1;
        int a = 1;
        int b = 6;
        while (a <= b) {
            n = n * a;
            a++;
        }
        std::cout << n << std::endl;
        }
        break;
    }
}
