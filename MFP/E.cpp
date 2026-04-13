#include <bits/stdc++.h>
using namespace std;

struct DSU{
    vector<int> p, r;

    DSU(int n){
        p.resize(n);
        r.resize(n,0);
        iota(p.begin(),p.end(),0);
    }

    int find(int x){
        if(p[x]==x) return x;
        return p[x]=find(p[x]);
    }

    void unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b) return;

        if(r[a]<r[b]) swap(a,b);
        p[b]=a;
        if(r[a]==r[b]) r[a]++;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q;
    long long D;
    cin>>N>>Q>>D;

    vector<long long> x(N),y(N);

    map<pair<long long,long long>,int> pos;

    for(int i=0;i<N;i++){
        cin>>x[i]>>y[i];
        pos[{x[i],y[i]}]=i;
    }

    DSU dsu(N);

    long long D2=D*D;

    for(int i=0;i<N;i++){
        for(long long dx=-D;dx<=D;dx++){
            for(long long dy=-D;dy<=D;dy++){

                long long nx=x[i]+dx;
                long long ny=y[i]+dy;

                if(pos.count({nx,ny})){

                    int j=pos[{nx,ny}];

                    long long dist=dx*dx+dy*dy;

                    if(dist<=D2)
                        dsu.unite(i,j);
                }
            }
        }
    }

    while(Q--){
        int s,t;
        cin>>s>>t;
        s--; t--;

        if(dsu.find(s)==dsu.find(t))
            cout<<"S\n";
        else
            cout<<"N\n";
    }
}