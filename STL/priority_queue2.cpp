#include<iostream>
#include <queue>
#include <cstring>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person(string s, int n)
    {
        name=s;
        age=n;
    }

};
class PersonCompare
{
    public:
    bool operator()(Person A,Person B)
    {
        return A.age<B.age;
    }
};
int main()

{
    priority_queue<Person,vector<Person>,PersonCompare> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>> name>>age;
        Person p(name,age);
        pq.push(p);
    }

    int k=2;
    for(int i=0;i<k;i++)
    {
        Person p=pq.top();
        cout<<p.age<<" "<<p.name;
        pq.pop();
        cout<<endl;
    }
    return 0;
}