//
//  template - pair.cpp
//  Stack
//
//  Created by AYUSH MISHRA on 08/06/1943 Saka.
//

#include<iostream>
using namespace std;

tamplate <typename T>

class Pair
{
    T x;
    T y;
    
public:
    
    void setx(T x)
    {
        this -> x = x;
    }
    T getx()
    {
        return x;
    }
    
    void sety(T y)
    {
        this -> y = y;
    }
    
    T gety()
    {
        return y;
    }
};

int main()
{
    Pair <int> s1;
    
    s1.setx(10);
    s1.sety(20);
    
    cout << s1.getx() << " " << s1.gety() << endl;
    
    Pair <double> s2;
    
    s2.setx(10.88);
    s2.sety(20.88);
    
    cout << s2.getx() << " " << s2.gety() << endl;
}
