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
    std::vector<T> gauss();

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
            std::cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
            std::cin >> A[i][j];
        }
        std::cout << "b[" << i + 1 << "] = ";
        std::cin >> b[i];
    }
}

// function of solving matrix by gauss method
template<typename T>
std::vector<T> Matrix<T>::gauss()
{
    for(int k = 0; k < size; ++k)
    {
        for(int i = 1; i < size; ++i)
        {
            for(int j = 1; j < size; ++j)
            {
                if(j > i)
                {
                    A[i][j] = 0;
                }
                else
                {
                    std::cout << i + 1 << ' ' << j + 1 << std::endl;
                    // recount of matrix elements
//                    A[i][j] = A[i][j] - (A[i][k] / A[k][k]) * A[k][j];
//                    b[i] = b[i] - (A[i][k] / A[k][k]) * b[k];
                }
            }
        }
    }

}


#endif //GAUSS_GAUSS_HPP
