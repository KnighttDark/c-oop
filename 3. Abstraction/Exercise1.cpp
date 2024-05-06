/*
    Xây dựng class mô ta đối tượng ma trận trong đại số, gồm các thuộc tính sau
    - Số hàng: int
    - Số cột: int
    - Dữ liệu của ma trận: mảng 2 chiều
    Áp dụng tính chất encapsulation để viết thuộc tính
    Áp dụng tính chất abstraction để cung cấp phương thức nhân ma trận
    (tham số truyền vào chính là 1 ma trận khác, kết quả trả về là 1 ma trận tích)


*/

#include <iostream>
#include <string>

class Matrix
{
private:
    int col;
    int row;
    int **data;

public:
    Matrix(int row, int col)
    {
        this->row = row;
        this->col = col;
        data = new int *[row];
        for (int i = 0; i < row; i++)
        {
            data[i] = new int[col];
        }
    }

    void setMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                std::cout << "Enter element [" << i << "][" << j << "]: ";
                std::cin >> data[i][j];
            }
        }
    }

    void printMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    Matrix *multiply(Matrix *m)
    {

        Matrix *result = new Matrix(this->row, m->col);
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < m->col; j++)
            {
                result->data[i][j] = 0;
                for (int k = 0; k < this->col; k++)
                {
                    result->data[i][j] += this->data[i][k] * m->data[k][j];
                }
            }
        }
        return result;
    }
};

int main()
{

    Matrix *m1 = new Matrix(2, 3);
    m1->setMatrix();
    m1->printMatrix();
    std::cout << "\n";

    Matrix *m2 = new Matrix(3, 2);
    m2->setMatrix();
    m2->printMatrix();
    std::cout << "\n";

    std::cout << "Result: \n";

    Matrix *result = m1->multiply(m2);
    result->printMatrix();
}