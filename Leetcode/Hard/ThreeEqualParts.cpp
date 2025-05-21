class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
      int cnt1=0,indx1=0,indx2=0;
      for(int i=0;i<arr.size();i++)
      if(arr[i]==1)
      cnt1++;
      vector<int>ans(2);
      if(cnt1%3!=0)
        {
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        else
        {
            int cnttemp=0;
            for(int i=0;i<arr.size();i++)
            {
                if(arr[i]==1)
                cnttemp++;
                if(cnttemp==cnt1/3)
                {
                    indx1=i;
                    break;
                }
            }
            cnttemp=0;
            for(int i=indx1+1;i<arr.size();i++)
            {
                if(arr[i]==1)
                cnttemp++;
                if(cnttemp==cnt1/3)
                {
                    indx2=i;
                    break;
                }
            }
            cout<<cnt1<<endl;
            cout<<indx1<<" "<<indx2<<endl;
            string s1,s2,s3;
            s1.clear();
            s2.clear();
            s3.clear();
            bool found=false;
            for(int i=0;i<=indx1;i++)
            {
                if(arr[i]==0&&!found)
                {}
                else if(arr[i]==1)
                {
                    found=true;
                    s1+=arr[i]+'0';
                }
                else
                s1+=arr[i]+'0';
            }
            found=false;
            for(int i=indx1+1;i<=indx2;i++)
            {
                if(arr[i]==0&&!found)
                {}
                else if(arr[i]==1)
                {
                    found=true;
                    s2+=arr[i]+'0';
                }
                else
                s2+=arr[i]+'0';
            }
            found=false;
            for(int i=indx2+1;i<arr.size();i++)
            {
                if(arr[i]==0&&!found)
                {}
                else if(arr[i]==1)
                {
                    found=true;
                    s3+=arr[i]+'0';
                }
                else
                s3+=arr[i]+'0';
            }
            cout<<s1<<" "<<s2<<" "<<s3<<endl;
            int x=0;
            for(int i=s3.size()-1;i>=0;i--)
            {
                    if(s3[i]=='0')
                    x++;
                    else
                    break;
            }
            cout<<x<<endl;
            for(int i=0;i<x;i++)
            {
                s1+=arr[indx1+1+i]+'0';
                s2+=arr[indx2+1+i]+'0';
            }
                if(s1==s2&&s2==s3)
                {
                    ans[0]=indx1+x;
                    ans[1]=indx2+1+x;
                }
                else
                {
                    ans[0]=-1;
                    ans[1]=-1;
                }
                return ans;

        }
    }
};