#include <iostream>
#include <string>

using namespace std;
float sum;
float leftOper,rightOper,rightOper2;
char oper_znak1,oper_znak2;

float setString(string temp)
{
    float arrInt[temp.size()];
    for (int i=0;i<temp.size();++i)
    {
        arrInt[i]=static_cast<int>(temp[i]);
    }
    for (int i=0;i<temp.size();++i)
    {
        
        if (arrInt[i]!=43||arrInt[i]!=45||arrInt[i]!=42||arrInt[i]!=47||arrInt[i]!=32)
        {
            leftOper=atoi(temp.c_str());
        }
    }
    for (int i=0;i<temp.size();++i)
    {
        if (arrInt[i]==43||arrInt[i]==45||arrInt[i]==42||arrInt[i]==47)
        {
            if (arrInt[i]==32)
            {
                while (arrInt[i]==43||arrInt[i]==45||arrInt[i]==42||arrInt[i]==47)
                oper_znak1=(char)arrInt[i];
            }
            oper_znak1=(char)arrInt[i];
            int tepN=i+1;
            if (arrInt[tepN])
            for(int j=tepN;j<temp.size();++j)
            {
                rightOper=atoi(temp.c_str()+tepN);
                
                if (arrInt[i]==43||arrInt[i]==45||arrInt[i]==42||arrInt[i]==47)
                {
                    oper_znak2=(char)arrInt[i];
                    int tepN=i+1;
                    rightOper2=atoi(temp.c_str()+tepN);
                }
            }
        }
    }
    if (!rightOper)
    {
        sum=leftOper;
    }
    if(rightOper)
    {
        if (oper_znak1=='+')
            sum=leftOper+rightOper;
        if (oper_znak1=='-')
            sum=leftOper-rightOper;
        if (oper_znak1=='/')
            sum=leftOper/rightOper;
        if (oper_znak1=='*')
            sum=leftOper*rightOper;
    }
//    if (rightOper2!=0&&rightOper!=0&&leftOper!=0)
//    {
//        if (oper_znak1=='+'||oper_znak2=='+') // +
//            sum=leftOper+rightOper+rightOper2;
//        if (oper_znak1=='-'||oper_znak2=='-') // -
//            sum=leftOper-rightOper-rightOper2;
//        if (oper_znak1=='/'||oper_znak2=='/') // /
//            sum=leftOper/rightOper/rightOper2;
//        if (oper_znak1=='*'||oper_znak2=='*') // *
//            sum=leftOper*rightOper*rightOper2;
//
//        if (oper_znak1=='+'||oper_znak2=='-')
//            sum=leftOper+rightOper-rightOper2;
//        if (oper_znak1=='+'||oper_znak2=='*')
//            sum=leftOper+rightOper*rightOper2;    // +
//        if (oper_znak1=='+'||oper_znak2=='/')
//            sum=leftOper+rightOper/rightOper2;
//
//        if (oper_znak1=='-'||oper_znak2=='+')
//            sum=leftOper-rightOper+rightOper2;
//        if (oper_znak1=='-'||oper_znak2=='*')
//            sum=leftOper-rightOper*rightOper2;    // -
//        if (oper_znak1=='-'||oper_znak2=='/')
//            sum=leftOper-rightOper/rightOper2;
//
//        if (oper_znak1=='*'||oper_znak2=='+')
//            sum=leftOper*rightOper+rightOper2;
//        if (oper_znak1=='*'||oper_znak2=='-')
//            sum=leftOper*rightOper-rightOper2;    // *
//        if (oper_znak1=='*'||oper_znak2=='/')
//            sum=leftOper*rightOper/rightOper2;
//
//
//        if (oper_znak1=='/'||oper_znak2=='+')
//            sum=leftOper/rightOper+rightOper2;
//        if (oper_znak1=='/'||oper_znak2=='-')
//            sum=leftOper/rightOper-rightOper2;    // /
//        if (oper_znak1=='/'||oper_znak2=='*')
//            sum=leftOper/rightOper*rightOper2;
//    }
//    if (sum>2147483647)
//    {
//        cout<<"qq";
//        __int64_t _sumUI;
//        _sumUI=static_cast<__int64_t>(sum);
//        return _sumUI;
//    }
    return sum;
}

int main()
{
    
        cout<<setString("1000 + 44");
    
   
    

}
