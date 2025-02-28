/*// Header file for input output functions
#include <iostream>
using namespace std;

// main() function: where the execution of
// C++ program begins
int main() {
  
    // This statement prints "Hello World"
    cout << "Hello World";

    return 0;
}*/


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    float total, unit,subcharge = 0;
    string cname, perc;
    int cid;
    
    cout<<"Enter Customer ID:";
    cin>>cid;
    cout<<"\nEnter Customer name: ";
    cin>>cname;
    cout<<"\nEnter units: ";
    cin>>unit;
    
    
    if (unit < 200){
        
               total =  unit*1.2;
                perc = "@Rs 1.2";
    }
    else if (unit >= 200 && unit < 400){
        
               total =  unit*1.5;
                perc = "@Rs 1.5";
    }
     else if (unit >= 400 && unit < 600){
        
               total =  unit*1.8;
                perc = "@Rs 1.2";
    }
    
    else{
        total = unit*2;
         perc = "@Rs 2.00";
    }
    
       cout<<"\nCustomer ID NO: "<<cid;
       cout<<"\nCustomer Name: "<<cname;
       cout<<"\nUnit Consumed: "<<unit<<endl;
       cout<<"Amount charges "<<perc<<" per unit: "<<total<<endl;
    
    
    if (total <=100){
        
        total = 100;
    }
    else if (total > 400){
        
        subcharge = total*0.15;
    }
    
    else {
        total = total;
    }
    
    
    cout<<"Subcharge Amount:"<<subcharge<<endl;
       

    
    cout <<"Net Amount Paid By the Customer: "<< total + subcharge<<endl;

    return 0;
}
