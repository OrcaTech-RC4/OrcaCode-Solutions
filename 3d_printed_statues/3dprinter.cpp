#include <iostream>
#include <cmath>

int main() {
    int n, x=0;
    std::cin >> n;
    while (std::pow(2, x) < n) {
        x++;
    }
    std::cout << x+1 << std::endl;
}
