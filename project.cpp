#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,key,c;
	string input;

	cout<<"Enter string:";
	cin>>input;
    int x=input.length();
	char s1[x],s2[x+1],s3[x+1];

	cout<<"Enter the key:";
	cin>>key;
	key=key%26;

	strcpy(s1, input.c_str());

	char ch;
	for(i=0;s1[i]!='\0';i++)
    {
        ch = s1[i];
        int a;
        a =int(ch) + key;

            if (a > 122)
                {
                    c = ((a - 122 )+ 96);
                    s2[i] = char(c);
                }

            else
                {
                    s2[i]=char(a);
                }
     }

	s2[i]='\0';
	cout<<endl<<"Encrypted string:"<<s2;

	for(i=0;s2[i]!='\0';i++)
    {
        ch=s2[i];
        int a;
        a=int(ch)-key;

        if(a < 97)
            {
               c = ((a +122 )- 96);
               s3[i] = char(c);
            }

        else
            {
                s3[i]=char(a);
            }


    }

	s3[i]='\0';
	cout<<endl<<"Decrypted string:"<<s3<<endl;

	return 0;
}

thank u
