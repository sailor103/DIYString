// myString.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream>
#include<string>
using namespace std;
class String
{
public:
	string();
	string operator + ();
	void find(String subStr);
private:
	char str1,str2,str3,str4;

};
String String::operator + ()
{
	str3=str1+str2;
};
void String::find(String subStr)
{
	cout<<subStr.find();
}

int main(int argc, char* argv[])
{
	char str1,str2,str3,str4;
	cout<<" 输入字符串str1，str2,str4 "<<endl;
	cin>>str1>>str2>>str4;
	str3=str1+str2;
	cout<<str3<<endl;
	for(int i=0;i<strlen(str3);i++)
		cout<<str3[i];
	cout<<endl;

	//比较str1与str2的大小
	if(strcmp(str1,str2)<0)
		cout<<str1<<" "<<"is more lager than"<<str2<<" "<<endl;
	void find()
		cout<<str4.find(str3)<<endl;
	return 0;
}
