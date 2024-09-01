#include<bits/stdc++.h> 
using namespace std;
string bin_add(string bin1, string bin2)
{
   int carry=0, cnt=0;
   int len = bin1.size();
   string sum = "";
   for(int i=len-1; i>=0; i--)
   {
      cnt = carry;
      if(bin1[i] == '1')
         cnt = cnt+1;
      if(bin2[i] == '1')
         cnt = cnt+1;

      if(cnt%2==1)
         sum = "1" + sum;
      else
         sum = "0" + sum;

      if(cnt<2)
         carry = 0;
      else
         carry = 1;
   }
   if(carry!=0)
      sum = '1' + sum;
      return sum;
}
string bin_sub(string a, string b)
{
	int lenth=b.size();
    //One's Complement
    while (lenth--)
    {
        if(b[lenth]=='0')
            b[lenth]='1';
        else 
            b[lenth]='0';
    }
    //Two's complement
    b=bin_add(b,"00000001");
    if(b.size()>8)
        b.erase(0,1);
    string ans=bin_add(a,b);
    if(ans.size()>8)
        ans.erase(0,1);
	return ans;
	
}

int main()
{
    char f='1';
    string multiplicand,multiplier;
    // cout<<"Please enter multiplier: ";
    cin>>multiplier;
    // cout<<"Please enter the multiplicant: ";
    cin>>multiplicand;
    
    string accu="00000000";
    int n=8;
    string q=multiplier;
    while(--n)
    {
        if(multiplier[n]=='1')
            accu=bin_add(accu,multiplicand);
        else 
            accu=bin_add(accu,"00000000");

        if(accu.size()>8)
        accu.erase(0,1);
        accu=f+accu;
        q=accu[8]+q;
        accu.pop_back();
        q.pop_back();
        
    }
    accu=bin_sub(accu,multiplicand);
    q[7]='0';
    string ans=accu+q;

    // cout<<"Ans: ";
    cout<<ans<<endl;
    return 0;
}