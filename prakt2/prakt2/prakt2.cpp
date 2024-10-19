// prakt2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string>

struct Rectangle
{
    double width;
    double height;

};

class String {

private:
    char str[20] = {'\0'};

public:   
    void setStr(char newStr[20]) {     
      strcat(str, newStr);
    }
    void print() {
        std::cout << str<< std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    //4 классы

    String st;
    char newStr[20];
    std::cout << "введите строку" << std::endl;
    std::cin >> newStr;
    st.setStr(newStr);
    st.print();
    return 0;
  

    //3 структуры

    Rectangle myRec;
    double s;
    double p;
    std::cout << "введите ширину прямоугольника" << std::endl;
    std::cin >> myRec.width;
    std::cout << "введите высоту прямоугольника" << std::endl;
    std::cin >> myRec.height;
    s = myRec.width * myRec.height;
    p = 2 * (myRec.width + myRec.height);
    std::cout << "Периметр прямоугольника = " << p <<"\nПлощадь прямоугольника = "<< s <<std::endl;


    //1 одномерные массивы 
   
    srand(time(NULL));
    int m;
    int array[10];
    double sr;
    int sum = 0;
    int k = 0;
    std::cout << "рандомные числа в массиве:" << std::endl;
        for (int i = 0;i <10;i++)
        {
            array[i] = rand() % 100;
            std::cout << array[i]<< " ";
            sum += array[i];

        }
        sr = sum / 10;
        std::cout << "\nсреднее арифметическое=" <<sr << std::endl;
        std::cout << "числа которые больше среднего арифметического:"  << std::endl;
        for (int i = 0;i < 10;i++)
        {
            if (array[i] > sr)
            {
                k++;
                std::cout << array[i] << " ";
            }
        }
        std::cout << "\nих количество = " << k << std::endl;


        // 2 многомерные массивы
        srand(time(NULL));
        int m;
        int array[3][5];
        double sr;
        int sum = 0;
        int k = 0;
        std::cout << "рандомные числа в массиве:" << std::endl;
        for (int i = 0;i < 3;i++)
        {
            for (int j = 0;j < 5;j++)
            {
                array[i][j] = rand() % 100;
                std::cout << array[i][j] << "\t";
                sum += array[i][j];
            }
            std::cout << std::endl;
        }
        sr = sum / 15;
        std::cout << "\nсреднее арифметическое=" << sr << std::endl;
        std::cout << "числа которые больше среднего арифметического:" << std::endl;
        for (int i = 0;i < 3;i++)
        {
            for (int j = 0;j < 5;j++)
            {
                if (array[i][j] > sr) {
                    k++;
                    std::cout << array[i][j] << " ";
                }              
            }
        }
        std::cout << "\nих количество = " << k << std::endl;

        



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
