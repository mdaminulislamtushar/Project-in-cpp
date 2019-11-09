//A project in c++
//Vehicle Reservation Management System
//Coded By Md Aminul Islam Tushar
//Department of CSE
//Batch-54
//Asian University of Bangladesh
#include<bits/stdc++.h>
#include<windows.h>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
using namespace std;

class Vehicle
{
protected:
    double login;
    double seat_number;
    string pass;
    string pas;
    string name;
    double ticket_quantity;
    string travel_date;
    double user_id;
    string address;
    string res_pur;
    string to;
    long long int NID;
    long long int phn;
    string E_mail;
    double truck_quantity;
public:
    void manu()
    {
        cout<<endl<<"\t\t\t\t>>>>>>>> Menu <<<<<<<<<\n"<<endl;
        cout<<"\n\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\t\t\t1.Bus Reservation"<<endl;
        cout<<"\t\t\t2.Truck Reservation"<<endl;
        cout<<"\t\t\t3.Contact with us"<<endl;
        cout<<"\t\t\t4.Quit"<<endl;
        cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\n\nEnter your the option number to go:";
    }
    void header_0()
    {
        cout<<endl<<"\t\t\t"<<"::::::::Welcome to Vehicle Reservation Service::::::::"<<endl;
        cout<<"\t\t\t|"<<"\t\t"<<"Powered by CSE-54 of AUB"<<"             |"<<endl;
        cout<<"\t\t\t|"<<"\t\t\t"<<">(VRS)<"<<"                      |"<<endl;
        cout<<"\t\t\t......................................................"<<endl<<endl<<endl;
    }
    void schedule()
    {
        cout<<"If you wanna to do,you must need to re-confirm everything."<<endl;
        cout<<"Press 1 to go main page:";
    }
    void details()
    {
        cout<<"\t\t\tDept. of CSE,"<<endl<<"\t\t\tAsian University of Bangladesh,"<<endl<<"\t\t\tAshulia , Savar ,Dhaka."<<endl<<"\t\t\tPhone:01102558558 ,"<<endl;
        cout<<"\t\t\tE-mail:cse54@aub-edu.bd"<<endl;
        cout<<"Press 1 to continue from Homepage.";
    }
    void quit()
    {
        while(0)
            break;
    }
    string time()
    {
        string t;
        double T;
        cout<<"\n\t\t\tChoose Time "<<endl;
        cout<<"\t\t\t1. 7am "<<endl<<"\t\t\t2. 8:30am "<<endl<<"\t\t\t3. 10am "<<endl<<"\t\t\t4. 11:30am "<<endl;
        cout<<"\t\t\t5. 1pm "<<endl<<"\t\t\t6. 3pm "<<endl<<"\t\t\t7. 4:30pm "<<endl<<"\t\t\t8. 6pm "<<endl;
        cout<<"\t\t\t9. 8pm "<<endl<<"\t\t\t10. 9pm "<<endl<<"\t\t\t11. 10pm "<<endl<<"\t\t\t12. 12pm "<<endl;
        cout<<"\n\nWhich time you prefer:";
        cin>>T;
        if(T==1)
        t="7am";
        else if(T==2)
        t="8:30am";
        else if(T==3)
        t="10";
        else if(T==4)
        t="11:30am";
        else if(T==5)
        t="1pm";
        else if(T==6)
        t="3pm";
        else if(T==7)
        t="4:30pm";
        else if(T==8)
        t="6pm";
        else if(T==9)
        t="8pm";
        else if(T==10)
        t="9pm";
        else if(T==11)
        t="10pm";
        else if(T==12)
        t="12pm";
        else
        cout<<"Wrong keyword";
        return t;
    }
} obj0;

