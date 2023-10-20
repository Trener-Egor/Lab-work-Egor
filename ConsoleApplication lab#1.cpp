#include <iostream>
int main() {//#1
    std::cout << "num 1-";
    int a = 1;
    int b = 13;
    int c = 49;
    std::cout << a << ' ' << b << ' ' << c << std::endl;

    {//#2
        std::cout << "num 2-";
        int a = 1;
        int b = 13;
        int c = 49;
        char d = '#';
        std::cout << a << d << b << d << c << std::endl;
    }
    {//#3
        std::cout << "num 3-";
        int a;
        int b;
        int c;
        std::string d = "  ";
        std::cin >> a >> b >> c;
        std::cout << a << d << b << d << c << std::endl;
    }
    {//#4
        std::cout << "num 4-";
        double a;
        double x;
        double y;
        std::cin >> a;
        x = 12 * (a * a) + 7 * a - 12;
        std::cout << x;
        std::cin >> x;
        y = 3 * (x * x * x) + 4 * (x * x) - 11 * x + 1;
        std::cout << y << std::endl;
    }
    {//#5
        std::cout << "num 5-";
        double p;
        double m;
        double V;
        std::cin >> m >> V;
        p = m / V;
        std::cout << p << std::endl;
    }
    {//#6
        std::cout << "num 6-";
        int a = 3;
        int b = 12;
        int x;
        x = -(b / a);
        std::cout << x << std::endl;
    }
    {//#7
        std::cout << "num 7-";
        double x1 = 1;
        double x2 = 4;
        double y1 = 2;
        double y2 = 6;
        double r;
        r = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        r = std::sqrt(r);
        std::cout << r << std::endl;
    }
    {//#8
        std::cout << "num 8-";
        int a;
        int b;
        double h;
        double c;
        double p;
        double a1;
        std::cin >> a >> b >> h;
        a1 = (a - b) / 2;
        c = ((h * h) + (a1 * a1));
        c = std::sqrt(c);
        p = a + b + (2 * c);
        std::cout << p << std::endl;
    }
    {//#9
        std::cout << "num 9-";
        int a;
        int V;
        int Sp;
        std::cin >> a;
        V = a * a * a;
        Sp = 4 * (a * a);
        std::cout << V << ' ' << Sp << std::endl;
    }
    {//#10
        std::cout << "num 10-";
        int a = 10;
        int P;
        P = a * 4;
        std::cout << P << std::endl;
    }
    {//#11
        std::cout << "num 11-";
        int r = 10;
        int d;
        d = r * 2;
        std::cout << d << std::endl;
    }
    {//#12
        std::cout << "num 12-";
        std::string r;
        std::cin >> r;
        std::cout << "Hello, " << r << "!My name is C++ " << std::endl;
    }
}