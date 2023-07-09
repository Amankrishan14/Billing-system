#include<iostream>
#include<fstream>
using namespace std;
class shopping{
    private:
    int pcode;
    float price;
    float dis;
    string pname;

    public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();

};
void shopping :: menu()
{
    int choice;
    string email;
    string password;
    cout<<"\t\t______________________\n";
    cout<<"\t\t                      \n";
    cout<<"\t\t Supermarket Main menu\n";
    cout<<"\t\t______________________\n";
    cout<<"\t\t                      \n";
    cout<<"\t\t                      \n";
    cout<<"\t\t |1) Administrator |\n";
    cout<<"\t\t                      \n";
    cout<<"\t\t |2) Buyer |\n";
    cout<<"\t\t                      \n";
    cout<<"\t\t |3) Exit |\n";
    cout<<"\t\t |                   |\n";
    cout<<"\t\t | Please select |\n";
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"\t\t please login |\n";
        cout<<"\t\t Enter Email\n";
        cin>>email;
        cout<<"\t\t Password\n";
        cin>>password;
        if (email=="Krishanaman14@gmail.com" && password=="Amananku"){
            administrator();
        }
        else{
            cout<<"Invalid email/password";
        }
        break;
    }
    
    

}

