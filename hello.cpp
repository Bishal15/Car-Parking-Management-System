


#include<iostream>
using namespace std;

//Declaration of User Defined Signature Functions
int menu();
void bus();
void rickshaw();
void cycle();
void showDetails();
void Delete();

//Global Variable
int  nor=0, nob=0, noc=0;
int count =0, amount=0;
int main()
{
        int b;
        do
        {
                switch (menu())
                {
                        case 1:  bus(); 
                                break;
                        
                        case 2:  cycle(); 
                                break;
                        
                        case 3:  rickshaw(); 
                                break;
                        
                        case 4:  showDetails(); 
                                break;

                        case 5:  Delete(); 
                                break;

                        default: cout<<"WRONG INPUT.. Please Enter Correct Input..!!"<<endl;
                                 break;
                }
                cout<<"Please enter 0 to go to main menu or any other number to exit.."<<endl;
                cout<<"Enter your choice: "<<endl;
                cin>>b;
        }
        while(b==0);
        cout<<"Thank You.. Visit Again.."<<endl;
        return 0;
}

int menu()
{
        int ch;
        cout<<"====================================="<<endl<<endl;
        cout<<"Please enter 1 for Bus @ Rs.100"<<endl;
        cout<<"Please enter 2 for Rickshaw @ Rs.70"<<endl;
        cout<<"Please enter 3 for Cycle @ Rs.50"<<endl;
        cout<<"Please enter 4 for all details"<<endl;
        cout<<"Please enter 5 to delete records"<<endl;
        cout<<"Please enter 6 for exit"<<endl<<endl;
        cout<<"====================================="<<endl<<endl;
        cout<<"Please enter your choice"<<endl;
        cin>>ch;
        return ch;
}

void bus()
{
        nob++;
        amount = amount + 100;
        count++;
}

void rickshaw()
{
        nor++;
        amount = amount + 70;
        count++;
}

void cycle()
{
        noc++;
        amount = amount + 50;
        count++;
}

void showDetails()
{
        cout<<"========================="<<endl<<endl;
        cout<<"Number of Buses: "<<nob<<endl;
        cout<<"Number of Rickshaw: "<<nor<<endl;
        cout<<"Number of Cycle: "<<noc<<endl;
        cout<<"Total number of veichles: "<<count<<endl;
        cout<<"Total collection: "<<amount<<endl;
        cout<<"========================="<<endl<<endl;
}
void Delete()
{
        nob = noc = nor = count = amount = 0;
}