class Bus : public Vehicle
{
protected:
    double enter;
    string strtemp;
public:
    void header()
    {
        cout<<endl<<"\t\t\t"<<"::::::::Welcome to Online Bus Ticket Service::::::::"<<endl;
        cout<<"\t\t\t|"<<"\t\t"<<"Powered by CSE-54 of AUB"<<"           |"<<endl;
        cout<<"\t\t\t|"<<"\t\t\t"<<">(OBTS)<"<<"                   |"<<endl;
        cout<<"\t\t\t...................................................."<<endl<<endl<<endl;
    }
    void loading()
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n"<<"\t\t\t\tLoading.";
        for(int i=0; i<5; i++)
        {
            cout<<" . ";
            Sleep(80);
        }
    }
    void manu()
    {
        header();
        cout<<endl<<"\t\t\t\t\t>>>>>>>> Menu <<<<<<<<<\n"<<endl;
        cout<<"\n\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\t\t\t1.Available Bus Service"<<endl;
        cout<<"\t\t\t2.Buy Ticket"<<endl;
        cout<<"\t\t\t3.Change Schedule"<<endl;
        cout<<"\t\t\t4.Contact with us"<<endl;
        cout<<"\t\t\t5.Quit"<<endl;
        cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\n\nEnter your the option number to go:";
    }
    double Enter()
    {
        cin>>enter;
        return enter;
    }
    double available_bus()
    {
        cout<<"\t\t1.Ena Paribahan"<<endl;
        cout<<"\t\t2.Hanif Paribahan"<<endl;
        cout<<"\t\t3.Shyamoli Paribahan"<<endl;
        cout<<"\nSelect one to view details:";
    }
    double buy_ticket()
    {
        cout<<"\t\t1.Ena Paribahan"<<endl;
        cout<<"\t\t2.Hanif Paribahan"<<endl;
        cout<<"\t\t3.Shyamoli Paribahan"<<endl;
        cout<<"\nSelect any one from these:";
    }
    double discount(double a,double b)
    {
        double discnt;
        discnt=(a*b)/100;
        return discnt;
    }
    void user_details(string name,double ticket_quantity,string travel_date,double user_id,string time)
    {
        ofstream bus_user;
        bus_user.open("Bus_User.txt");
        bus_user<<name<<endl;
        bus_user<<ticket_quantity<<endl;
        bus_user<<travel_date<<endl;
        bus_user<<user_id<<endl;
        bus_user<<time<<endl;
        bus_user.close();
    }
} obj1;

class Hanif: public Bus
{
protected:
    double ticket_price1=480;
    double ticket_price2=600;
    double ticket_price3=500;
    double ticket_price4=650;
public:
    double details()
    {
        cout<<"\n\tName: Hanif Paribahan"<<endl;
        cout<<"\tServices:"<<endl;
        cout<<"\n\tTicket price:"<<endl;
        cout<<"\t1.DHAKA-CHITTAGONG-COX BAZAR-> BDT.650TK"<<endl;
        cout<<"\t2.DHAKA-RANGPUR-> BDT.600TK"<<endl;
        cout<<"\t3.Dhaka -Sylhet-> BDT.500TK"<<endl;
        cout<<"\t4.DHAKA-NATORE-> BDT.480TK"<<endl;
        cout<<"\n\tContact:"<<endl;
        cout<<"\tGabtoli Counter, Dhaka. Phone-8011759"<<endl;
        cout<<"\tUttara Counter, Dhaka. Phone-01711-974073"<<endl;
        cout<<"\tChittagong Office -2 :  Bahaddarhat,Chittagong, Phone: 656088,0171310747"<<endl;
        cout<<"\tChittagong Office -3 : Cinema Palace,Chittagong, Phone: 603430,01713107146"<<endl;
        cout<<"\tDargagate Counter, Sylhet. Phone-01711-922419"<<endl;
        cout<<"\tRangpur: Phone-01713402650"<<endl;
        cout<<"\nPress 1 to Buy ticket OR press 0 to go Homepage:";
    }
    double buy()
    {
        cout<<"\n\t1.DHAKA-CHITTAGONG-COX BAZAR-> BDT.650TK"<<endl;
        cout<<"\t2.DHAKA-RANGPUR-> BDT.600TK"<<endl;
        cout<<"\t3.Dhaka -Sylhet-> BDT.500TK"<<endl;
        cout<<"\t4.DHAKA-NATORE-> BDT.480TK"<<endl;
        cout<<"\n\nSelect your destination:";
    }
} obj2;

