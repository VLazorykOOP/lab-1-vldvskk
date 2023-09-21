#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>

int main(){
srand(time(NULL));
std::ofstream arrayA("zavd2_A.txt");
std::ofstream result("zavd2_result.txt");
int n;
std::cout<<"Enter size of array: "; std::cin>>n;
int A[n], *ptr=&A[0], T, i;
std::vector<int>B;
std::cout<<"Enter T: "; std::cin>>T;

for(i=0;i<n;i++){
    *ptr=rand()%20-10;
    arrayA << *ptr << " ";
    std::cout<<*ptr<<" ";
    ptr++;
}
std::cout<<std::endl;
for(i=T;i<n;i++){
    if(A[i]<0) B.push_back(A[i]);
}

for(i=0;i<B.size();i++){
    std::cout<<B[i]<<" ";
}

int max=B[0];
for(i=0;i<B.size();i++){
    if(B[i]>max) max=B[i];
}
std::cout<<std::endl<<"Max: "<<max;
result<<max;

arrayA.close(); 
result.close();
    return 0;
}