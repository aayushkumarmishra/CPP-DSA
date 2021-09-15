//
//  vector-use.cpp
//  Vector
//
//  Created by AYUSH MISHRA on 23/06/1943 Saka.
//

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //dynamic
    //vector <int> *vi = new vector<int> ();
    
    vector <int> v;
    
    for(int i=0;i<100;i++)
    {
        cout << "Capacity : " << v.capacity() << endl;
        cout << "Size : " << v.size() << endl;
        v.push_back(i+1);
    }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    
    // here we change value by index number
    // dont use [] this for inserting value
    v[0] = 5;
    v[4] = 90;
    
    v.push_back(60);
    v.push_back(70);
    
    
    
    // here we use for loop to print the value
    // this is more safer than at methord and index methord
    
    /*for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
     */
    
    
   /*cout << v[0] << endl;
   cout << v[1] << endl;
   cout << v[2] << endl;
   cout << v[3] << endl;
   cout << v[4] << endl;
    // give us garbage value so dont do this
   cout << v[5] << endl;
    
    cout << "Size :" << v.size() << endl;
    

    // this another and safer way to get the vector element (at is fuction to get value at any index)
    cout << v.at(0) << endl;
    // this doest give any garbage vale its gives you warning so thats why it is safer than index method
    cout << v.at(6) << endl;
    */
    
    
    
}

