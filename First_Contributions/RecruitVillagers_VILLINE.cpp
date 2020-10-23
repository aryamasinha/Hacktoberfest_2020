#include <iostream>

int main() {
    int side1 = 0, side2 = 0, c, m, n, x, y, p;
    std::cin >> n >> m >> c;
    while (n--) {
        std::cin >> x >> y >> p;
        if (y - m*x - c > 0) {
            side1 += p;
        } else {
            side2 += p;
        }
    }
    std::cout << (side1 > side2 ? side1 : side2);
    return 0;
}