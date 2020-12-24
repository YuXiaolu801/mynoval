# 字符串比较c++代码
#include < iostream >

#include < string >

using namespace std;

void swap(string &x,string &y);

int main()

{

string str1,str2;

cout<<"输入str1:";

cin>>str1;

cout<<"输入str2:";

cin>>str2;

swap(str1,str2);

cout<<"str1="<<str1<<endl;

cout<<"str2="<<str2<<endl;

return 0;

}

void swap(string &x ,string &y)

{

string temp;

temp=x;

x=y;

y=temp;

} 
