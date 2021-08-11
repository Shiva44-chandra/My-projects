#include <iostream>
#include<windows.h>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
string passenger[4]; //Names of the passengers
int age[4];
string name; //Name of the login person
int n; bool first=true; bool finish=true;
int amo=0; // amount to be paid by traveler
void title() // title of booking portal
{
    system("CLS");
    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\t\t\t|-------------------------------|" << endl;
    cout << "\t\t\t|";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout << "\tBUS Ticket Booking";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\t|" << endl;
    cout << "\t\t\t|-------------------------------|\n" << endl;
}
void print_mainmenu(){//Function for printing Main menu options
    title();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout << "\n\n\t\t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1413);
    cout << "MAIN MENU";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\n\n\tSELECT Bustand" << endl;
    cout << "\n\t1.Siddipet OLD BUSSTAND " << endl;
    cout << "\n\t2.Siddipet NEW BUSSTAND" << endl;
    cout << "\n\tPress '0' to Exit this program...." << endl;
    cout << "\n\tEnter your Choice: ";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),015);
}


 void routes() //function for displaying routes
{    title();
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout << "\n\n\t\t";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\n\n\tSELECT Route\t"; cout<<"\t\t\tRates"<<endl;
    cout << "\n\t1.Siddipet to Hyderabad \t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4); cout<<"Full:\t";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);cout<<105<<" ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4); cout<<"\tHalf:\t";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);cout<<65<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9); cout << "\n\t2.Siddipet to kamareddy \t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4); cout<<"Full:\t";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);cout<<75<<" ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4); cout<<"\tHalf:\t";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);cout<<38<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9); cout << "\n\t3.Siddipet to Adilabad  \t";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4); cout<<"Full:\t";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);cout<<165<<" ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4); cout<<"\tHalf:\t";
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);cout<<83<<endl;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
      cout << "\n\n\tFull ticket is For age greater than 7years\n" << endl;
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),015);
    cout << "\n\n\tPress '0' to go back to main menu...." << endl;
    cout << "\n\tEnter your Choice: ";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),015);
}

void sda() //function for siddipet to adilabad
{    title();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout << "\n\n\t\t";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\n\n\tSiddipet to Adilabad Bus Timings" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\t1.3.00Am to 8.00Am " << endl;
    cout << "\n\t2.9.00AM to 11.30Am" << endl;
    cout << "\n\t3.1.00Pm to 3.00PM" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout << "\n\n\tPress '0' to go back to main menu...." << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
    cout << "\n\tEnter your Choice: ";
    int c;
    cin>>c;
     if(c==0)
        routes();
    if(c==1)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\n\tEnter Name of passenger number"<<i+1<<" "<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number  "<<i+1<<"  "<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+165;
          else
            amo=amo+83;
        }
        cout<<"\n\tTotal Money to be paid:\t"<<amo<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n"; //file for storing ticket details;
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Adilabad"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"3.00AM to 8.00AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

    if(c==2)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<" "<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<"  "<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+165;
          else
            amo=amo+83;
        }
        cout<<"\n\tTotal Money to be paid:\t"<<amo<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Adilabad"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"9.00AM to 11.30AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

    if(c==3)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<" "<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<"  "<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+165;
          else
            amo=amo+83;
        }
        cout<<"\n\tTotal Money to be paid:\t"<<amo<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Adilabad"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"1.00PM to 3.30AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),015);
}

void sdk()
{    title();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout << "\n\n\t\t";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\n\n\tSiddipet to kamareddy Bus Timings" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\t1.3.20Am to 6.00Am " << endl;
    cout << "\n\t2.9.00AM to 11.30Am" << endl;
    cout << "\n\t3.1.00Pm to 3.00PM" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout << "\n\n\tPress '0' to go back to main menu...." << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
    cout << "\n\tEnter your Choice: ";
    int c;
    cin>>c;
    if(c==0)
     routes();
    if(c==1)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<i+1<<" "<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<i+1<<"  "<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+75;
          else
            amo=amo+38;
        }
        cout<<"\n\tTotal Amount to be paid:\t"<<amo<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Kamareddy"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"3.20AM to 6.00AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

    if(c==2)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        if(n>4)
        {
            cout<<"\n\t select valid number";
            int nn;
            cin>>nn;
            sdk();
        }
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<" "<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<"  "<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+75;
          else
            amo=amo+38;
        }
        cout<<"n\tTotal Amount to be paid:\t"<<amo<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Kamareddy"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"9.00AM to 11.30AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

    if(c==3)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<" "<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<"  "<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+75;
          else
            amo=amo+38;
        }
        cout<<"n\tTotal Amount to be paid:\t"<<amo<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Kamareddy"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"1.00PM to 3.30AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),015);
}


