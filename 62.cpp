#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat1[100][100],mat2[100][100];
    int n1,m1,n2,m2;
    cin>>n1>>m1;
    for(int i=0;i<n1;i++)
    {
        string s1;cin>>s1;
        for(int j=0;j<m1;j++)
        {
            mat1[i][j]=s1[j]-'0';
        }
    }
    cin>>n2>>m2;
    for(int i=0;i<n2;i++)
    {
        string s1;cin>>s1;
        for(int j=0;j<m2;j++)
        {
            mat2[i][j]=s1[j]-'0';
        }
    }
    int ans=-1;
    int ansx=0,ansy=0;
    for(int x=-50;x<51;x++)
    {
        for(int y=-50;y<51;y++)
        {
            int temmpsum=0;
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<m1;j++)
                {
                    if(i+x>=0 and i+x<n2 and j+y>=0 and j+y<m2)
                    {
                        temmpsum+=mat1[i][j]*mat2[i+x][j+y];
                    }
                }
            }
            if(temmpsum>ans)
            {
                ans=temmpsum;
                ansx=x;
                ansy=y;
            }
        }
    }
    cout<<ansx<<" "<<ansy<<"\n";
    return 0;
}
