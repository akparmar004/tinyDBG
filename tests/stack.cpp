#include<iostream>
void a() {
    int foo = 1;
}

void b() {
    int foo = 2;
    a();
}

void c() {
    int foo = 3;
    b();
}

void d() {
    int foo = 4;
    c();
}

void e() {
    int foo = 5;
    std::cout << "hello e\n";
    d();
}

void f() {
    int foo = 6;
    std::cout << "hello f\n";
    e();
}

int main() 
{
    std::cout << "Hello main\n";
    f();    
}
