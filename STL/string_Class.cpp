#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s0;
    string s1("Hello");

    string s2="hello world";
    string s3(s2);

    

    char a[]={'a','b','c'};
    string s4(a);
    s0.append(" c++");
    cout<<s0<<" "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;
    s0="Apple";
    s1="Mango";
    cout<<s0.compare(s1)<<endl;

    if(s1>s0)
    {
        cout<<"Mango is greaterthan apple"<<endl;
    }

    string s=" I want to have apple juice";
    int index = s.find("apple");
    cout<<index<<endl;
    cout<<s<<endl;

    string word = "apple";
    int len=word.length();
    s.erase(index,len);
    
    cout<<s<<endl;

   //iterator
   for(auto it:s1)
   {
    cout<<it<<":";
   }
    
    return 0;
}