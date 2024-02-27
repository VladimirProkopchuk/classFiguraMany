
#include <iostream>
#include <string>
using namespace std;

class fourgolnik {
private:
    int a, b, c, d;
    int A, B, C, D;
    string name = "Четырехугольник";
public:
    fourgolnik(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) {
        a = _a; b = _b; c = _c; d = _d;
        A = _A; B = _B; C = _C; D = _D;
    }
   virtual void print() {
        cout << name << endl;
    }
   void info() {
       cout << "Сторона a = " << a << " Сторона b = " << b << " Сторона c = " << c << " Сторона d = " << d << endl;
       cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << " Угол D = " << D << endl;
   }
};

class paralelogram : public fourgolnik {
private:
    string name = "Параллелограмм";
    int a, b, A, B;
public:
    paralelogram(int _a, int _b, int _A, int _B) : fourgolnik(_a, _b, _a, _b, _A, _B, _A, _B) {
        a = _a; b = _b; A = _A; B = _B;
    }
    void print() override {
        cout << name << endl;
    }
};

class romb :public fourgolnik {
private:
    string name = "Ромб";
    int a, A, B;
public:
    romb(int _a, int _A, int _B) : fourgolnik(_a, _a, _a, _a, _A, _B, _A, _B) {
        a = _a; A = _A; B = _B;
    }
    void print() override {
        cout << name << endl;
    }
};

class Pryamougolnik : public fourgolnik {
private:
    int a, b;
    string name = "Прямоугольник";
public:
    Pryamougolnik(int _a, int _b) : fourgolnik(_a, _b, _a, _b, 90, 90, 90, 90) {
        a = _a; b = _b;
    }
    void print() override {
        cout << name << endl;
    }
};

class Kvadrat : public fourgolnik {
private:
    int a;
    string name = "Квадрат";
public:
    Kvadrat(int _a) : fourgolnik(_a, _a, _a, _a, 90, 90, 90, 90) {
        a = _a;
    }
    void print() override {
        cout << name << endl;
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

    virtual void print() {
        cout << name << endl;
    }
   void info (){
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
   void print() override {
       cout << name << endl;
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
    void print() override {
        cout << name << endl;
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
   void print() override {
       cout << name << endl;
   }
};

void print_all(Tringle* t) {
    t->print();
    t->info();
    for (int i = 0; i < 35; i++) {
        cout << "-";
    } cout << endl;
}
void print_all(fourgolnik* f) {
    f->print();
    f->info();
    for (int i = 0; i < 35; i++) {
        cout << "-";
    } cout << endl;
}

int main() {
    setlocale(LC_ALL, "russian");
    Tringle tringle(3, 4, 5, 60, 90, 30);
    print_all(&tringle);
    PryaTringle Prt(3, 4, 5, 50, 60);
    print_all(&Prt);
    RavBedTringle rbt(4, 5, 50, 60);
    print_all(&rbt);
    RavSTringle ravSTringle(5);
    print_all(&ravSTringle);
    fourgolnik fig(5, 4, 6, 4, 60, 70, 120, 30);
    print_all(&fig);
    paralelogram prl(4, 5, 70, 130);
    print_all(&prl);
    romb rmb(5, 60, 70);
    print_all(&rmb);
    Kvadrat kvd(10);
    print_all(&kvd);
    Pryamougolnik prm(14, 6);
    print_all(&prm);
}