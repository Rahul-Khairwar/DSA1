// Find the words that has largest letter from string ?

#include<iostream>
using namespace std ;
int main ()
{


    string s="what is your opinion about programming";
    string b,str;
    cout<<s<<"\n";
    for (int i=0; i<s.size(); i++)
    {

        if (s[i]!=' '){

            b.push_back(s[i]);
        }

        else{
            break;
        }
    }

    cout<<"backup"<<"\n";

    for(int i=0; i<b.size(); i++){

        cout<<b[i];
    }

    for(int i=0; i<s.size();i++)
    {
        if(s[i]!=' '){

            str.push_back(s[i]);
            if(i+1==s.size() && str.size()>b.size())
             {
                b=str;
             }
        }
        else{

            if(str.size()>b.size())
            {
                b=str;
            }
            str.clear();
        }

    
    }

    cout<<"\n final output \n"<<b;
}

