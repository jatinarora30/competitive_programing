#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Student
{
    public:
    string firstname;
    string secondname;
    string roll;

    Student(string f, string s,string r)
    {
        firstname=f;
        secondname=s;
        roll=r;
    }
    bool operator==(const Student &s) const
    {
        return roll==s.roll;
    }

};

class HashFn
{
    public:
        size_t operator()(const Student &s) const
        {
            return s.firstname.length()+s.secondname.length();
        }   
};



int main()
{
    unordered_map<Student,int,HashFn> student_map;
    Student s1("Prateek","Narang","010");
    Student s2("Rahul","Kumar","023");
    Student s3("Prateek","Gupta","030");
    Student s4("Rahul","Kumar","120");
    student_map[s1]=100;
    student_map[s2]=120;
    student_map[s3]=11;
    student_map[s4]=45;

    for(auto it:student_map)
    {
        cout<<it.first.firstname<<" "<<it.first.roll<<" marks "<<it.second<<endl;
    }
    return 0;
}