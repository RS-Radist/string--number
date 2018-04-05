#include <iostream>
#include <string>
using namespace std;
void AddZnak(string test,char& znak,int& space);
bool Volidation (string test);
void addOperator(string test,string& oper);

int setString(string temp)
{
    int sum;
    string leftOperator;
    string rightOperator;
    int space;
    char znak;
    addOperator(temp, leftOperator);
    AddZnak(temp, znak, space);
    for (int i=space;i<temp.length();++i)
    {
        if (temp[i]!=' '&&temp[i]!='+'&&temp[i]!='-')
        {
            rightOperator+=temp[i];
        }
    }
        if (Volidation(leftOperator))
        {
            sum=atoi(leftOperator.c_str());
            return sum;
        }
    return -1;
}
bool Volidation (string test)
{
    try
    {
        for (int i=0;i<test.length();++i)
        {
            if (test[i]!='0'&&test[i]!='1'&&test[i]!='2'&&test[i]!='3'&&
                test[i]!='4'&&test[i]!='5'&&test[i]!='6'&&test[i]!='7'&&
                test[i]!='8'&&test[i]!='9')
            {
                throw (char*)"Error";
            }
        }
    }
    catch (char * temp)
    {
        cout<<"error";
        return false;
    }
    return true;
}
void addOperator(string test,string& oper )
{
    for (int i=0;i<test.length();++i) //
    {
        if (test[i]!=' '&&test[i]!='+'&&test[i]!='-')
        {
            oper+=test[i];
        }
    }
}
void AddZnak(string test,char& znak,int &space)
{
    for (int i=0;i<test.length();++i)
    {
        space++;
        if (test[i]=='+')
        {
            znak='+';
        }
        else if (test[i]=='-')
        {
            znak='-';
        }
        else if (test[i]=='*')
        {
            znak='*';
        }
        else if (test[i]=='/')
        {
            znak='/';
        }
    }
}
int main()
{
        cout<<setString("10000 ");
}
