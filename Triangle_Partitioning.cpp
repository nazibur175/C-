#include<bits/stdc++.h>
using namespace std;

double triangleRatio (double ab,double ac,double bc,double ad)
{
    double ae=(ac*ad)/ab, de=(bc*ad)/ab,s1,s2;

    s1 = (ab+ac+bc)/2.0;
    s2 = (ad+ae+de)/2.0;

    double areaBig = sqrt(s1 * (s1-ab) * (s1-ac) * (s1-bc));
    double areaSmall = sqrt(s2 * (s2-ad) * (s2-ae) * (s2-de));

    double areaTrap = areaBig-areaSmall;

    double ratio = areaSmall/areaTrap;

    return ratio;

}

double BS(double ab,double ac,double bc,double ratio)
{
    double low, high, mid,ad ;

    low = 0.0;
    high = ab;

    for(int i=0; i<100; i++)
    {
        mid = (low + high)/2.0;
        ad = mid;
        if(triangleRatio(ab,ac,bc,ad)>ratio)
            high = mid ;
        else
            low = mid;

    }
    return ad ;
}

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        double ab,bc,ac,ratio;
        scanf("%lf %lf %lf %lf",&ab,&bc,&ac,&ratio);

        printf("Case %d: %lf\n",i,BS(ab,bc,ac,ratio));

    }

    return 0;
}