class Ena: public Bus
{
private:
    double ticket_price1=500;
    double ticket_price2=620;
    double ticket_price3=520;
    double ticket_price4=650;
public:
    double details()
    {
        cout<<"\n\tName: Ena Paribahan"<<endl;
        cout<<"\tServices:"<<endl;
        cout<<"\n\tTicket price:"<<endl;
        cout<<"\t1.DHAKA-CHITTAGONG-COX BAZAR-> BDT.650TK"<<endl;
        cout<<"\t2.DHAKA-RANGPUR-> BDT.620TK"<<endl;
        cout<<"\t3.Dhaka -Sylhet-> BDT.520TK"<<endl;
        cout<<"\t4.DHAKA-NATORE-> BDT.500TK"<<endl;
        cout<<"\n\tContact:"<<endl;
        cout<<"\tGabtoli Counter, Dhaka. Phone-8021759"<<endl;
        cout<<"\tUttara Counter, Dhaka. Phone-01911-974073"<<endl;
        cout<<"\tChittagong Office -2 :  Bahaddarhat,Chittagong, Phone: 658088,0191310747"<<endl;
        cout<<"\tChittagong Office -3 : Cinema Palace,Chittagong, Phone: 603330,01813107146"<<endl;
        cout<<"\tDargagate Counter, Sylhet. Phone-01511922419"<<endl;
        cout<<"\tRangpur: Phone-01613402650"<<endl;
        cout<<"\nPress 1 to Buy ticket OR press 0 to go Homepage:";
    }
    double buy()
    {
        cout<<"\n\t1.DHAKA-CHITTAGONG-COX BAZAR-> BDT.650TK"<<endl;
        cout<<"\t2.DHAKA-RANGPUR-> BDT.620TK"<<endl;
        cout<<"\t3.Dhaka -Sylhet-> BDT.520TK"<<endl;
        cout<<"\t4.DHAKA-NATORE-> BDT.500TK"<<endl;
        cout<<"\n\nSelect your destination:";
    }
} obj3;

class Shyamoli: public Bus
{
private:
    double ticket_price1=490;
    double ticket_price2=610;
    double ticket_price3=520;
    double ticket_price4=630;
public:
    double details()
    {
        cout<<"\n\tName: Shyamoli Paribahan"<<endl;
        cout<<"\tServices:"<<endl;
        cout<<"\n\tTicket price:"<<endl;
        cout<<"\t1.DHAKA-CHITTAGONG-COX BAZAR-> BDT.630TK"<<endl;
        cout<<"\t2.DHAKA-RANGPUR-> BDT.610TK"<<endl;
        cout<<"\t3.Dhaka -Sylhet-> BDT.520TK"<<endl;
        cout<<"\t4.DHAKA-NATORE-> BDT.490TK"<<endl;
        cout<<"\n\tContact:"<<endl;
        cout<<"\tGabtoli Counter, Dhaka. Phone-8013759"<<endl;
        cout<<"\tUttara Counter, Dhaka. Phone-01771-974073"<<endl;
        cout<<"\tChittagong Office -2 :  Bahaddarhat,Chittagong, Phone: 656888,0151310747"<<endl;
        cout<<"\tChittagong Office -3 : Cinema Palace,Chittagong, Phone: 604430,01513107146"<<endl;
        cout<<"\tDargagate Counter, Sylhet. Phone-01755-922419"<<endl;
        cout<<"\tRangpur: Phone-01713466650"<<endl;
        cout<<"\nPress 1 to Buy ticket OR press 0 to go Homepage:";
    }
    double buy()
    {
        cout<<"\n\t1.DHAKA-CHITTAGONG-COX BAZAR-> BDT.630TK"<<endl;
        cout<<"\t2.DHAKA-RANGPUR-> BDT.610TK"<<endl;
        cout<<"\t3.Dhaka -Sylhet-> BDT.520TK"<<endl;
        cout<<"\t4.DHAKA-NATORE-> BDT.490TK"<<endl;
        cout<<"\n\nSelect your destination:";
    }
} obj4;
class Platinum
{
private:
    double b=7;
public:
    double platinum()
    {
        double a=1001;
        return a;
    }
    void user()
    {
        cout<<"\n\n\t\t\t%%%% Your Ticket %%%%";
        cout<<"\n\n**You are our Platinum user & got 7% Discount."<<endl;
    }
} obj5;
class Diamond
{
private:
    double b=5;
public:
    double diamond()
    {
        double a=1002;
        return a;
    }
    void user()
    {
        cout<<"\n\n\t\t\t%%%% Your Ticket %%%%";
        cout<<"\n\n**You are our Diamond user & got 5% Discount."<<endl;
    }
} obj6;
class Golden
{
private:
    double b=3;
public:
    double golden()
    {
        double a=1003;
        return a;
    }
    void user()
    {
        cout<<"\n\n\t\t\t%%%% Your Ticket %%%%";
        cout<<"\n\n**You are our Golden user & got 3% Discount."<<endl;
    }
} obj7;
class Normal
{
private:
    double b=0;
public:
    double normal()
    {
        double a=1004;
        return a;
    }
    void user()
    {
        cout<<"\n\n\t\t\t%%%% Your Ticket %%%%";
    }
} obj8;