void sdh()
{    title();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout << "\n\n\t\t";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    cout << "\n\n\tSiddipet to Hyderabad Bus Timings" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\t1.1.20Am to 4.00Am " << endl;
    cout << "\n\t2.5.00AM to 7.30Am" << endl;
    cout << "\n\t3.2.00PM to 5.00PM" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout << "\n\n\tPress '0' to go back to main menu...." << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
    cout << "\n\tEnter your Choice: ";
    int c;
    cin>>c;
    if(c==0)
        routes();
    if(c==1)
    {  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+105;
          else
            amo=amo+65;
        }
        cout<<"\n\tTotal Money to be paid:\t"<<amo<<endl;
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Hyderabad"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"1.20AM to 4.00AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

    if(c==2)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<" "<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<"  "<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+105;
          else
            amo=amo+65;
        }
        cout<<"\n\tTotal Money to be paid:\t"<<amo<<endl;
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;
        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Hyderabad"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"1.20AM to 4.00AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

    if(c==3)
    {   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
        cout<<"\n\t select number of passengers passengers should not exceed four numbers";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"\n\n\tNumber of Passengers:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
          cout<<"\tEnter Name of passenger number"<<" "<<i+1<<":";
          cin>>passenger[i];
          cout<<"\tEnter Age of passenger number"<<"  "<<i+1<<":";
          cin>>age[i];
          if(age[i]>7)
            amo=amo+105;
          else
            amo=amo+65;
        }
        cout<<"\n\tTotal Money to be paid:\t"<<amo<<endl;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
        cout<<"\n\tPress 1 to confirm Payment:";
        int mmmm;
        cin>>mmmm;


        ofstream myfile("bus Ticket.txt");
    myfile<<"\n******************************************** BUS TICKET ********************************************\n";
    for(int i=0;i<n;i++)
   {

    myfile<<"\n\tNAME: ";
    myfile<<passenger[i] ;
    myfile<<"\tAge: " << age[i] << endl;
    }
    myfile<<"\n\tFrom:\t";
    myfile<<"Siddipet To Hyderabad"<<endl;
    myfile<<"\n\tTime:\t";
    myfile<<"1.20AM to 4.00AM" << endl;
    myfile<<"\n**********************************************************************************************************";
    myfile.close();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout << "\n\tBus Ticket generated Successfully:)";
    finish=false;
    return;
    }

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),015);
}

void New()
{
 routes();
}

void old()
{
  routes();
}


void head()
{ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
  cout << "\n\twelcome to TSRTC\n\n " ;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
    cout<<"\n\tplease,Enter your Name:";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
    getline(cin,name);
    cout << "\n\n\tHello there, " << name << "! Welcome to TSRTC Bus booking"<< endl;
}



void start()
{
   while(1)
   {

    title();

  while(first==true)
   {
    head();
    first=false;



    int l;
     cout<<"\n\tPress 1 to continue:  ";
        cin>>l;
   }
    print_mainmenu();
    int ch;
    cin>>ch;
    if(ch==0)
        break;
    else if(ch==1)
       {

        old();
        int ti;
        cin>>ti;
        if(ti==0)
            continue;
            else if(ti==1)
              {
                 sdh();
                 if(finish==false)
                {
                   cout<<"\n\tEnter 0 to exit programme:";
                    int eee;
                    cin>>eee;
                     break;


 }
              }
               else if(ti==3)
               {

                sda();
                 if(finish==false)
                 {
                      cout<<"\n\tEnter 0 to exit programme:";
                    int eee;
                    cin>>eee;
                     break;

                 }
               }
             else if(ti==2);
            {  sdk();
              if(finish==false)
                {
                     cout<<"\n\tEnter 0 to exit programme:";
                    int eee;
                    cin>>eee;
                     break;

                }

            }

       }
    else if(ch==2)
        {
            New();
            int ti;
        cin>>ti;
        if(ti==0)
            continue;
            else if(ti==1)
              {
                 sdh();
                 if(finish==false)
                {  cout<<"\n\tEnter 0 to exit programme:";
                    int eee;
                    cin>>eee;
                     break;
                    }
              }
               else if(ti==3)
               {

                sda();
                 if(finish==false)
                    {
                         cout<<"\n\tEnter 0 to exit programme:";
                    int eee;
                    cin>>eee;
                     break;

                    }
               }
             else if(ti==2);
            {  sdk();
              if(finish==false)
                {
                     cout<<"\n\tEnter 0 to exit programme:";
                    int eee;
                    cin>>eee;
                     break;

                }

            }


        }
    else
       {

        cout<<"\n\tChoose Valid Option\n";
        int co;

        cout<<"\n\tPress 1 to continue:  ";
        cin>>co;
        continue;

        }
   }
}

int main()
{
    start();
   return 0;
}
