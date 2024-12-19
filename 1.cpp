#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

const int N = 6;
const int WIDTH = 3;

HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
COORD destCoord;

void genmx(int matrix[][N], int x, int y, int offsetx, int offsety) {
	*(*(matrix + y) + x) = (rand() % (N * N) + 1);
    destCoord.X = (x + offsetx) * WIDTH;
    destCoord.Y = y + offsety;
    SetConsoleCursorPosition(hStdout, destCoord);
    cout << *(*(matrix + y) + x);
    Sleep(10);
}



void outmx(int matrix[][N], int offset_x, int offset_y) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            destCoord.X = (i + offset_x) * WIDTH;
            destCoord.Y = j + offset_y;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + i) + j);
        }
    }
}

void outmx1(float matrix[][N], int offset_x, int offset_y) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            destCoord.X = (i + offset_x) * WIDTH;
            destCoord.Y = j + offset_y;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + i) + j);
        }
    }
}

void ItF(const int intMatrix[][N], float floatMatrix[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            floatMatrix[i][j] = static_cast<float>(intMatrix[i][j]);
        }
    }
}

void quicksort(int arr[][N], int  end, int begin)
{
    int mid;
    int f = begin;
    int l = end;
    int ind = (f + l) / 2;
    mid = (*(*(arr+ind%N)+ind/N));
    while (f < l)
    {
        while (*(*(arr + f % N) + f / N) < mid) f++;
        while (*(*(arr + l % N) + l / N) > mid) l--;
        if (f <= l) {
            swap(*(*(arr + f % N) + f / N), *(*(arr + l % N) + l / N));
            f++;
            l--;
        }
    }
    if (begin < l) quicksort(arr, l, begin);
    if (f < end) quicksort(arr, end, f);
}

void shake_a(int matrix[][N], int offsetx, int offsety) {
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i + N / 2);

            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i + N / 2);
        }
    }

}

void shake_b(int matrix[][N], int offsetx, int offsety) {
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i + N / 2);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i);

            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i + N / 2);
        }
    }

}

void shake_c(int matrix[][N], int offsetx, int offsety) {
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i + N / 2);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i + N / 2);

            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i);
        }
    }

}

void shake_d(int matrix[][N], int offsetx, int offsety) {
    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N / 2; j++) {
            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i + N / 2);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j) + i);

            destCoord.X = (i + N / 2 + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i);

            destCoord.X = (i + offsetx) * WIDTH;
            destCoord.Y = j + N / 2 + offsety;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << *(*(matrix + j + N / 2) + i + N / 2);
        }
    }

}



