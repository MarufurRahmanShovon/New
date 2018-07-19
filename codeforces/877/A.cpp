#include<bits/stdc++.h>


using namespace std;

int one(string s)
{
     int count = 0;
    size_t nPos = s.find("Danil");
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("Danil", nPos+1);
    }

    return count;

}
int two(string s)
{
     int count = 0;
    size_t nPos = s.find("Olya");
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("Olya", nPos+1);
    }

    return count;
}
int three(string s)
{
     int count = 0;
    size_t nPos = s.find("Slava");
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("Slava", nPos+1);
    }

    return count;
}
int four(string s)
{
    int count = 0;
    size_t nPos = s.find("Ann");
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("Ann", nPos+1);
    }

    return count;
}
int five(string s)
{
     int count = 0;
    size_t nPos = s.find("Nikita");
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("Nikita", nPos+1);
    }

    return count;
}
int main()
{
    string s;
    cin>>s;
    int one1=one(s),two1=two(s),three1=three(s),four1=four(s),five1=five(s);
    if((one1==1&&!two1&&!three1&&!four1&&!five1)||(!one1&&two1==1&&!three1&&!four1&&!five1)||(!one1&&!two1==1&&three1&&!four1&&!five1)||(!one1&&!two1&&!three1&&four1==1&&!five1)||(!one1&&!two1&&!three1&&!four1&&five1==1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
