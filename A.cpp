#include<bits/stdc++.h>
using namespace std;
#define M 10000000
int marked[M/64+2];
#define on(x) (marked[x/64]&(1<<((x%64)/2)))
#define mark(x) marked[x/64] |=(1<<((x%64)/2))
vi primes;

void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(!on(i)){
                primes.push_back(i);
            for(int j=i*i;j<=n;j+=(i+i))
            {
                mark(j);
            }
        }
    }
}
using ll=long long;
using vi=vector<int>;
using pi=pair<int,int>;
using vpi=vector<pi>;
bool check(int N,int pos)
{
    return (N & (1<<pos));
}

int Set(int N,int pos)
{
    return N=(N |(1<<pos));
}

void bitwise(long long n)
{
    long long  i,j;
    long long lim=sqrt(n);
    pr.push_back(2);

    for(i=3; i<=n; i+=2)
    {
        if(check(mark[i/32],i%32)==0)
        {

            pr.push_back(i);
            if(i<=lim)
            {
                for(j=i*i; j<=n; j+=2*i)
                {
                    mark[j/32]= Set(mark[j/32],j%32);

                }
            }
        }
    }
}

#define inf 1e10
int main()
{






    return 0;
}