class Login : public Vehicle
{
private:
    int a=1;
public:
    double log()
    {
        cout<<endl<<"\t->Password:";
        cin>>pass;
        ofstream password;
        password.open("login.txt");
        password<<"vrms";
        password.close();
        ifstream file("login.txt");
        {
            while(getline(file,pas))
                system("CLS");
            obj1.loading();
            if(pass==pas)
                a=1;
            else
                a=0;
            return a;
        }
    }
} obj9;

class Greating
{
public:
    void greating()
    {
        cout<<"\n\t\t\t......Thank you......"<<endl;
        cout<<"\n\nPress 1 to continue from Homepage:";
    }
} obj10;

class Truck : public Vehicle
{
public:
    void header()
    {
        cout<<endl<<"\t\t\t"<<"::::::::Welcome to Truck Reservation Service::::::::"<<endl;
        cout<<"\t\t\t|"<<"\t\t"<<"Powered by CSE-54 of AUB"<<"           |"<<endl;
        cout<<"\t\t\t|"<<"\t\t\t"<<">(TRS)<"<<"                    |"<<endl;
        cout<<"\t\t\t...................................................."<<endl<<endl<<endl;
    }
    void manu()
    {
        header();
        cout<<endl<<"\t\t\t\t\t>>>>>>>> Menu <<<<<<<<<\n"<<endl;
        cout<<"\n\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\t\t\t1.Reserve Truck"<<endl;
        cout<<"\t\t\t2.Contact with us"<<endl;
        cout<<"\t\t\t3.Quit"<<endl;
        cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\n\nEnter your the option number to go:";
    }
    void truck_details()
    {
        system("CLS");
        header();
        cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\t\t\t1.In Dhaka"<<endl;
        cout<<"\t\t\t2.Out of Dhaka"<<endl;
        cout<<"\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"\n\tWhere your place:";
    }
    void user_details(string name,string address,string res_pur,string to,long long int NID,long long int phn,string E_mail,double truck_quantity,string travel_date,double days)
    {
        ofstream truck_user;
        truck_user.open("Truck_User.txt");
        truck_user<<name<<endl;
        truck_user<<address<<endl;
        truck_user<<res_pur<<endl;
        truck_user<<to<<endl;
        truck_user<<NID<<endl;
        truck_user<<phn<<endl;
        truck_user<<E_mail<<endl;
        truck_user<<truck_quantity<<endl;
        truck_user<<travel_date<<endl;
        truck_user<<days<<endl;
        truck_user.close();
    }
} obj11;

