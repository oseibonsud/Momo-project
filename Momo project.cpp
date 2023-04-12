#include<iostream>
using namespace std;
int main()
{
    float score,a,b,nn,mm,ab,B;
    int num1,km,kn,vv;
    {cout<<"   WELCOME TO Esteem MTN MOMO" <<endl;
    cout<<"          MENU"<<endl;   
    cout<<" 1. Transfer Money"<<endl;
    cout<<" 2. Allow Cash Out"<<endl;
    cout<<" 3. Check Balance"<<endl;
    cout<<" 4. Resetting/Change"<<endl;
    cout<<"  Choose From Menu Options:";}
    cin>>score;
    if(score==1){
    cout<<"  Transfer Money"<<endl;
    cout<<"1. MTN"<<endl;
    cout<<"2. OTHER NETWORK"<<endl;
    cout<<"  Select Network"<<endl;
    cin>>B;
    if(B==1)
    {cout<<" Enter Momo Number"<<endl;
    cin>>num1;}
    else if(B==2)
    {cout<<" Choose Network"<<endl;
    cout<<"1. Vodafone"<<endl;
    cout<<"2. AirtelTigo"<<endl;
    cin>>km;}
    if(km==1)
    {cout<<"Enter Vodafone Number"<<endl;
    cin>>num1;}
    else if(km==2)
    {cout<<"Enter AirtelTigo Number"<<endl;
    cin>>num1;}
    {
    cout<<" Enter Amount"<<endl;
    cin>>b;}
    {
    cout<<" You have choose to send an amount of "<<b <<"ghc to "<<num1;
    cout <<". Enter Momo Pin To Confirm:"<<endl;}
    cin>>a;
    cout<<"You have successfully transfer an amount of ";
    cout<<b <<"ghc to " <<num1 <<". Thanks";
    cout<<" for using MTN Momo.";
    }
    else if(score==2){
    cout<<"1. Allow Cash Out"<<endl;
    cin>>mm;
    cout<<" Cash Out Is Allowed"<<endl;
    }
    if(score==3){
    cout<<" Check Balance"<<endl;
    cout<<" Enter Your Pin"<<endl;
    cin>>ab;
    cout<<" Your balance is 1,000"<<endl;
    }
    cout<<"Thanks for Using MTN Momo"<<endl;
    cout<<" We dey for you" <<endl;
    cout<<"MTN: WELCOME TO YHE NEW WORLD";
    return 0;
    
}