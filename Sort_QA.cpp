#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    int line=0;
    int i,j;
    int check;
    fstream nxt,nwt;
    ifstream qu,an;
    string tmp,max="*";
    string ans,tmp2;
    qu.open("question.txt");
    nxt.open("newQue.txt",ios::out);
    nwt.open("newAns.txt",ios::out);
    while(!qu.eof())
    {
        getline(qu,tmp);
        line++;
        //cout<<line<<" ";
    }
    int che[line]={0};
    cout<<endl;
    qu.close();
    for(i=0;i<line;i++)
    {
        qu.open("question.txt");
        an.open("answer.txt");
        j=0;max="";
        while(!qu.eof())
        {
            getline(qu,tmp);
            getline(an,tmp2);
            if((tmp.size()>=max.size())&&!che[j])
             {
                 max=tmp;
                 ans=tmp2;
                 check=j;
             }
             j++;
             //cout<<j<<" "<<check<<"  ";

        }
        che[check]=1;
        qu.close();
        an.close();
        nxt<<max<<"\n";
        nwt<<ans<<"\n";
        //cout<<i<<" ";
    }
    nxt.close();
    nwt.close();
    cout<<endl;
    remove("question.txt");
    remove("answer.txt");
    i=rename("newAns.txt","answer.txt");
    j=rename("newQue.txt","question.txt");
    //cout<<"DONE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"<<i<<"\n"<<j<<endl;
}

