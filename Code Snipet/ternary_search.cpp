// double ternary_search(double l, double r) {
//     double eps = 1e-9;             
//     while (r - l > eps) {
//         double m1 = l + (r - l) / 3;
//         double m2 = r - (r - l) / 3;
//         double f1 = f(m1);      //evaluates the function at m1
//         double f2 = f(m2);      //evaluates the function at m2
//         if (f1 < f2)
//             l = m1;
//         else
//             r = m2;
//     }
//     return f(l);                    //return the maximum of f(x) in [l, r]
// }





// int ans=INT64_MAX;
//     while (r > l) {

//         // Find the mid1 and mid2
//         int mid1 = l + (r - l) / 3;
//         int mid2 = r - (r - l) / 3;

//         if (diff(x,y,mid1) < diff(x,y,mid2)) {
//             ans=min(ans,diff(x,y,mid1));
//             r=mid2-1 ;
//         }
//         else {
//             l=mid1+1 ;
//             ans=min(ans,diff(x,y,mid2));
//         }
//     }
//     return ans;