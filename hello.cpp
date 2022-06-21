#include<iostream>
#include<stack>
using namespace std;
int main()
{
        string s = "(a+b*(c-d))";
        bool isRed = true;
        stack<char> st;
        for(int i=0; i<s.length();i++)
        {
                char c = s[i];
                if(c == '(' || c == '+' || c == '-' || c == '*' || c == '/')
                        st.push(c);
                else 
                {
                        if(c == ')')
                        {
                                isRed = true;
                                while (st.top() != '(')
                                {
                                        if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                                        {
                                                isRed = false;
                                        }   
                                        st.pop();
                                }
                                st.pop();       
                        } 
                }
        }
        if(isRed)
        {
                cout<<"True"<<endl;
        }
        else
        {
                cout<<"False"<<endl;
        }
        
        return 0;
}
