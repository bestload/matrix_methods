#include "src/gauss.hpp"

int main() {
    Matrix<int> A(3);
    A.fill();
    A.gauss();

    A.print();

    return 0;
}
