#include <bits/stdc++.h>
using namespace std;

void print()
{ // this is void function which doesn't return anything
    cout << "my name is Ayush";
}

int sum(int a, int b)
{ // this is a return type function which return the value.
    return a + b;
}

// Types of Containers in C++

//  1-->  pairs

void explainPairs()
{

    pair<int, int> p = {1, 3}; // pair stores the element in pair and in place of int it can be any datatype.

    cout << p.first << " " << p.second; // in gives the element in the pair

    pair<int, pair<int, int> > q = {1, {2, 3}};

    cout << q.first << " " << q.second.first << " " << q.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

//  2--> Vectors

void explainVectors(){
    vector<int> v;    // it stores the element in the same mannner as array does but it increase it size according to data

    v.push_back(1);
    v.emplace_back(3);   // it is faster than push_back

    vector<pair<int , int> > vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);   // in emplace back pushing a pair doesn't need to write in curly braces.

    vector<int> v(5,100);  // --> [100,100,100,100,100]
    vector<int>v(5);

    vector<int> v1(5,20);   // --> [20,20,20,20,20]
    vector<int> v2(v1);     // ---> [[20,20,20,20,20]]


// the vector is [20,10,15,6,7]

    vector<int>::iterator it = v.begin();  // it starts iterating from start
    it++;
    cout<< *(it)<< " ";   // 10

    it = it + 2;
    cout<< *(it) << " ";  //6

    vector<int>::iterator it = v.end();   // it points the memory location just after the last element

    // vector<int>::iterator it = v.rend(); // it points the memory location just before the last element

   //  vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<< *(it)<< " ";
    }

    for(auto it = v.begin(); it!= v.end(); it++){     // auto keyword automatically assign the data type;
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout<<it<<" ";
    }

    // v = {10, 20, 30, 40}
    v.erase(v.begin() + 1);    // {10, 30, 40}.    erase(start , end)

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);   // {10, 20, 35}

    //Insert Function
    vector<int>v(2,100);  // {100,100}
    v.insert(v.begin(),300); // {300, 100, 100}
    v.insert(v.begin()+1, 2 , 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);  // {50 ,50}
    v.insert(v.begin(), copy.begin(), copy.end());   // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout<< v.size(); // 2
    
    // {10, 20}
    v.pop_back();  // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 --> {30, 40}   v2 --> {10, 20}

    v.clear(); // erase the entire vector

    cout<<v.empty(); // it checks whether is empty or not

}

//  3 --> List

void explainList(){
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(3);   //{2, 3}

    ls.push_front(5);     // {5, 2, 3}
    ls.emplace_front(6);  //  {6, 5, 2, 3}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// 4 --> Deque

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);  //{1}
    dq.emplace_back(2);  //{1, 2}
    dq.push_front(4);   //{4, 1, 2}
    dq.emplace_front(5);  //{5, 4, 1, 2}

    dq.pop_back();   // {5, 4, 1}
    dq.pop_front();  // {4, 1}

    dq.back();    // 4
    dq.front();   // 1

    //rest function are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

// 5 --> Stack

void explainStack(){    //it works on the principle LIFO -> last in first out
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5);  // {5, 3, 3, 2, 1}

    // in stack indexing is not allowed

    cout<<st.top();  //  print 5
    st.pop();  //  st look like {3, 3, 2, 1}
    cout<<st.size(); // 4
    cout << st.empty(); 
    stack<int>st1 , st2;
    st1.swap(st2);
}

// 6 --> Queue

void explainQueue(){   // it works on the principle FIFO -> first in first out
    queue<int> q;
    q.push(1);  // {1}
    q.push(2);  // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;

    cout<<q.back(); // print 9

    // Q is {1, 2, 9}
    cout<<q.front();

    q.pop();  // {2, 9}

    cout<<q.front();  // print 2

    // size swap empty same as stack
}

// 7 --> Priority Queue.  // who has the largest value stays at the top

void explainPriorityQueue(){
    priority_queue<int> pq;    // it is also called max heap
    pq.push(5);  // {5}
    pq.push(2);  // {5, 2}
    pq.push(8);  // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout<<pq.top(); // print 10

    pq.pop();  // {8, 5, 2}

    cout<<pq.top(); // print 8

    // size swap empty same as others

    priority_queue<int , vector<int>, greater<int>> pq;   // it is also known as min heap
    pq.push(5);  // {5}
    pq.push(2);  // {2, 5}
    pq.push(8);  // {2, 5, 8}
    pq.emplace(10);  // {2, 5, 8, 10}

    cout<< pq.top(); // print 2

}

int main()
{
    print();
    cout << endl;
    cout << sum(3, 5);
    explainPairs();
    return 0;
}