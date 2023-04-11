#include <bits/stdc++.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
using namespace std;
int digit(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int h,m,s,a,e;
    e=a=0;
    while(e==0){
        cout<<"Enter hour: ";
        cin>>h;
        cout<<"Enter minutes: ";
        cin>>m;
        cout<<"Enter seconds: ";
        cin>>s;
        if(h<24 && m<60 && s<60){
            e++;
        }
        else{
            system("cls");
        }
    }
    while(a==0){
        system("cls");
        cout<<"############"<<endl;
        cout<<"#          #"<<endl;
        cout<<"#          #"<<endl;
        if(digit(h)+digit(m)+digit(s)==3)
        cout<<"#  "<<h<<':'<<m<<':'<<s<<"   #"<<endl;
        else if(digit(h)+digit(m)+digit(s)==4)
        cout<<"#  "<<h<<':'<<m<<':'<<s<<"  #"<<endl;
        else if(digit(h)+digit(m)+digit(s)==5)
        cout<<"#  "<<h<<':'<<m<<':'<<s<<" #"<<endl;
        else
        cout<<"# "<<h<<':'<<m<<':'<<s<<" #"<<endl;
        cout<<"#          #"<<endl;
        cout<<"#          #"<<endl;
        cout<<"############"<<endl;
        Sleep(1000);
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>24){
            h=0;
        }
    }
    return 0;
}
