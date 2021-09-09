#include <bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;



void title()  //title
{
    system("CLS");
    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
    cout << "\t\t\t|-------------------------------|" << endl;
    cout << "\t\t\t|";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),46);
    cout << "\t Shiva Hotels";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
    cout << "\t\t|" << endl;
    cout << "\t\t\t|-------------------------------|\n" << endl;
}

class Customer  //Class For customer
{
public:
    string customer_name;
    string address;
    string Id;
    string phone;
    string  from_date;
    string to_date;
    float payment_advance;

};
class Room  //Class For Room
{
public:
char type;
char stype;
char ac;
int roomNumber;
int rent;
int status;

class Customer cust;
class Room addRoom(int);
void searchRoom(int);
void deleteRoom(int);
void displayRoom(Room);
};

int counnt=0; //pointer for filling of rooms it is a Global Declaration
Room rooms[100];  // Array of Rooms  it is a Global Declaration


Room Room :: addRoom(int rno)  //Adding of Room details
{
    Room temp;
    temp.roomNumber=rno;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
   cout<<"\n\t\tType AC/Non-AC (A/N) : ";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
   cin>>temp.ac;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
   cout<<"\n\t\tType Comfort (S/N) : ";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
   cin>>temp.type;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
   cout<<"\n\t\tType Size Big/Small (B/S) : ";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
   cin>>temp.stype;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
   cout<<"\n\t\tDaily Rent : ";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
   cin>>temp.rent;
   temp.status=0;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
  cout<<"\n\t\t Room Added Successfully!";
  getch();

  return temp;
}
void Room :: searchRoom(int rno) //searching for a room
{
    int i,found=0;
    for(i=0;i<counnt;i++)
    {
        if(rooms[i].roomNumber==rno)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        cout<<"\n\t\tRoom Details\n";
       if(rooms[i].status==1)
       {  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n\t\tRoom is Reserved";
          getch();
       }
       else
       {  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
          cout<<"\n\t\tRoom is available";

       }
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
       cout<<"\n\n\t\tPress enter to get Details";
       getch();
       displayRoom(rooms[i]);
    }
    else
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"\n\t\tRoom not found";
        getch();
    }
}


void Room :: displayRoom(Room temp)  //Display Room details
{
      cout<<"\n\t\tRoom Number: \t"<<temp.roomNumber;
      cout<<"\n\t\tType AC/Non-AC (A/N) "<<temp.ac;
      cout<<"\n\t\tType Comfort (S/N) "<<temp.type;
      cout<<"\n\t\tType Size Big/Small (B/S) "<<temp.stype;
      cout<<"\n\t\tRent: "<<temp.rent;
      getch();
}

class hotelmanagement : protected Room  //Class Hotel Management
{
   public:
    void checkIn();
    void getAvailRoom();
    void searchCustomer(string);
    void checkOut(int);
    void guestSummaryReport();
};

void hotelmanagement :: guestSummaryReport() // Function for summary of guests
{

     if(counnt==0)
        {
           cout<<"\n\t\t No Guest in Hotel !!";
           getch();
        }
    for(int i=0;i<counnt;i++)
    {
        if(rooms[i].status==1)
        {
            cout<<"\n\t\t Customer First Name :  "<<rooms[i].cust.customer_name;
            cout<<"\n\t\t Room Number :  "<<rooms[i].roomNumber;
            cout<<"\n\t\t Address (only city) : "<<rooms[i].cust.address;
            cout<<"\n \t\tPhone :  "<<rooms[i].cust.phone;
            cout<<"\n\t\tx-------------------------------------x";
            getch();
        }
    }
}

void hotelmanagement:: checkIn()
{
    int i,found=0,rno;

      //class Room room;
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
      cout<<"\n\t\tEnter Room number : ";
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
      cin>>rno;
    for(i=0;i<counnt;i++)
     {
        if(rooms[i].roomNumber==rno)
       {
          found=1;
           break;
       }
     }
      if(found==1)
      {
         if(rooms[i].status==1)
          {  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
             cout<<"\n\t\tRoom is already Booked";
             getch();
             return;
          }
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
         cout<<"\n\t\tEnter booking id: ";
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
         cin>>rooms[i].cust.Id;


         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
         cout<<"\n\t\tEnter Customer Name (First Name): ";
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
         cin>>rooms[i].cust.customer_name;


         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
         cout<<"\n\t\tEnter Address (only city): ";
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
         cin>>rooms[i].cust.address;

         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
         cout<<"\n\t\tEnter Phone: ";
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
         cin>>rooms[i].cust.phone;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout<<"\n\t\tEnter From Date: ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cin>>rooms[i].cust.from_date;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout<<"\n\t\tEnter to  Date: ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cin>>rooms[i].cust.to_date;


        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout<<"\n\t\tEnter Advance Payment: ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cin>>rooms[i].cust.payment_advance;

        rooms[i].status=1;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"\n\t\t Customer Checked-in Successfully..";
        getch();
}
}
void  hotelmanagement:: getAvailRoom()
{   int found=0;
    for(int i=0;i<counnt;i++)
    {
        if(rooms[i].status==0)
        {
            displayRoom(rooms[i]);
            cout<<"\n\n\t\tPress enter for next room";
            found=1;
            getch();
        }
    }
    if(found==0)
    {
        cout<<"\n\t\tAll rooms are reserved";
        getch();
    }
}

void hotelmanagement:: searchCustomer(string s)
{  int found=0;
    for(int i=0;i<counnt;i++)
    {
        if(rooms[i].status==1)
        {
            if(rooms[i].cust.customer_name==s)
            {
            cout<<"\n\t\tCustomer Name: "<<rooms[i].cust.customer_name;
           cout<<"\n\t\tRoom Number: "<<rooms[i].roomNumber;

           cout<<"\n\n\t\tPress enter for next record";
           found=1;
          getch();
            }
        }
    }
    if(found==0)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
       cout<<"\n\t\tPerson not found.";
       getch();
    }
}

