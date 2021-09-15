//
//  inbuild-queue.cpp
//  Stack
//
//  Created by AYUSH MISHRA on 22/06/1943 Saka.
//

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    cout << q.front() << endl;
    q.pop();
    q.pop();
    cout << q.front() << endl;
    cout << q.empty() << endl;
    cout << q.size() << endl;
}


