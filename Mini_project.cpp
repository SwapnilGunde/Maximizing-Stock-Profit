#include<bits/stdc++.h>
using namespace std;
int z,x;
int max_p(int arr[],int n){
    
    
    
     int max_profit=arr[1]-arr[0];

    int spc,tp,min_price=arr[0];


    for(int p=0;p<n;p++){
        
        spc=arr[p];
        if(spc<=min_price){
        	z=p+1;
            min_price = spc;
        }
        

        tp=spc-min_price;
        if(tp!=0)
			cout<<"\nIf We Sell the Stock at Day "<<p+1<<" ,We get profit of Rs."<<tp;
		
       if(tp>0){
	   
        if(tp>=max_profit){
        	x=p+1;
            max_profit=tp;   
        }
    }
    if(tp<0){
    	x=p+1;
    	max_profit=tp;
	}
        
      
    }
    return max_profit;

}

int main(){
    int n;
    char m;
    do{
	
    cout<<"\nEnter the number of stocks available: ";
    cin>>n;
    cout<<endl;
    if(n<2){
        cout<<"Minimum two stock prices are required to calculate max profit"<<endl;
        return 0;
    }

    int pList[n];
    
    for(int i=0;i<n;i++)
	{
		cout<<"Enter the stock price on Day "<<i+1<<" : ";
        cin>>pList[i];
    }
    
    int a=max_p(pList,n);
    if(a>0){
	
    cout<<"\n\n----------------------------";
    cout<<"\nMaximum Profit is Rs."<<a<<endl;
    cout<<"------------------------------";
    cout<<"\n\n\n";}
    if(a<0){
    	cout<<"\n\n----------------------------";
    cout<<"\nMinimum loss is Rs."<<a<<endl;
    cout<<"------------------------------";
    cout<<"\n\n\n";
	break;}
	
    if(a!=0)
    {
	
    if(z!=n){
        cout<<"\n-----------------------";
		cout<<"\nBuy the stock on DAY "<<z;
       
    }
	cout<<"\nSell the stock on DAY "<<x;
    cout<<"\n-------------------------"<<endl;
	}
	cout<<"\n\nEnter y if you want to find the maximum profit for another stock price list else enter n"<<endl;
	cin>>m;
	}while(m!='n'&& m!='N');
}