void hotelmanagement::checkOut(int rno) //function generates the bill of the expenses
{
    int found=0,days;
    float balance;
    int i;
    for(i=0;i<counnt;i++)
    {
        if(rooms[i].status==1 && rooms[i].roomNumber==rno)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
        cout<<"\n\t\tEnter Number of Days:\t";
        cin>>days;
        balance=days * rooms[i].rent;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);
        cout<<"\n\t\t######## CheckOut Details ########\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\t\tCustomer Name : "<<rooms[i].cust.customer_name;
        cout<<"\n\t\tRoom Number : "<<rooms[i].roomNumber;
        cout<<"\n\t\tAddress : "<<rooms[i].cust.address;
        cout<<"\n\t\tPhone : "<<rooms[i].cust.phone;
        cout<<"\n\t\tTotal Amount Due : "<<balance<<" /";
        cout<<"\n\t\tAdvance Paid: "<<rooms[i].cust.payment_advance<<" /";
        cout<<"\n\t\t*** Total Payable: "<<balance-rooms[i].cust.payment_advance<<"/ only";

       rooms[i].status=0;


        ofstream myfile("Invoice.txt");
    myfile<<"\n******************************************** Shiva Hotels ********************************************\n"; //file for storing ticket details;
        myfile<<"\n\t\t######## CheckOut Details ########\n";
        myfile<<"\n\t\tCustomer Name : "<<rooms[i].cust.customer_name;
        myfile<<"\n\t\tRoom Number : "<<rooms[i].roomNumber;
        myfile<<"\n\t\tAddress : "<<rooms[i].cust.address;
        myfile<<"\n\t\tPhone : "<<rooms[i].cust.phone;
        myfile<<"\n\t\tTotal Amount Due : "<<balance<<" /";
        myfile<<"\n\t\tAdvance Paid: "<<rooms[i].cust.payment_advance<<" /";
        myfile<<"\n\t\t*** Total Payable: "<<balance-rooms[i].cust.payment_advance<<"/ only";
    myfile<<"\n**********************************************************************************************************";
    myfile.close();


       getch();
    }

}


void managerooms() //managing rooms (adding and searching available rooms)
{
    Room Rm;
    int opt,rno,i,flag=0;
    char ch;
    title();
    do
    {   title();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\t\t### Manage Rooms ###";
        cout<<"\n\t\t1. Add Room";
        cout<<"\n\t\t2. Search Room";
        cout<<"\n\t\t3. Back to Main Menu";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
        cout<<"\n\n\t\tEnter Option: ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cin>>opt;

        //switch statement
    switch(opt)
    {
       case 1:
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
       cout<<"\n\t\tEnter Room Number: ";
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
       cin>>rno;
       i=0;
       for(i=0;i<counnt;i++)
        {
             if(rooms[i].roomNumber==rno)
             {
               flag=1;
             }
        }
       if(flag==1)
       {    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
            cout<<"\n\t\tRoom Number is Present.\n\t\tPlease enter unique Number";
            flag=0;
            getch();
       }
       else
       {
          rooms[counnt]=Rm.addRoom(rno);
          counnt++;
       }
      break;
      case 2:
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
      cout<<"\n\t\tEnter room number: ";
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
      cin>>rno;
      Rm.searchRoom(rno);
      break;
      case 3:
     //nothing to do
      break;
      default:
      cout<<"\n\t\tPlease Enter correct option";
      break;
    }
    } while(opt!=3);
}


int main()
{
    title();
    int opt; //selection of otion
    class hotelmanagement hm;
    int i,j,rno;
    char ch;
    string name;

  do
   {
        title();
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);

cout<<"\t######## Hotel Management #########\n";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

cout<<"\n\t1. Manage Rooms";
cout<<"\n\t2. Check-In Room";
cout<<"\n\t3. Available Rooms";
cout<<"\n\t4. Search Customer";
cout<<"\n\t5. Check-Out Room";
cout<<"\n\t6. Guest Summary Report";
cout<<"\n\t7. Exit";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);

cout<<"\n\n\tEnter Option: ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

cin>>opt;

 switch(opt)
 {
 case 1:
     managerooms();
     break;

 case 2:
     if(counnt==0)
      {
          cout<<"\n\t\tRooms data is not available.\n\t\tPlease add the rooms first.";
          getch();
      }
      else
      hm.checkIn();
      break;

 case 3:
     if(counnt==0)
      {
         cout<<"\n\t\tRooms data is not available.\n\t\tPlease add the rooms first.";
        getch();
      }
     else
     hm.getAvailRoom();
     break;


 case 4:
     if(counnt==0)
     {
       cout<<"\n\t\tRooms are not available.\n\t\tPlease add the rooms first.";
       getch();
    }
   else
   {
     cout<<"\n\t\tEnter Customer Name: ";
     cin>>name;
     hm.searchCustomer(name);
   }
   break;


 case 5:
     if(counnt==0)
     {
       cout<<"\n\t\tRooms are not available.\n\t\tPlease add the rooms first.";
       getch();
    }
   else
   {
     cout<<"\n\t\tEnter RoomNumber: ";
     cin>>rno;
     hm.checkOut(rno);
   }
   break;

 case 6:
    hm.guestSummaryReport();
    break;

 case 7:
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
     cout<<"\n\t\tTHANK YOU FOR USING THIS SOFTWARE";
     break;

 default:
    cout<<"\nPlease Enter correct option";
    break;

}


   }while(opt!=7);

getch();


return 0;
}
