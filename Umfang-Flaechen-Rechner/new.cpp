#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

class Angabe {
    private:
        float a;
        float b;
        float c;
        float r;
    public:
        Angabe(float a_, float b_, float c_, float r_) {
            a = a_;
            b = b_;
            c = c_;
            r = r_;
        }

        void setA(float a_) {
            a = a_;
        }

        float getA() {
            return a;
        }

        void setB(float b_) {
            b = b_;
        }

        float getB() {
            return b;
        }

        void setC(float c_) {
            c = c_;
        }

        float getC() {
            return c;
        }

        void setR(float r_) {
            r = r_;
        }

        float getR() {
            return r;
        }
};

class Rechnen {
    public:
        void test();
};

int main() {
    cout << "Test";
}