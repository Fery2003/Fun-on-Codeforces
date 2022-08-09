#include <iostream>
using namespace std;

// void myFun();
// void name(string, string, string);

// void name(string name1 = "mangaya", string name2 = "guavaya", string name3 = "batatsaya")
// {
//     cout << name1 << " ah" << endl;
//     cout << name2 << " ah" << endl;
//     cout << name3 << " ah" << endl;
// }

class Vehicle
{
public:
    void honk()
    {
        cout << "beep boop?" << endl;
    }
};

class Car : public Vehicle
{
    string brand;
    string model;
    int year;

public:
    Car(string brand, string model, int year)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    string getBrand()
    {
        return brand;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    void setYear(int i)
    {
        year = i;
    }
};

int main()
{
    // cout << "Hello World! \t";
    // cout << "Bye World!" << endl;

    // const int a = 1;
    // cout << a << endl;

    // int b = 19;
    // cout << "I'm " << b << " years old!" << endl;

    // int sum = a + b;
    // cout << "I'll be " << sum << " in a couple of months!" << endl;

    // int x, y = 23, z = -47, w;
    // x = y = z = w = 50;
    // cout << x + y + z + w << endl;

    // int age, num;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "You'll be " << age + num << " in " << num << " years!" << endl;

    // float f = 2e4;
    // double e = 23e4;
    // cout << f << endl;
    // cout << e << endl;

    // bool isCodingFun = true;
    // bool arePigeonsReal = 0;
    // cout << isCodingFun << endl;
    // cout << arePigeonsReal << endl;

    // char myGrade = 'D';
    // cout << myGrade << endl;

    // string greeting1 = "Hello ";
    // string greeting2 = "World!";
    // string fullGreeting = greeting1.append(greeting2);

    // cout << fullGreeting << endl;
    // greeting1[0] = 'J';
    // cout << greeting1 << endl;
    // cout << fullGreeting.length() << endl;

    // string fullName;
    // cout << "Please type your full name: ";
    // getline(cin, fullName);
    // cout << "Your full name is: " + fullName << endl;

    // int x = 2;
    // int y = 4;
    // cout << (x > y) << endl;
    // if (y > x)
    //     cout << "Y is bigger than X!";
    // else
    //     cout << "X is bigger than Y!";
    // string result = (x > y) ? "X is bigger than Y!" : "Y is bigger than X!";
    // cout << result;
    // (x > y) ? cout << "X is bigger than Y!" : cout << "Y is bigger than X!";

    // int myNums[] = {123, 32, 124, 420, 69, 4938, 5434, 31};
    // cout << sizeof(myNums) / sizeof(int) << endl;
    // for (int n : myNums)
    //     cout << n << endl;

    // struct car {
    //     string brand;
    //     string model;
    //     int year;
    // };

    // car myCar1;
    // myCar1.brand = "BMW ";
    // myCar1.model = "X5 ";
    // myCar1.year = 2010;

    // cout << myCar1.brand << myCar1.model << myCar1.year << endl;

    // car myCar2;
    // myCar2.brand = "Ford ";
    // myCar2.model = "Mondeo ";
    // myCar2.year = 2009;

    // cout << myCar2.brand + myCar2.model << myCar2.year << endl;

    // string fullName = "ferwed aaaaaa";
    // string &name = fullName;
    // string *ptr = &fullName;
    // cout << name << endl;
    // cout << &fullName << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // *ptr = "new and improved ferwed";
    // cout << *ptr << endl;
    // cout << fullName << endl;

    // myFun();
    // name();

    Car myCar1("BMW", "X5", 2009);
    cout << myCar1.getBrand() << ' ' << myCar1.getModel() << ' ' << myCar1.getYear() << endl;
    myCar1.setYear(2016);
    cout << myCar1.getYear() << endl;

    Car myCar2("Ford", "Mondeo", 2009);
    cout << myCar2.getBrand() << ' ' << myCar2.getModel() << ' ' << myCar2.getYear() << endl;
    myCar2.honk();

    return 0;
}

// void myFun()
// {
//     cout << "seek professional mental help" << endl;
// }
