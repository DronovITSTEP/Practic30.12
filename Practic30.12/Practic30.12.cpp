#include <iostream>

using namespace std;

// нахождение факториала числа с использованием рекурсии (функция вызывает саму себя)
long int fact(int N) {
    if (N < 0) return 0;
    else if (N == 1) return 1;
    else return N * fact(N-1);
}

long int factFOR(int N) {
    if (N < 0) return 0;
    else if (N == 1) return 1;
    else {
        long int f = 1;
        for (int i = 1; i <= N; i++) {
            f *= i;
        }
        return f;
    }
}

//написать рекурсивную ф-ю нахождения степени числа
long int pow(int z, int b) {
    if (b == 0) return 1;
    else if (b == 1) return z;
    else return z * pow(z, b-1);
}

/*
Написать рекурсивную функцию, которая
выводит N звезд в ряд, число N задает пользователь
*/
void star(int N) {
    cout << '*';
    if (N > 1) star(N - 1);
}

/*
Написать рекурсивную функцию, которая
вычисляет сумму всех чисел в диапазоне от a до b. Пользователь вводит a и b. 
*/
int sum(int a, int b) {
    if (a == b) return a;
    else if (a > b) return a + sum(a - 1, b);  
    else if (a < b) return a + sum(a + 1, b);
}

/*
Напишите рекурсивную функцию, которая
принимает одномерный массив из 100 целых чисел заполненных 
случайным образом и находит позицию, с которой начинается 
последовательность из 10 чисел, сумма
которых минимальна.
*/



int main()
{
    //cout << fact(5);
    //cout << pow(2, 5);
    //star(5);
    cout << sum(4, 9);

    
}
