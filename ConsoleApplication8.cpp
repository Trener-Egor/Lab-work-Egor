﻿#include <iostream>
#include <vector>
#include<random>
using namespace std;


struct Matrix {
    int** data_ = nullptr;
    size_t n_ = 0u;
    size_t m_ = 0u;
};
void print(Matrix& mat2) {
	for (int i = 0; i < mat2.n_; i++) {
		for (int j = 0; j < mat2.m_; j++) {
			cout << mat2.data_[i][j] << " ";
		}
		cout << endl;
	}
}
void Construct(Matrix& out, size_t n, size_t m) {
    out.n_ = n;
    out.m_ = m;
    out.data_ = new int*[n];
    for (int i = 0; i < n; ++i) {
        out.data_[i] = new int[m];
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            out.data_[i][j] = 0;
        }
    }
};
void destruct(Matrix& in) {
    for (int i = 0; i < in.n_; ++i) {
        delete[] in.data_[i];
    }
    delete[] in.data_;
};
Matrix copy(const Matrix& matrix) {
    Matrix temp;
    Construct(temp, matrix.n_, matrix.m_);
    for (int i = 0; i < matrix.n_; ++i) {
        for (int j = 0; j < matrix.m_; ++j) {
            temp.data_[i][j] = matrix.data_[i][j];
        }
    }
    return temp;
};
Matrix Add(const Matrix& mat1, const Matrix& mat2) {
    if (mat1.n_ == mat2.n_ and mat1.m_ == mat2.m_) {
        Matrix sum;
        Construct(sum, mat1.n_, mat2.m_);
        for (int i = 0; i < mat1.n_; ++i) {
            for (int j = 0; j < mat1.m_; ++j) {
                sum.data_[i][j] = mat1.data_[i][j] + mat2.data_[i][j];
            }
        }
        return sum;
    }
    return Matrix();
}
Matrix Sub(const Matrix& mat1, const Matrix& mat2) {
    Matrix sub;
    if (mat1.n_ == mat2.n_ and mat1.m_ == mat2.m_) {
        Construct(sub, mat1.n_, mat2.m_);
        for (int i = 0; i < mat1.n_; ++i) {
            for (int j = 0; j < mat1.m_; ++j) {
                sub.data_[i][j] = mat1.data_[i][j] - mat2.data_[i][j];
            }
        }
        return sub;
    }
    return Matrix();
}
Matrix Mult(const Matrix& mat1, const Matrix& mat2) {
    if (mat1.n_ == mat2.m_) {
        Matrix mult;
        Construct(mult, mat1.n_, mat2.m_);
        for (int i = 0; i < mat1.n_; ++i) {
            for (int j = 0; j < mat2.m_; ++j) {
                for (int k = 0; k < mat1.m_; k++) {
                    mult.data_[i][j] += mat1.data_[i][k] * mat2.data_[k][j];
                }
            }
        }
        return mult;
    }
    return Matrix();
}
void Transposition( Matrix&matrix) {
    Matrix transposition;   
        Construct(transposition, matrix.n_, matrix.m_);
        for (int i = 0; i < transposition.n_; ++i) {
            for (int j = 0; j < transposition.m_; ++j) {
                transposition.data_[i][j] = matrix.data_[j][i];
            }
        }
        matrix = transposition;
};
//int main() {
   // Matrix P;
    //Construct(P, 5, 4);
    //for (int i = 0; i < 4; ++i) {
        //for (int j = 0; j < 5; ++j) {
           // cout<< P.data_[i][j]<<' ';
       // }
       // cout << endl;
   // }
//}
int main() {
    Matrix matr;
    Construct(matr, 3, 3);
    for (int i = 0; i < matr.n_; i++) {
        for (int j = 0; j < matr.m_; j++) {
            matr.data_[i][j] = rand() % 20 - 10;
            cout << matr.data_[i][j] << " ";
        }
        cout << endl;
    }
    cout << "=========" << endl;
    Matrix ma3;
    Construct(ma3, 3, 3);
    for (int i = 0; i < ma3.n_; i++) {
        for (int j = 0; j < ma3.m_; j++) {
            ma3.data_[i][j] = rand() % 20 - 10;
            cout << ma3.data_[i][j] << " ";
        }
        cout << endl;
    }
    cout << "=========" << endl;
    Matrix mat4;
    mat4 = copy(ma3);
    print(mat4);
    cout << "=========" << endl;
    destruct(mat4);
    Matrix masumm = Add(matr, ma3);
    print(masumm);
    cout << "=========" << endl;
    Matrix mat5;
    mat5 = Mult(masumm, ma3);
    print(mat5);
    cout << "=========" << endl;
    Transposition(mat5);
    print(mat5);
}