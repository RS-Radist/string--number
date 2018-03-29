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
        if (arrInt[i]==43||arrInt[i]==45||arrInt[i]==42)
        {
            oper=(char)arrInt[i];
            int tepN=i+1;
            for(int j=tepN;j<temp.size();++j)
            {
                rightOper=atoi(temp.c_str()+tepN);
            }
        }
    }
    if (!rightOper)
    {
        sum=leftOper;
        return leftOper;
    }
    else
    {
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
    return sum;
}

int main()
{
    cout<<setString("10050-50");
}
