#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
// #include <math>
// #include <pair>
using namespace std;
void print_vector(vector<int>&b){ //O(n)
    for(int i =0 ; i < b.size() ;i++){
        cin >> b[i];
    }
}
int main(){
    // int n;
    // cin >> n;
    // vector<int>v(n);
    // for(int i =0 ; i < n ;i++){
    //     cin >> v[i];
    // }
    // for(int i =0 ; i < n ;i++){
    //     cout << v[i] <<  " ";
    // }
    // cout << endl;
    // vector<int>a(n);
    //  for(int i =0 ; i < n ;i++){
    //     cout << a[i] <<  " ";
    // }
    
    // Iterator
    // vector<int> :: iterator it;
    // for(it = v.begin(); it < v.end(); it++){
    //      cout << (*it) <<  " ";
    // }
    // it = it+1;
    // it++;
    // for(auto &e:v ){
    //      cout << e << endl;
    // }
    // cout << endl;

    // vector<int>a;
    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // vector<int>&b = a; // O(n)
    // for(auto &e : b){
    //     cout << e++ << " ";
    // }
    // for(auto &e : a){
    //     cout << e << " ";
    // }
    
    // cout << endl;

    // // vector
    // int m,n;
    // cin >> m >> n;
    // vector<int>v[n];
    // vector<vector<int> > v;
    // for(int i =0 ; i < m ;i++){
    //      vector<int>temp(n);
    //      for(int j =0 ; j < n ;j++){
    //          int x;
    //          cin >> x;
    //          temp.push_back(x);
    //      }
    //      v.push_back(temp);
    // }

    // for(int i =0 ; i < m ;i++){
    //     v.push_back(vector<int>(n));
    //     for(int j =0 ; j < n ;j++){
    //         int x;
    //         cin >> x;
    //          v[i].push_back(x);
    //     }
    // }

   // pair
//    pair<int,int>p;
//    p = make_pair(2,3);
//    //    p ={2,3};
//    cout << p.first << p.second << endl;
//    vector<pair<int,int> >vp;
//    vp.push_back(make_pair(1,2));
//    vp.push_back(make_pair(2,3));
//    vp.push_back(make_pair(3,1));
//    vp.push_back(make_pair(4,2));
//    vector<pair<int,int> > :: iterator it;
// //    for(it = vp.begin(); it < vp.end() ; it++){
// //       cout << (*it).first << " " << (*it).second << endl;
// //       cout << it->first << " " << it->second << endl;
// //    }
//    for(auto &it : vp){
//        cout << it.first << it.second << endl;
//    }

    // map 
    // unordered_map<string,int>m; //O(n)
    // // m.insert({2,3});
    // m["abc"] =2;
    // m["sfs"] =4;
    // m["sdf"] =5; // lengthofstring*O(logn)
    // for(auto &it:m){
    //     cout << it.first <<" " << it.second << endl;
    // }
    // // find
    // if(m.find("sdf")!=m.end()){
    //      m["sdf"]+=1;
    // }
    // for(auto &it:m){
    //     cout << it.first <<" " << it.second << endl;
    // }
 
    // stack and queue
    // stack<int>s;
    // // top
    // // pop
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // while(!s.empty()){
    //     cout << s.top()<< endl;
    //     s.pop();
    // }
    // queue<int>q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // while(!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    // cout << endl;

    // algorithms
    vector<int>v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    // lower bound 4  // binary search 
    // upperbound 5 , 7 // binary search

    // auto it = lower_bound(v.begin(),v.end(),4);
    // // int *it , vector<int>:: iterator it;
    // cout << *it << endl;
    // auto it1 = upper_bound(v.begin(),v.end(),5);
    // cout << *it1 << endl;

    // sort(v.begin(),v.end());
    // for(auto &e : v){
    //      cout << e << " " ;
    // }
    // cout << endl;

    int a = 3, b=5;
    swap(a,b);
    cout << a << "  " << b << endl;
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    // INTMAX
    // INTMIN

    // accumulate
    int sum = accumulate(v.begin(),v.end(),0);
    cout << sum << endl;

}
