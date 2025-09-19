#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
#include<iostream>
#include<windows.h>
#include<sstream>
#include<fstream>
using namespace std;
class Bill{
    private:
    string item;
    int Quantity;
    int Rate;
    public:
    Bill(){
        this->item="";
        this->Quantity=0;
        this->Rate=0;
    }
    void setrate(int rate){
    this->Rate=rate;
    }
    void setquantity(int quantity){
        this->Quantity=quantity;
    }
    void setitem(string item){
        this->item=item;
    }
string getitem(){
    return item;
}
int getquantity(){
    return Quantity;
}
int getrate(){
    return Rate;
}

};
void  additem(Bill b){
    bool close=false;
    while(!close){
        int choice;
        cout<<"\t1.Add.\n";
        cout<<"\t2.close.\n";
        cout<<"\tEnter choice : ";
        cin>>choice;
        system ("cls");
        if(choice==2){
            close=true;
            cout<<"\tBack To Main Menu'\n";
            Sleep(3000);
        }
        else if(choice!=1){
            cout<<"invalid number please re-enter\n";
        }
        else{
            
            string item;
            int rate,quant;
            cout<<"\tEnter Item Name: ";
            cin>>item;
            cout<<"\n";
            b.setitem(item);
            cout<<"\tEnter Rate Of Item: ";
            cin>>rate;
            b.setrate(rate);
            cout<<"\n";
            cout<<"\tEnter Quantity Of Item: ";
            cin>>quant;
            b.setquantity(quant);
            cout<<"\n";
             ofstream out("D:/BILL.txt",ios::app);
             if(!out){
             cout<<"\tError: File Can't Open !\n";
             }
             else{
                cout<<"\t"<<b.getitem()<<" : "<<b.getrate()<<" : "<<b.getquantity()<<"\n";
             }
             out.close();
           cout<<"\tItem Added Sucessfully\n";
           Sleep(3000);
        }
    }
}
int main(){
    
    Bill b;
bool exit =false;
while(!exit){
    system("cls");
    int val;
    cout<<" welcome to super market billing sysytem\n";
    cout<<"***************\n";
    cout<<"\t\t1.Add Item.\n";
    cout<<"\t\t2.Print Bill.\n";
    cout<<"\t\t3.Exit.\n";
    cout<<"\t\tEnter your choice: ";
    cin>>val;
    if(val==1){
    additem(b);
    }
}

    return 0;
}