
#include <iostream>
#include <string>
using namespace std;

class _4ugol {
private:
    int a, b, c, d;
    int A, B, C, D;
    string name = "Четырехугольник";
public:
    _4ugol(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) {
        a = _a; b = _b; c = _c; d = _d;
        A = _A; B = _B; C = _C; D = _D;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
    void print() {
        //cout << "Фигура " << name << endl;
        cout << "Сторона a = " << a << " Сторона b = " << b << " Сторона c = " << c << " Сторона d = " << d << endl;
        cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << " Угол D = " << D << endl;
    }
};

class paralelogram : public _4ugol {
private:
    string name = "Параллелограмм";
    int a, b, A, B;
public:
    paralelogram(int _a, int _b, int _A, int _B) : _4ugol(_a, _b, _a, _b, _A, _B, _A, _B) {
        a = _a; b = _b; A = _A; B = _B;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
};

class romb :public _4ugol {
private:
    string name = "Ромб";
    int a, A, B;
public:
    romb(int _a, int _A, int _B) : _4ugol(_a, _a, _a, _a, _A, _B, _A, _B) {
        a = _a; A = _A; B = _B;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
};

class Pryamougolnik : public _4ugol {
private:
    int a, b;
    string name = "Прямоугольник";
public:
    Pryamougolnik(int _a, int _b) : _4ugol(_a, _b, _a, _b, 90, 90, 90, 90) {
        a = _a; b = _b;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
};

class Kvadrat : public _4ugol {
private:
    int a;
    string name = "Квадрат";
public:
    Kvadrat(int _a) : _4ugol(_a, _a, _a, _a, 90, 90, 90, 90) {
        a = _a;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
};

class Tringle  {
private:
    string name = "Треугольник";
    int a = 0;  int b = 0;  int c = 0;
    int A = 0; int B = 0; int C = 0;
public:
    
    Tringle(int _a, int _b, int _c, int _A, int _B, int _C) {
        a = _a; b = _b; c = _c;
        A = _A; B = _B; C = _C;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
    void print() {
    
        cout << "Сторонa a = " << a << " Сторонa b = " << b << " Сторонa c = " << c << endl;
        cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << endl;
    }
};

class PryaTringle : public Tringle {
private:
    string name = "Прямоугольный треугольник";
    int a; int b; int c;
    int A; int B;
public:
   PryaTringle(int _a, int _b, int _c, int _A, int _B) : Tringle (_a, _b, _c, _A, _B, 90) {
        a = _a; b = _b; c = _c;
        A = _A; B = _B;
    }
   void print_all() {
       cout << name << ": " << endl;
       print();
   }
 };

class RavBedTringle : public Tringle {
private:
    string name = "Равнобедренный треугольник";
    int a; int b;
    int A; int B;
public:
    RavBedTringle(int _a, int _b, int _A, int _B) : Tringle(_a, _b, _a, _A, _B, _A) {
        a = _a; b = _b;
        A = _A; B = _B;
    }
    void print_all() {
        cout << name << ": " << endl;
        print();
    }
};

class RavSTringle : public Tringle {
private:
    string name = "Равносторонний треугольник";
    int a = 0; 
public:
   RavSTringle(int _a) : Tringle(_a, _a, _a, 60, 60 ,60) {
        a = _a; 
    }
   void print_all() {
       cout << name << ": " << endl;
       print();
   }
};


int main() {
    setlocale(LC_ALL, "russian");
    Tringle tringle(3, 4, 5, 60, 90, 30);
    tringle.print_all();
    PryaTringle Prt(3, 4, 5, 50, 60);
    Prt.print_all();
    RavBedTringle rbt(4, 5, 50, 60);
    rbt.print_all();
    RavSTringle ravSTringle(5);
    ravSTringle.print_all();
    _4ugol fig(5, 4, 6, 4, 60, 70, 120, 30);
    fig.print_all();
    paralelogram prl(4, 5, 70, 130);
    prl.print_all();
    romb rmb(5, 60, 70);
    rmb.print_all();
    Kvadrat kvd(10);
    kvd.print_all();
    Pryamougolnik prm(14, 6);
    prm.print_all();

}