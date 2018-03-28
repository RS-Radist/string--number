#include <iostream>
#include <string>

using namespace std;
float sum;
float leftOper,rightOper;
char oper;

float setString(string temp)
{
    float arrInt[temp.size()];
    for (int i=0;i<temp.size();++i)
    {
        arrInt[i]=static_cast<int>(temp[i]);
    }
    for (int i=0;i<temp.size();++i)
    {
        if (temp[i]!=43)
        {
            leftOper=atoi(temp.c_str());
        }
    }
    for (int i=0;i<temp.size();++i)
    {
        if (temp[i]==43)
        {
            oper='+';
        }
        if (temp[i]==45)
        {
            oper='-';
        }
        if (temp[i]==42)
        {
            oper='*';
        }
        if (temp[i]==47)
        {
            oper='/';
        }
    }
    for (int i=0;i<temp.size();++i)
    {
        if (temp[i]==43||temp[i]==45||temp[i]==42||temp[i]==47)
        {
            int tepN=i+1;
            for(int j=tepN;j<temp.size();++j)
            {
                rightOper=atoi(temp.c_str()+tepN);
            }
        }
    }
    if (oper=='+')
        sum=leftOper+rightOper;
    if (oper=='-')
        sum=leftOper-rightOper;
    if (oper=='/')
        sum=leftOper/rightOper;
    if (oper=='*')
        sum=leftOper*rightOper;
    return sum;
}

int main()
{
    cout<<setString("40/2");
}
