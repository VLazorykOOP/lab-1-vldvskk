/*
Із одновимірного масиву А розміру N побудувати масив В із всіх від’ємних елементів.
*/


#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;

int main (){
    srand(time(NULL));
    ofstream vectorA("zavd1_A.txt");
    int n; 
    cin>>n;
    vector<int> A;
    vector<int> B;
    for (int i = 0; i< n; i++){
        A.push_back(rand() %20-10);
        vectorA << A[i] << " ";
    }
    for (int i = 0; i< n; i++){
        cout<<A[i]<<" "; 
    }
    for(int i=0;i<n;i++){
        if(A[i]<0){
            B.push_back(A[i]);
        }
    }
    cout<<endl<<"vector B: ";
    for(int i=0;i<B.size();i++)
    cout<<B[i]<<" ";
    vectorA.close();
    return 0;
}