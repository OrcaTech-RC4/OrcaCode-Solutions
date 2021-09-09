#include <iostream>

int main() {
    int n, k, r, total=0;
    std::cin >> n >> k;
    for (int i=0; i<k; i++) {
        std::cin >> r;
        total += r;
    }
    float max_total = (float)(total + 3*(n-k))/n;
    float min_total = (float)(total - 3*(n-k))/n;

    std::cout << min_total << " " << max_total << std::endl;
}