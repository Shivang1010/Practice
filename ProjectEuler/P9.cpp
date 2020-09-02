// For Eulerr ANswer
// C++ program to find Pythagorean  
// Triplet of given sum. 
#include <bits/stdc++.h> 
using namespace std; 
void pythagoreanTriplet(long long int n) 
{   // Considering triplets in  sorted order. The value of first element in sorted  
    // triplet can be at-most n/3. 
    for (long long int i = 1; i <= n / 3; i++)  
    {    // The value of second element must be less than equal to n/2 
        for (long long int j = i + 1; j <= n / 2; j++)  
        { 
            long long int k = n - i - j; 
            if (i * i + j * j == k * k)  
            { 
                long long int sum=i*j*k;
                cout<<sum<<"\n";
               // cout << i << ", "
                 //    << j << ", "
                   //  << k; 
                return; 
            } 
        } 
    }  
    cout << "-1"; 
} 
// Driver Code 
int main() 
{ 
    long long int cases,n;
    cin >> cases;
    while(cases>0){
    cin >> n;
    pythagoreanTriplet(n); 
    cases--;
    }
    return 0; 
} 

//For HackerRank

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long long product, temp;
    int a, b, c, n, t; 
    cin >> t; 
    for(int i = 0; i < t; i++){
        cin >> n;
        product = -1; 
        for(int a = 1, b, c; a <= n/3; a++){
            b = (n*n - 2*n*a)/(2*n - 2*a);
            c = n - a - b; 
            if(c*c == (a*a + b*b)){
                temp = a*b*c; 
                if(temp > product){
                    product = temp; 
                }
            }
        }
        cout << product << endl;
    }
    return 0;
}