int main() {
    setlocale(LC_ALL, "RUS");
    cout << "Исходные матрицы:" << endl << endl;
    int matrix[N][N], matrix1[N][N];
    float matrix4[N][N], matrix5[N][N];
    for (int i = 0; i <= N * 2 - 1; i++) {
        int a = i % 4;
        switch (a) {
        case(0):
            for (int x = i / 4; x < N - i / 4; x++) {
                genmx(matrix, x, i / 4, 0, 1);
            }
            break;
        case(1):
            for (int y = i / 4 + 1; y < N - i / 4; y++) {
                genmx(matrix, N - i / 4 - 1, y, 0, 1);
            }
            break;
        case(2):
            for (int x = N-i / 4 - 2; x>  0+i / 4; x--) {
                genmx(matrix, x, N-i/4-1, 0, 1);
            }
            break;
        case(3):
            for (int y = N - i / 4 - 1; y >0+ i/ 4; y--) {
                genmx(matrix, i / 4, y, 0, 1);
            }
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        int a = i % 2;
        switch (a) {
        case(0):
            for (int y = 0; y < N; y++) {
                genmx(matrix1, i, y, N+1, 1);
            }
            break;
        case(1):
            for (int y = N-1; y >=0; y--) {
                genmx(matrix1, i, y, N+1, 1);
            }
            break;
        }
    }
    destCoord.X = 0;
    destCoord.Y = N + 1;
    SetConsoleCursorPosition(hStdout, destCoord);

    cout << "2 задание"<<endl<<"Перестановки первой матрицы : ";

    shake_a(matrix, 0, N + 3);
    shake_b(matrix, N+1, N + 3);
    shake_c(matrix, (N+1)*2, N + 3);
    shake_d(matrix, (N+1)*3, N + 3);

    destCoord.X = 0;
    destCoord.Y = (N + 2)*2;
    SetConsoleCursorPosition(hStdout, destCoord);

    cout << "Перестановки второй матрицы: ";

    shake_a(matrix1, 0, (N + 3)*2);
    shake_b(matrix1, N + 1, (N + 3) * 2);
    shake_c(matrix1, (N + 1) * 2, (N + 3) * 2);
    shake_d(matrix1, (N + 1) * 3, (N + 3) * 2);

    destCoord.X = 0;
    destCoord.Y = (N + 2) * 3+1;
    SetConsoleCursorPosition(hStdout, destCoord);

    cout << "3 задание"<<endl<< "Отсортированные матрицы: ";

    quicksort(matrix, N*N-1,0);
    quicksort(matrix1,N*N-1,0);
    outmx(matrix, 0, (N + 3) * 3);
    outmx(matrix1, N + 1, (N + 3) * 3);

    destCoord.X = 0;
    destCoord.Y = (N + 2) * 4 + 2;
    SetConsoleCursorPosition(hStdout, destCoord);

    system("pause");
    system("cls");

    cout <<"4 задание"<<endl<< "Манипуляция с элементами матрицы:"<<endl << "Исходные матрицы: ";
    ItF(matrix, matrix4);
    ItF(matrix1, matrix5);
    
    outmx(matrix, 0, 3);
    outmx(matrix1, N + 1, 3);

    cout <<endl<< "Введите одну из операций(+, -, *, /) : ";
    char operation;
    cin >> operation;
    cout << endl << "Введите число: ";
    int num;
    cin >> num;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            switch (operation) {
            case '+':
                *(*(matrix + i) + j) += num;
                *(*(matrix1 + i) + j) += num;
                break;
            case '-':
                *(*(matrix + i) + j) -= num;
                *(*(matrix1 + i) + j) -= num;
                break;
            case '*':
                *(*(matrix + i) + j) *= num;
                *(*(matrix1 + i) + j) *= num;
                break;
            case '/':
                if (num == 0) {
                    *(*(matrix4 + i) + j) /= num;
                    *(*(matrix5 + i) + j) /= num;
                }
                else {
                    *(*(matrix + i) + j) /= num;
                    *(*(matrix1 + i) + j) /= num;
                }
                break;
            }
        }
    }
    destCoord.X = 0;
    destCoord.Y = (N + 2) +4;
    SetConsoleCursorPosition(hStdout, destCoord);

    cout <<endl<< "Результат: ";
    if ((operation == '/') && num == 0) {
        outmx1(matrix4, 0, (N + 2) + 6);
        outmx1(matrix5, N + 1, (N + 2) + 6);
    }
    else {
        outmx(matrix, 0, (N + 2) + 6);
        outmx(matrix1, N + 1, (N + 2) + 6);
    }
    cout << endl;
    system("pause");
    system("cls");

    cout << "ИДЗ №10" << endl << "Матрица 3x3 со случайными числами от -30 до 30: " << endl;
    
    int matrix2[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            *(*(matrix2 + i) + j) = rand() % 61 - 30;
            cout << *(*(matrix2 + i) + j) << '/t';
        }
        cout << endl;
    }
    int a = *(*(matrix2 + 0) + 0) * *(*(matrix2 + 1) + 1) * *(*(matrix2 + 2) + 2);
    int b = *(*(matrix2 + 0) + 1) * *(*(matrix2 + 1) + 2) * *(*(matrix2 + 2) + 0);
    int c = *(*(matrix2 + 0) + 2) * *(*(matrix2 + 1) + 0) * *(*(matrix2 + 2) + 1);
    int d = *(*(matrix2 + 0) + 2) * *(*(matrix2 + 1) + 1) * *(*(matrix2 + 2) + 0);
    int e = *(*(matrix2 + 0) + 0) * *(*(matrix2 + 1) + 2) * *(*(matrix2 + 2) + 1);
    int f = *(*(matrix2 + 0) + 1) * *(*(matrix2 + 1) + 0) * *(*(matrix2 + 2) + 2);
    cout << "Формула для вычисления определителя: (a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32)-((a11*a23*a32)+(a12*a21*a33)+(a13*a22*a31))"<<endl;
    Sleep(30);
    cout << "1 промежуточный результат: (" << a << ")+(" << b << ")+(" << c << ")-((" << d << ")+(" << e << ")+(" << f << "))"<<endl;
    cout << "2 промежуточный результат: " << a + b + c << "-" << d + e + f << endl;
    Sleep(30);
    cout << "Определитель = " << a + b + c - d - e - f<<endl;

    return(0);
}