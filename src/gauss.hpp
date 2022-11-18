#ifndef GAUSS_GAUSS_HPP
#define GAUSS_GAUSS_HPP

#include <vector>
#include <iostream>

template<typename T>
class Matrix
{
private:
    int size = 0;
    std::vector<std::vector<T>> A;
    std::vector<T> b;

public:
    Matrix() = delete;
    Matrix(int _size);
    void print();

    void fill();

    // Gauss's method
    std::vector<T> gauss(std::vector<std::vector<T>> A, std::vector<T> b);

};

template<typename T>
Matrix<T>::Matrix(int _size)
{
    if(size != _size)
    {
        A.resize(_size, std::vector<T>(_size, 0));
        b.resize(_size);
    }
    this->size = _size;
}

template<typename T>
void Matrix<T>::print()
{
     //check matrix correct size
    if(this->size == 0)
    {
        throw "Empty matrix!";
    }
    else
    {
        for(ushort i = 0; i < size; ++i)
        {
            for(ushort j = 0; j < size; ++j)
            {
                printf("%4i", A[i][j]);
            }
            printf(" |%4i\n", b[i]);
        }
    }
}

template<typename T>
void Matrix<T>::fill()
{
    std::cout << size << std::endl;

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout << "a[" << i << "][" << j << "] = ";
            std::cin >> A[i][j];
        }
        std::cout << "b[" << i << "] = ";
        std::cin >> b[i];
    }
}

// function of solving matrix by gauss method
template<typename T>
std::vector<T> Matrix<T>::gauss(std::vector<std::vector<T>> A, std::vector<T> b) {
}


#endif //GAUSS_GAUSS_HPP
