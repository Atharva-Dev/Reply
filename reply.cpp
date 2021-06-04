#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<stdlib.h>
using namespace std;
void searchquestion(string);
void getanswer(int);
int maxwords(string);
void notfound(string);
int main()
{
    //Uncomment this if you use Linux-based OS
    /*
    system("g++ -o Sort Sort_QA.cpp");
    system("./Sort");
    */
    
    //Uncomment this if you use windows OS
    /*
    system("g++ -o Sort Sort_QA.cpp&Sort.exe");
    */
    string talk;
    while(1)
    {
        cout<<"U >> ";
        getline(cin,talk);

        if(talk=="bye"||talk=="exit")
            break;
        else
        {
        searchquestion(talk);
        }
    }
    cout<<"C >> Nice to meet You , Bye "<<endl;
    //getch();
    return 0;

}
void searchquestion(string talk)
{
    string word,question;
    int line=0;
    int wmax;
    int cnt;
    ifstream que;
    que.open("question.txt");
    if(!que)
    {
        cout<<"Something Went Wrong .....\nSorry For the Inconvenience ......"<<endl;
        //getch();
        exit(0);
    }
    while(!que.eof())
    {
        cnt=0;
        getline(que,question);
        line++;
        wmax=maxwords(question);
        stringstream fw(question);
        while(fw>>word)
        {
            if(talk.find(word)!=talk.npos)
                cnt++;
            if(cnt>=wmax)
                goto next;
        }

    }
    if(!que.eof())
    {
        next:
        que.close();
        getanswer(line);
    }
    else
    {
        que.close();
        notfound(talk);
    }
}
int maxwords(string qu)
{
    int cnt=0;
    int i;
    for(i=0;qu[i]!='\0';i++)
    {
        if(qu[i]==' ')
            cnt++;
    }
    return cnt+1;
}
void getanswer(int line)
{
    int i;
    ifstream ans;
    ans.open("answer.txt");
    string s;
    for(i=0;i<line;i++)
    {
        if(!ans.eof())
            getline(ans,s);
        else
            cout<<"no"<<endl;
    }
    cout<<"C >> "<<s<<endl;
    ans.close();
}
void notfound(string data)
{
    cout<<"C >> Sorry , I don't Understand What You are Saying :( "<<endl;
    ofstream nf;
    nf.open("notfound.txt",ios::app);
    nf<<data<<"\n";
    nf.close();
}

