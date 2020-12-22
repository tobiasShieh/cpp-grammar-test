// 希望同一个方法在派生类和基类中的行为是不同的

// 如果方法是通过引用或者指针而不是使用对象调用的，它将确定使用哪一种方法。如果没有使用 virtual 关键字，程序将根据引用或者指针的类型选择方法，如果使
// 用了 virtual 关键字，那么将根据指针或者应用所指对象的类型选择方法。

// 经常在基类中把派生类需要修改的方法设置为虚函数，该方法被设置为虚函数之后，在派生类中的方法将自动变为虚函数；

// 如果析构函数不是虚的，那么将会直接调用指针或引用类型的析构函数，如果析构函数是虚的，那么将会调用指针或引用所指对象类型的析构函数，这样在析构完成
// 派生类之后就会自动调用父类的析构函数，完成正常顺序的析构。

#include <iostream>
using namespace std;



int main()
{
    cout << "hello world" << endl;

    cin.get();
}