// https://www.codechef.com/START147D
// Question 1

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
	
// 	int a,b,x,y;
// 	cin>>a>>b>>x>>y;
	
// 	if(x>y){
// 	    cout<<a<<endl;
// 	}
// 	else{
// 	    cout<<b<<endl;
// 	}

// }

// Question 2 

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
	
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
        
//         int m=max({a,b,c});
//         int sum=a+b+c;
//         int result=(sum-m)+1;
        
//         if(m<=result){
//             cout<< "YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
        
//     }

// }


// Question 3
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int tot=(m*2)+1;
	    if(m>=n){
	        cout<<-1<<endl;
	        
	    }
	    else{
	        cout<<tot<<endl;
	        
	    }
	    
	}

}