int main()
{
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;
    double h;
    string i;
    double j=1;
    double k=1;
    double l=1;
    double manu_num;
    double m;
    string n;
    double o;
    string p;
    double q;
    double r;
    string s;
    string t;
    long long int u;
    long long int v;
    string w;
    string x;
    obj0.header_0();
    cout<<"\t........................."<<endl;
    cout<<"\t|\tLogin here\t|"<<endl;
    cout<<"\t........................."<<endl;
    a=obj9.log();
    if(a==1)
    {
        system("CLS");
        obj0.header_0();
        obj0.manu();
        cin>>r;
        system("CLS");
        obj1.loading();
        if(r==1)
        {
            system("CLS");
            obj1.manu();
            manu_num=obj1.Enter();
            system("CLS");
            obj1.loading();
            system("CLS");
            obj1.header();
            if(manu_num==1 || manu_num==2)
            {
                obj1.available_bus();
                h=obj1.Enter();
                system("CLS");
                obj1.loading();
                system("CLS");
                obj1.header();
                if(h==1)
                    obj3.details();
                else if(h==2)
                    obj2.details();
                else
                    obj4.details();
                b=obj1.Enter();
                system("CLS");
                obj1.loading();
                system("CLS");
                obj1.header();
                cout<<"\n\n\t\t\t\t>>> Buy Ticket <<<\n\n"<<endl;
                if(b==1)
                {
                    obj1.buy_ticket();
                    c=obj1.Enter();
                    if(c==1)
                    {
                        j++;
                        if(j>41)
                            cout<<"\nSeat not available today";
                        obj3.buy();
                        d=obj1.Enter();
                        if(d==1)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.650TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(650,7);
                                    f=g*(650-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(650,5);
                                    f=g*(650-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(650,3);
                                    f=g*(650-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(650,0);
                                    f=g*(650-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(d==2)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.620TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(620,7);
                                    f=g*(620-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(620,5);
                                    f=g*(620-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(620,3);
                                    f=g*(620-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(620,0);
                                    f=g*(620-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(d==3)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.520TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(520,7);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(520,5);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(520,3);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(520,0);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(d==4)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.500TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(500,7);
                                    f=g*(500-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(500,5);
                                    f=g*(500-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(500,3);
                                    f=g*(500-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(500,0);
                                    f=g*(500-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(c==2)
                        {
                            k++;
                            if(k>41)
                                cout<<"Seat not available today";
                            obj2.buy();
                            d=obj1.Enter();
                            if(d==1)
                            {
                                {
                                    cout<<"\t\t\tTicket Price:BDT.650TK"<<endl;
                                    cout<<"\t\t\tName:";
                                    cin>>p;
                                    cout<<"\t\t\tTicket Quantity:";
                                    cin>>g;
                                    cout<<"\t\t\tEnter Travel Date:";
                                    cin>>i;
                                    cout<<"\t\t\tEnter your user ID:";
                                    e=obj1.Enter();
                                    x=obj0.time();
                                    obj1.user_details(p,g,i,e,x);
                                    if(e==1001)
                                    {
                                        f=obj1.discount(650,7);
                                        f=g*(650-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj5.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1002)
                                    {
                                        f=obj1.discount(650,5);
                                        f=g*(650-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj6.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1003)
                                    {
                                        f=obj1.discount(650,3);
                                        f=g*(650-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj7.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1004)
                                    {
                                        f=obj1.discount(650,0);
                                        f=g*(650-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj8.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else
                                    {
                                        cout<<"Wrong ID.";
                                        cout<<"\n\nPress 1 to continue from Homepage:";
                                        cin>>q;
                                        while(1)
                                            main();
                                    }
                                }
                            }
                            else if(d==2)
                            {
                                {
                                    cout<<"\t\t\tTicket Price:BDT.600TK"<<endl;
                                    cout<<"\t\t\tName:";
                                    cin>>p;
                                    cout<<"\t\t\tTicket Quantity:";
                                    cin>>g;
                                    cout<<"\t\t\tEnter Travel Date:";
                                    cin>>i;
                                    cout<<"\t\t\tEnter your user ID:";
                                    e=obj1.Enter();
                                    x=obj0.time();
                                    obj1.user_details(p,g,i,e,x);
                                    if(e==1001)
                                    {
                                        f=obj1.discount(600,7);
                                        f=g*(600-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj5.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1002)
                                    {
                                        f=obj1.discount(600,5);
                                        f=g*(600-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj6.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1003)
                                    {
                                        f=obj1.discount(600,3);
                                        f=g*(600-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj7.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1004)
                                    {
                                        f=obj1.discount(600,0);
                                        f=g*(600-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj8.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else
                                    {
                                        cout<<"Wrong ID.";
                                        cout<<"\n\nPress 1 to continue from Homepage:";
                                        cin>>q;
                                        while(1)
                                            main();
                                    }
                                }
                            }
                            else if(d==3)
                            {
                                {
                                    cout<<"\t\t\tTicket Price:BDT.500TK"<<endl;
                                    cout<<"\t\t\tName:";
                                    cin>>p;
                                    cout<<"\t\t\tTicket Quantity:";
                                    cin>>g;
                                    cout<<"\t\t\tEnter Travel Date:";
                                    cin>>i;
                                    cout<<"\t\t\tEnter your user ID:";
                                    e=obj1.Enter();
                                    x=obj0.time();
                                    obj1.user_details(p,g,i,e,x);
                                    if(e==1001)
                                    {
                                        f=obj1.discount(500,7);
                                        f=g*(500-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj5.user();
                                        cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1002)
                                    {
                                        f=obj1.discount(500,5);
                                        f=g*(500-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj6.user();
                                        cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1003)
                                    {
                                        f=obj1.discount(500,3);
                                        f=g*(500-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj7.user();
                                        cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1004)
                                    {
                                        f=obj1.discount(500,0);
                                        f=g*(500-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj8.user();
                                        cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else
                                    {
                                        cout<<"Wrong ID.";
                                        cout<<"\n\nPress 1 to continue from Homepage:";
                                        cin>>q;
                                        while(1)
                                            main();
                                    }
                                }
                            }
                            else if(d==4)
                            {
                                {
                                    cout<<"\t\t\tTicket Price:BDT.480TK"<<endl;
                                    cout<<"\t\t\tName:";
                                    cin>>p;
                                    cout<<"\t\t\tTicket Quantity:";
                                    cin>>g;
                                    cout<<"\t\t\tEnter Travel Date:";
                                    cin>>i;
                                    cout<<"\t\t\tEnter your user ID:";
                                    e=obj1.Enter();
                                    x=obj0.time();
                                    obj1.user_details(p,g,i,e,x);
                                    if(e==1001)
                                    {
                                        f=obj1.discount(480,7);
                                        f=g*(480-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj5.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1002)
                                    {
                                        f=obj1.discount(480,5);
                                        f=g*(480-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj6.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"Your seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1003)
                                    {
                                        f=obj1.discount(480,3);
                                        f=g*(480-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj7.user();;
                                        cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else if(e==1004)
                                    {
                                        f=obj1.discount(480,0);
                                        f=g*(480-f);
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        obj1.header();
                                        obj8.user();
                                        cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                        cout<<"\t\t\tName:"<<p<<endl;
                                        cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                        cout<<"\t\t\tTravel Time:"<<x<<endl;
                                        cout<<"\t\t\tTravel Date:"<<i<<endl;
                                        cout<<"\t\t\tYour seat number is:";
                                        for(int i=1; i<=g; i++)
                                            cout<<i<<"  ";
                                        obj10.greating();
                                        cin>>q;
                                        system("CLS");
                                        obj1.loading();
                                        system("CLS");
                                        while(1)
                                            main();
                                    }
                                    else
                                    {
                                        cout<<"Wrong ID.";
                                        cout<<"\n\nPress 1 to continue from Homepage:";
                                        cin>>q;
                                        while(1)
                                            main();
                                    }
                                }
                            }
                            else
                                main();
                        }
                    }
                    else if(c==3)
                    {
                        l++;
                        if(l>43)
                            cout<<"Seat not available today";
                        obj4.buy();
                        d=obj1.Enter();
                        if(d==1)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.630TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(630,7);
                                    f=g*(630-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(630,5);
                                    f=g*(630-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(630,3);
                                    f=g*(630-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(630,0);
                                    f=g*(630-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-CHITTAGONG-COX BAZAR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(d==2)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.610TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(610,7);
                                    f=g*(610-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(610,5);
                                    f=g*(610-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(610,3);
                                    f=g*(610-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(610,0);
                                    f=g*(610-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-RANGPUR"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(d==3)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.520TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(520,7);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(520,5);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(520,3);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(520,0);
                                    f=g*(520-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:Dhaka-Sylhet"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else if(d==4)
                        {
                            {
                                cout<<"\t\t\tTicket Price:BDT.490TK"<<endl;
                                cout<<"\t\t\tName:";
                                cin>>p;
                                cout<<"\t\t\tTicket Quantity:";
                                cin>>g;
                                cout<<"\t\t\tEnter Travel Date:";
                                cin>>i;
                                cout<<"\t\t\tEnter your user ID:";
                                e=obj1.Enter();
                                x=obj0.time();
                                obj1.user_details(p,g,i,e,x);
                                if(e==1001)
                                {
                                    f=obj1.discount(490,7);
                                    f=g*(490-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj5.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1002)
                                {
                                    f=obj1.discount(490,5);
                                    f=g*(490-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj6.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1003)
                                {
                                    f=obj1.discount(490,3);
                                    f=g*(490-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj7.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else if(e==1004)
                                {
                                    f=obj1.discount(490,0);
                                    f=g*(490-f);
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    obj1.header();
                                    obj8.user();
                                    cout<<"\n\t\t\tYour Destination:DHAKA-NATORE"<<endl;
                                    cout<<"\t\t\tName:"<<p<<endl;
                                    cout<<"\t\t\tFinal ticket price:"<<"BDT."<<f<<"TK"<<endl;
                                    cout<<"\t\t\tTravel Time:"<<x<<endl;
                                    cout<<"\t\t\tTravel Date:"<<i<<endl;
                                    cout<<"\t\t\tYour seat number is:";
                                    for(int i=1; i<=g; i++)
                                        cout<<i<<"  ";
                                    obj10.greating();
                                    cin>>q;
                                    system("CLS");
                                    obj1.loading();
                                    system("CLS");
                                    while(1)
                                        main();
                                }
                                else
                                {
                                    cout<<"Wrong ID.";
                                    cout<<"\n\nPress 1 to continue from Homepage:";
                                    cin>>q;
                                    while(1)
                                        main();
                                }
                            }
                        }
                        else
                            main();
                    }
                    else
                    {
                        cout<<"Wrong keyword"<<endl;
                        cout<<"Press 1 to continue from Homepage:";
                        cin>>q;
                        while(1)
                            main();
                    }
                }
                else
                    main();
            }
            else if(manu_num==3)
            {
                obj0.schedule();
                cin>>n;
                while(1)
                    main();
            }
            else if(manu_num==4)
            {
                obj0.details();
                cin>>q;
                while(1)
                    main();
            }
            else if(manu_num==5)
            {
                system("CLS");
                obj0.quit();
            }
            else
            {
                system("CLS");
                main();
                obj1.manu();
            }
        }
        else if(r==2)
        {
            system("CLS");
            obj11.manu();
            manu_num=obj1.Enter();
            system("CLS");
            obj1.loading();
            system("CLS");
            obj11.header();
            if(manu_num==1)
            {
                obj11.truck_details();
                cin>>b;
                if(b==1)
                {
                    system("CLS");
                    obj11.header();
                    cout<<"The cost is: BDT.12,000 TK per Truck....";
                    cout<<"Press 1 to continue or press 0 to back home:";
                    cin>>c;
                    if(c==1)
                    {
                        system("CLS");
                        obj1.loading();
                        system("CLS");
                        obj11.header();
                        cout<<"\n\t\t\t%%%%( Fill up the form )%%%%";
                        cout<<"\n\n\t\t\tName:";
                        cin>>i;
                        cout<<"\n\t\t\tAddress:";
                        cin>>n;
                        cout<<"\n\t\t\tReservation Purpose:";
                        cin>>p;
                        cout<<"\n\t\t\tTo:";
                        cin>>s;
                        cout<<"\n\t\t\tNID:";
                        cin>>u;
                        cout<<"\n\t\t\tPhone Number:";
                        cin>>v;
                        cout<<"\n\t\t\tE-mail:";
                        cin>>t;
                        cout<<"\n\t\t\tTruck Quantity:";
                        cin>>f;
                        cout<<"\n\t\t\tEnter Needed Date:";
                        cin>>w;
                        cout<<"\n\t\t\tDays:";
                        cin>>g;
                        obj11.user_details(i,n,p,s,u,v,t,f,w,g);
                        system("CLS");
                        obj1.loading();
                        system("CLS");
                        obj11.header();
                        cout<<"\t\t\t%%%%( User Details )%%%%";
                        cout<<"\n\n\t\t\tName:"<<i;
                        cout<<"\n\t\t\tAddress:"<<n;
                        cout<<"\n\t\t\tReservation Purpose:"<<p;
                        cout<<"\n\t\t\tTo:"<<s;
                        cout<<"\n\t\t\tNID:"<<u;
                        cout<<"\n\t\t\tPhone Number:"<<v;
                        cout<<"\n\t\t\tE-mail:"<<t;
                        cout<<"\n\t\t\tTruck Quantity:"<<f;
                        cout<<"\n\t\t\tNeeded Date:"<<w;
                        cout<<"\n\t\t\tDays:"<<g<<endl;
                        cout<<"\n\t\t\tCost:BDT. "<<(g*f*12000)<<" TK";
                        cout<<"\n\nN.B: You must pay 60% TK Now";
                        obj10.greating();
                        cin>>q;
                        system("CLS");
                        obj1.loading();
                        system("CLS");
                        while(1)
                            main();
                    }
                    else
                        main();
                }
                else if(b==2)
                {
                    system("CLS");
                    obj11.header();
                    cout<<"The cost is: BDT.20,000 TK per Truck....";
                    cout<<"Press 1 to continue or press 0 to back home";
                    cin>>c;
                    if(c==1)
                    {
                        system("CLS");
                        obj1.loading();
                        system("CLS");
                        obj11.header();
                        cout<<"\n\t\t\t%%%%( Fill up the form )%%%%";
                        cout<<"\n\n\t\t\tName:";
                        cin>>i;
                        cout<<"\n\t\t\tAddress:";
                        cin>>n;
                        cout<<"\n\t\t\tReservation Purpose:";
                        cin>>p;
                        cout<<"\n\t\t\tTo:";
                        cin>>s;
                        cout<<"\n\t\t\tNID:";
                        cin>>u;
                        cout<<"\n\t\t\tPhone Number:";
                        cin>>v;
                        cout<<"\n\t\t\tE-mail:";
                        cin>>t;
                        cout<<"\n\t\t\tTruck Quantity:";
                        cin>>f;
                        cout<<"\t\t\tEnter Needed Date:";
                        cin>>w;
                        cout<<"\n\t\t\tDays:";
                        cin>>g;
                        obj11.user_details(i,n,p,s,u,v,t,f,w,g);
                        system("CLS");
                        obj1.loading();
                        system("CLS");
                        obj11.header();
                        cout<<"\t\t\t%%%%( User Details )%%%%";
                        cout<<"\n\n\t\t\tName:"<<i;
                        cout<<"\n\t\t\tAddress:"<<n;
                        cout<<"\n\t\t\tReservation Purpose:"<<p;
                        cout<<"\n\t\t\tTo:"<<s;
                        cout<<"\n\t\t\tNID:"<<u;
                        cout<<"\n\t\t\tPhone Number:"<<v;
                        cout<<"\n\t\t\tE-mail:"<<t;
                        cout<<"\n\t\t\tTruck Quantity:"<<f;
                        cout<<"\n\t\t\tNeeded Date:"<<w;
                        cout<<"\n\t\t\tDays:"<<g<<endl;
                        cout<<"\n\t\t\tCost:BDT. "<<(g*f*20000)<<" TK";
                        cout<<"\n\nN.B: You must pay 60% TK Now";
                        obj10.greating();
                        cin>>q;
                        system("CLS");
                        obj1.loading();
                        system("CLS");
                        while(1)
                            main();
                    }
                    else
                        main();
                }
            }
            else if(manu_num==2)
            {
                obj0.details();
                cin>>q;
                while(1)
                    main();
            }
            else if(manu_num==3)
            {
                system("CLS");
                obj0.quit();
            }
            else
            {
                system("CLS");
                main();
                obj11.manu();
            }
        }
        else if(r==3)
        {
            system("CLS");
            obj0.header_0();
            obj0.details();
            cin>>q;
            while(1)
                main();
        }
        else if(r==4)
        {
            system("CLS");
            obj0.quit();
        }
        else
        {
            system("CLS");
            main();
        }
    }
    else
    {
        system("CLS");
        main();
    }
    return 0;
}
