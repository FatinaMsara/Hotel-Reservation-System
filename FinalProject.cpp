// Title: Hotel Reservation System
// Name: 1.Fatina Maisara Binti Izamuddin (2020897908)
//		 2.Aliya Suraya Binti Sabari (2020602054)
// Class: CS2511A

#include<iostream>
using namespace std;

int main()
{
	string name;	//initialize name for the interface
	int total1=0, total2=0, total3=0, total4=0,					//initialize to calculate the total payments for each types of room chosen
	total5=0, total6=0;
	int day1, month1, year1, day2, month2, year2, night;		//initialize for the date
	float payment;
	int hp, guest, room1, room2, room3, room4, room5, room6;	//initialize for the type of rooms
	cout<<"\t---------------------------------------------------"<<endl;
	cout<<"\t\tWelcome to Saliya Hotel Booking System"<<endl;
	cout<<"\t---------------------------------------------------"<<endl;
	cout<<"\nPlease fill up the form below."<<endl;
	
	cout<<"Name (First name)        : ";
	cin>>name;
	cout<<"Phone number             : ";
	cin>>hp;
	
	cout<<"Check-in date (dd/mm/yy) : ";
	cin>> day1; cin.get();
	cin >> month1; cin.get();
	cin >> year1; cin.get();
	cout<<"Check-out date (dd/mm/yy): ";
	cin >> day2; cin.get();
	cin >> month2; cin.get();
	cin >> year2; cin.get();
	night=(day2-day1)+((month2-month1)*30)+((year2-year1)*365);		//calculation for length of stay
	cout<<"Number of night stay     : "<<night<<endl;
	
	cout<<"Number of guest(s)?"<<endl;
	cin>>guest;
	
	cout<<"\nHello "<<name<<", Welcome to Saliya Hotel!"<<endl;
	cout<<"\nAvailability"<<endl;
	cout<<"Check-in date\t\t Check-out date\t\t Guests"<<endl;
	cout<<day1<<"/"<<month1<<"/"<<year1<<"\t\t "<<day2<<"/"<<month2<<"/"<<year2<<"\t\t "<<guest<<endl;
	
	cout<<"\nRoom type\t\tRate (per night)"<<endl;  //display for user to pick their room type
	cout<<"(1) Standard\t\tRM180"<<endl;
	cout<<"(2) Moderate\t\tRM200"<<endl;
	cout<<"(3) Superior\t\tRM250"<<endl;
	cout<<"(4) Deluxe\t\tRM280"<<endl;
	cout<<"(5) Suite\t\tRM300"<<endl;
	cout<<"(6) Studio\t\tRM185"<<endl;
	cout<<"\nBreakfast = RM18.80 per person (Optional)"<<endl;
	
	int room;		// holds amount of numbers to be entered into array
	cout<<"\nHow many rooms do you want? "<<endl;
	cin>>room;
	
	int new_array[room];
	int standard [11] = {0, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int moderate [11] = {0, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120};
    int superior [11] = {0, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210};
    int deluxe   [11] = {0, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220};
    int suite  [6] = {0, 301, 302, 303, 304, 305};
    int studio [6] = {0, 306, 307, 308, 309, 310};
	for(int i=1; i<=room; i++)			//for-loop and the size is based on input by the user (rooms needed)
	{
		cout << "\nEnter room type " <<i<<" : ";
    	cin >> new_array[i];
    	if (new_array[i]==1){		//if-else used for each types of room with different price
    		room1= 180;
    		cout<<"Here's your room number for standard: "<<standard[i]<<endl;
    		cout<<"Price for standard room: RM"<<room1<<endl;
    		total1=total1+room1;
		}
		else if(new_array[i]==2){
    		room2 = 200;
    		cout<<"Here's your room number for moderate: "<<moderate[i]<<endl;
    		cout<<"Price for moderate room: RM"<<room2<<endl;
    		total2=total2+room2;
		}
		else if(new_array[i]==3){
    		room3 = 250;
    		cout<<"Here's your room number for superior: "<<superior[i]<<endl;
    		cout<<"Price for superior room: RM"<<room3<<endl;
    		total3=total3+room3;
		}
		else if(new_array[i]==4){
    		room4 = 280;
    		cout<<"Here's your room number for deluxe: "<<deluxe[i]<<endl;
    		cout<<"Price for deluxe room: RM"<<room4<<endl;
    		total4=total4+room4;
		}
		else if(new_array[i]==5){
    		room5 = 300;
    		cout<<"Here's your room number for suite: "<<suite[i]<<endl;
    		cout<<"Price for suite room: RM"<<room5<<endl;
    		total5=total5+room5;
		}
		else if(new_array[i]==6){
    		room6 = 185;
    		cout<<"Here's your room number for studio: "<<studio[i]<<endl;
    		cout<<"Price for studio room: RM"<<room6<<endl;
    		total6=total6+room6;
		}
		else
			cout<<"Type of room isn't valid. Please enter from 1 to 6 only."<<endl;
	
    	
	}
	bool breakfast;
	double bfastprice=0;
	cout<<"\nDo you want to add breakfast? [0: No] [1: Yes]"<<endl;
	cin>>breakfast;
	
	if(!breakfast)			//if-else statement for breakfast
	{
		cout<<"No breakfast included."<<endl;
	}
	else{
		bfastprice=18.80*guest;
		cout<<"Here's breakfast price for "<<guest<<" person: RM"<<bfastprice<<endl;
	}
	
	cout<<"\n\t----------------Your booking details-----------------"<<endl;
	cout<<"\n\tCheck-in date\t\t\t Check-out date"<<endl;
	cout<<"\t"<<day1<<"/"<<month1<<"/"<<year1<<"\t\t\t "<<day2<<"/"<<month2<<"/"<<year2<<endl;
	cout<<"\t2.00PM - 10.00PM\t\t Until 12.00PM"<<endl;
	cout<<"\tTotal length of stay:"<<endl;
	cout<<"\t"<<night<<" night"<<endl;
	cout<<"\tSleeps (up to) \n\t"<<guest<<" person"<<endl;
	
	int tax, totalpay;
	payment=(total1+total2+total3+total4+total5+total6)*night;		//total payment not included service charge
	tax=0.06*payment;
	totalpay= payment+bfastprice+tax;
	cout << "\n\tPayment (Breakfast excluded)  : RM" << payment << endl;
	cout << "\tBreakfast Price               : RM"<<bfastprice<<endl;
	cout<<  "\tService Tax 6%                : RM"<<tax<<endl;
	cout<<  "\tTotal payment (for all guests): RM"<<totalpay;
	
	return 0;
}
