

# include<iostream>
# include<string>
# include<vector>
using namespace std;


class Shape {
public:
    virtual string get_typename_shape() const = 0;//�麯��ͼ����
    virtual double cal_shape() const = 0;//�麯������ͼ�����
};

class Rectangle :public Shape {//���μ̳�ͼ��
public:
    Rectangle(double width, double heigth) : width(width), heigth(heigth) {}
    //���ι��캯����Ĭ��ֵ�ǵ��õ�ʵ���ĳ�Ա����
    double cal_shape() const override {//�ع������麯��,���ı����룬ʹ��const
        return (width * heigth);
    }
    string get_typename_shape() const override {//�ع������麯��,������״
        return "Rectangle";
    }
private:
    double width, heigth;

};

class Circle :public Shape {//�����μ̳�ͼ��
public:
    Circle(double r) :r(r) {}
    //�����ι��캯����Ĭ��ֵ�ǵ��õ�ʵ���ĳ�Ա����
    double cal_shape() const override {
        /////�ع������麯��,���ı����룬ʹ��const
        return 3.14 * r * r;
    }
    string get_typename_shape() const override {//�ع������麯��,������״
        return "Circle";
    }
private:
    double r;

};

int main() {

    string s;
    vector<Shape*> sha;
    ///////////////////////���ܷŴ����Զ��幹�캯������,�����Է���ָ��

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
        //////////////////////////////ָ�����ֱ��ʹ��->��ʹ����ĺ���
        cout << sha[i]->get_typename_shape();
        cout << " area: ";
        printf("%.2f", sha[i]->cal_shape());
        cout << endl;

    }

};
















