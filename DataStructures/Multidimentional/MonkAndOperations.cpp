#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll xd1=0;
ll xd2=0;
 
int n,m;
 
int mat[1001][1001];
ll vod1,vod2,ver1,ver2;
 
 
int main()
{
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &mat[i][j]);
        }
    }
 
    scanf("%lld %lld %lld %lld", &vod1, &vod2, &ver1, &ver2);
 
 
    for(int i=0;i<n;i++){
        ll tzbir=0;ll oz=0;
        for(int j=0;j<m;j++){
            tzbir+=abs(mat[i][j]+vod1);
            oz+=abs(mat[i][j]);
        }
 
        ll tp=m*abs(vod2);
        ll kand=max(tp,tzbir);
 
        xd1+=max(kand,oz);
 
    }
    for(int i=0;i<m;i++){
        ll tzbir=0; ll oz=0;
        for(int j=0;j<n;j++){
            tzbir+=abs(ver1+mat[j][i]);
            oz+=abs(mat[j][i]);
        }
 
        ll tp=n*abs(ver2);
        ll kand=max(tp,tzbir);
        xd2+=max(kand,oz);
 
    }
    printf("%lld",max(xd1,xd2));
    
    
    return 0;
}