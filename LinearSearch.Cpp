#include<bits/stdc++.h>
using namespace std;

bool search(int a[], int size, int k){
     
    for (int i=0;i<5;i++){
        if(a[i]==k){
          return 1;
        }
    }
    
    return 0;
}

int main(){
    
    // Array predefined
    int a[5]={1,2,3,4,5};
    
    for(int i=0; i<5; i++){
       cout<<a[i]<<" ";
    }
    
    cout<<endl;
    
    // Target
    cout<<"Enter the Target"<<endl;
    int k;
    cin>>k;
    
    bool found = search(a,5,k);
    
    // Specifing if target found or not
    if(found){
      cout<<"ELement Found"<<endl;
    }
        
        else{
           cout<<"ELement not Found"<<endl;
        }

    return 0;
}
