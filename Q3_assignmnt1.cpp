// Q3. String Manupulation
// WAP that
// a) Accepts a string from the user.
// b) Checks whether the string is a palindrome (ignoring spaces and case sensitivity)
// c) Counts and displays the frequenct of each character in the string(case insensitive)
// d) Replace all vowels in a string with a specific character (eg *)

#include<iostream>
#include<string.h>
using namespace std;
bool isPalin(string str,int len)
{
    int i,j;
    j=len-1;
    for(i=0;i<len/2;i++,j--)
    {
        if(str[j]==' ')
        {
            i--;
            continue;
        }
        if(str[i]==' ')
        {
            j++;
            continue;
        }      
        if(str[i]!=str[j])
        {
            int x=str[i];
            int y=str[len-1-i];
            if((x-y)==32||(x-y)==-32)
                continue;
            return false;
        }
    }
    return true;
}
string vowels(string str,int len)
{
    char ch;

    for(int i=0;i<len;i++)
    {
        ch=str[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            str[i]='*';
        }
    }   
    return str;
}

string remove_duplicacy(string str,int len)
{
    
    string output="";
    
    int i,j;
    for(int i=0;i<len;i++)
    {
        for(j=output.length()-1;j>=0;j--)
        {
            if(str[i]==output[j])
            {
                break;
            }
        }

        if(j==-1)
        {      
            output=output+str[i];
        }
    }
    
    return output;
}
int frequency(string str,char a,int len)
{
    int count=0,j;
    
    for(j=0;j<len;j++)
    {
        if(str[j]==a)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    int len;
    cout<<"Enter a String : ";
    getline(cin,str);
    len = str.length();
    // cout<<str<<len;
    if(isPalin(str,len))
    {
        cout<<"String is palindrome\n\n";
    }
    else
    {
        cout<<"Not a palindrome string\n\n";
    }
    string new_str = vowels(str,len);
    cout << "New string after replacing vowels: " << new_str << endl;
    string b=remove_duplicacy(str,len);
    cout<<"Remove dubplicacy  :   "<<b<<endl;

    // int f=frequency(str,output,len);

    for(int i=0;i<b.length();i++)
    {
        cout<<b[i]<<"="<<frequency(str,b[i],len)<<endl;
    }
    return 0;
}
