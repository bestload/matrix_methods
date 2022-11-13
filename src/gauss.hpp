#ifndef GAUSS_GAUSS_HPP
#define GAUSS_GAUSS_HPP

#include <vector>
#include <iostream>

template<typename dType>
class Matrix
{
private:
    int size;
    std::vector<std::vector<dType>> A;
    std::vector<dType> b;

public:
    void print()
    {
        // check matrix correct size
        if(this->size == 0)
        {
            throw "Empty matrix!";
        }
        else
        {
            for(int i = 0; i < size; ++i)
            {
                for(int j = 0; j < size; ++j)
                {
                    std::cout << A[i][j] << ' ';
                }
                std::cout << " | " << b[i] << std::endl;
            }
        }
    }

    // Gauss's method
    std::vector<dType> gauss(std::vector<std::vector<dType>> A, std::vector<dType> b);

};


#endif //GAUSS_GAUSS_HPP
