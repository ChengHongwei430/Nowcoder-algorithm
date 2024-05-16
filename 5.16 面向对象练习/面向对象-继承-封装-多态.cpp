

# include<iostream>
# include<string>
# include<vector>
using namespace std;


class Shape {
public:
    virtual string get_typename_shape() const = 0;//虚函数图形名
    virtual double cal_shape() const = 0;//虚函数计算图形面积
};

class Rectangle :public Shape {//矩形继承图形
public:
    Rectangle(double width, double heigth) : width(width), heigth(heigth) {}
    //矩形构造函数，默认值是调用的实例的成员变量
    double cal_shape() const override {//重构基类虚函数,不改变输入，使用const
        return (width * heigth);
    }
    string get_typename_shape() const override {//重构基类虚函数,返回形状
        return "Rectangle";
    }
private:
    double width, heigth;

};

class Circle :public Shape {//三角形继承图形
public:
    Circle(double r) :r(r) {}
    //三角形构造函数，默认值是调用的实例的成员变量
    double cal_shape() const override {
        /////重构基类虚函数,不改变输入，使用const
        return 3.14 * r * r;
    }
    string get_typename_shape() const override {//重构基类虚函数,返回形状
        return "Circle";
    }
private:
    double r;

};

int main() {

    string s;
    vector<Shape*> sha;
    ///////////////////////不能放存在自定义构造函数的类,但可以放其指针

    while (cin >> s) {
        if (s == "rectangle") {
            double x, y;
            cin >> x >> y;
            Rectangle* a = new Rectangle(x, y);
            sha.push_back(a);
        }
        else if (s == "circle") {
            double x;
            cin >> x;
            Circle* a = new Circle(x);
            sha.push_back(a);
        }
        else if (s == "end") break;
    }

    for (int i = 0; i < sha.size(); ++i) {
        //////////////////////////////指针可以直接使用->来使用类的函数
        cout << sha[i]->get_typename_shape();
        cout << " area: ";
        printf("%.2f", sha[i]->cal_shape());
        cout << endl;

    }

};
















