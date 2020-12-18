#include<iostream>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;

int *registration();
int *bookinquiry();
double purchase(int&, double&);
double calcDiscount(double&, double&, double&);
double displayReceipt(int&, double&, double&, double&);
void  sales(double&, double&);

int main()

{
	int *choice_book;
	double monthlysale;
	
	int options,staffid;
	char title[50],author[50],publisher[50],answer;
	
	char name[50],month[10];
	int counter=1,quantity, newquantity=0;
	double totalsales, nettotal, discount,monthlysales=0,totalquantity=0, newprice=0, totalprice=0,price=0;
	
	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<" ||| BERJAYA BOOK STORE SDN BHD |||"<<endl;
	cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	
	cout<<""<<endl;
	cout<<"Please enter your staff id : ";
	cin>>staffid;
	
	if(staffid!=0001)
	{
	
	cout<<"Invalid staff id ! Try again !"<<endl;
	}
	
	else
	{
	
	cout<<""<<endl;
	cout<<"Welcome user :  "<<staffid<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<""<<endl;
	cout<<"Please choose one of the following options to proceed : "<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	cout<<"1.New book/s registration "<<endl;
	cout<<"2.Book/s Inquiry"<<endl;
	cout<<"3.Book/s Purchase"<<endl;
	cout<<"4.Store's Sales"<<endl;
	
	cout<<""<<endl;
	cout<<"Enter the number of preferred options : ";
	cin>>options;

	switch(options)
	{
	case 1:
	{
		cout<<""<<endl;
		cout<<"*** NEW BOOK REGISTRATION*** "<<endl;
	
		
		registration();break;
	}
	
	case 2:
	{
		cout<<""<<endl;
		cout<<"***BOOK INQUIRY*** "<<endl;
		cout<<""<<endl;
		bookinquiry();break;
	}
	
	case 3:	
	{
		cout<<""<<endl;
		cout<<"***PURCHASING*** ";
		cout<<""<<endl;
		purchase(newquantity, totalprice);
		calcDiscount(nettotal, discount, totalprice);
		displayReceipt(newquantity, totalprice, discount, nettotal);
		break;
	}
	case 4:	
	
	{
		cout<<""<<endl;
		cout<<"***STORE'S SALES***"<<endl;
		cout<<""<<endl;
		sales(price, totalquantity);
		cout<<""<<endl;
		totalsales=price*totalquantity;
		cout<<"Total sales for the book:"<<totalsales<<endl;
		break;
	}
	
	}
	
	}
	
	return 0;
	
}
	
	int *registration()
	
	{
	int *arr;
	char title[50],author[50],publisher[50],answer;
	float price;
	
	
	while(answer!='N') 
	{
	
	
	cout<<""<<endl;
	cin.ignore();
	cout<<"Please enter title of the book : ";
	cin.getline(title,49);
	cout<<""<<endl;
	cout<<"Please enter the name of author of the book : ";
	cin.getline(author,49);
	cout<<""<<endl;
	cout<<"Please enter the name of publisher of the book : ";
	cin.getline(publisher,49);
	cout<<""<<endl;
	cout<<"Please enter the price of the book (RM) : ";
	cin>>price;
	cout<<""<<endl;
	
	cout<<"Do enter 'Y' to continue new book registration or enter 'N' to stop :";
	cin>>answer;
	cin.ignore();
	cout<<""<<endl;
	cout<<"*** REGISTRATON SUCCEED ! *** "<<endl;
	}
	
	return arr;
	}
	
	int *bookinquiry()
	{
		int *choice_book;
		char choice, book;

		cout<<"POETRY BOOKS"<<endl;
		cout<<"-------------"<<endl;
		
		cout<<"A.Milk And Honey"<<endl;
		cout<<"Author : Rupi Kaur "<<endl;
		cout<<"Price (RM) : 31.98"<<endl;
		cout<<""<<endl;
		
		cout<<"B.Persona"<<endl;
		cout<<"Author : Rupi Kaur "<<endl;
		cout<<"Price (RM) : 40.99"<<endl;
		cout<<""<<endl;
		
		cout<<"****************************************************************************"<<endl;
		cout<<""<<endl;

		cout<<"KIDS BOOKS"<<endl;
		cout<<"-------------"<<endl;
		
		cout<<"A.Maze Chaser"<<endl;
		cout<<"Author : Rupi Kaur "<<endl;
		cout<<"Price (RM) : 70.00"<<endl;
		cout<<""<<endl;
		
		cout<<"B.Parry Potter "<<endl;
		cout<<"Author : Rupi Kaur "<<endl;
		cout<<"Price (RM) : 106.00"<<endl;
		cout<<""<<endl;
		
		cin.ignore();
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"Please choose genre of books [K / P:] : ";
		cin>>book;
		cout<<""<<endl;
		cout<<""<<endl;

		if((book=='p') || (book=='P'))
		{
		cout<<"Please choose a book preferred [A / B ] : ";
		cin>>choice;
			if ( (choice=='A')||(choice=='a'))
				{
				cout<<"Book selected: Milk And Honey "<<endl;
				cout<<""<<endl;
				cout<<"Detail of this book:   "<<endl;
				cout<<"======================="<<endl;
				cout<<"The author is Rupi Kaur."<<endl;
				cout<<"Publisher of this book is Times Square Publisher Ent."<<endl;
				cout<<"The price of this book is RM 31.98"<<endl;
				cout<<""<<endl;
				cout<<"Description: Milk and Honey is a collection of poetry and prose about survival, violence love and loss. The book is divided into 4 chapters and each chapter serves a difference purpose. "<<endl;
				}
				
			
			else if( (choice=='B')||(choice=='b'))
				{
				cout<<"Book selected: Persona"<<endl;
				cout<<""<<endl;
				cout<<"Detail of this book:   "<<endl;
				cout<<"======================="<<endl;
				cout<<"The author was Rupi Kaur."<<endl;
				cout<<"Publisher of this book was Times Square Publisher Ent."<<endl;
				cout<<"The price of this book was 40.99"<<endl;
				cout<<""<<endl;
				cout<<"Description: It is easy to love those who loves us, but what about those we find it difficult to love? How do we still love and respect those who dont like us as God's people. "<<endl;
				}
			
			else 
				cout<<"Invalid name book!!"<<endl;
		}
			
			else if((book=='k') || (book=='K'))
		{
		cout<<"Please choose a book preferred [A / B ] : ";
		cin>>choice;
			if ( (choice=='A')||(choice=='a'))
				{
				cout<<"Book selected: Maze Chaser "<<endl;
				cout<<""<<endl;
				cout<<"Detail of this book:   "<<endl;
				cout<<"======================="<<endl;
				cout<<"The author is Rupi Kaur."<<endl;
				cout<<"Publisher of this book is Times Square Publisher Ent."<<endl;
				cout<<"The price of this book is RM 70.00"<<endl;
				cout<<""<<endl;
				cout<<"Description: Dylan, a teenager arrives in a glade of a giant labyrinth with no memory.Follow Dylan to discover who he actually is "<<endl;
				}
				
			
			else if( (choice=='B')||(choice=='b'))
				{
				cout<<"Book selected: Parry Potter "<<endl;
				cout<<""<<endl;
				cout<<"Detail of this book:   "<<endl;
				cout<<"======================="<<endl;
				cout<<"The author was Rupi Kaur."<<endl;
				cout<<"Publisher of this book was Times Square Publisher Ent."<<endl;
				cout<<"The price of this book was 106.00"<<endl;
				cout<<""<<endl;
				cout<<"Description:Follow Parry's adventure with his team  in the OZ world of magic. "<<endl;
				}
			
			else 
				cout<<"Invalid choice of books!!"<<endl;
		}
		
		else
		cout<<"Invalid type of books!!!"<<endl;	
			
		return choice_book;
	}
	

	double purchase(int&newquantity, double&totalprice)
	{
		double price;
		char name[50], answer;
		int quantity;
	
		cout<<""<<endl;
		cout<<" Enter 'Y' to continue : ";
		cin>>answer;
		
	
		while((answer=='y')||(answer=='Y'))
		{
		cin.ignore() ;
		cout<<""<<endl;
		cout<<"Enter the name of the book: ";
		cin.getline(name,49);
		cout<<""<<endl;
		cout<<"Quantity of books: ";
		cin>>quantity;
		cout<<""<<endl;
		
		if(strcmpi(name,"Milk And Honey")==0)
		{
		price=31.98;
		}
		
		else if(strcmpi(name,"Persona")==0)
		{
		price=40.99;
		}
		
		else if(strcmpi(name,"Maze Chaser")==0)
		{
		price=70.00;
		}
		
		else if(strcmpi(name,"Parry Potter")==0)
		{
		price=106.00;
		}
		
		else
		{
		cout<<"Invalid name book. "<<endl;
		cout<<""<<endl;
		}
		cout<<"Price of the book (RM): "<<price<<endl;
		newquantity=newquantity+quantity;
		price = newquantity*price;
	
		//calculate
		totalprice = totalprice + price;
		
		cout<<""<<endl;
		cout<<"Do enter 'Y' to continue purchasing transaction or enter 'N' to stop : ";
		cin>>answer;
		cout<<""<<endl;
		
		}
	}

	
	
	double calcDiscount(double& nettotal, double& discount, double& totalprice)
	{
		if(totalprice>=50)
		{
			discount=totalprice*0.05;
			nettotal=totalprice-discount;
		}
		
		else 
		{
			nettotal=totalprice;
		}
	}
	
	
	double displayReceipt(int&newquantity, double&totalprice, double&discount, double&nettotal)
	{
		cout<<endl;
		cout<<endl;
		cout<<"------------------------------------------------"<<endl;
		cout<<"-                RECEIPT                       -"<<endl;
		cout<<"-              ===========                     -"<<endl;
		cout<<"-                                              -"<<endl;
		cout<<"- Quantity of the book:"<<newquantity<<setw(24)<<"-"<<endl;
		cout<<"- Total price of the book (RM):"<<totalprice<<setw(12)<<"-"<<endl;
		cout<<"- Discount that you get (RM):"<<discount<<setw(14)<<"-"<<endl;
		cout<<"- Net total (RM):"<<nettotal<<setw(25)<<"            -"<<endl;
		cout<<"- Thank you ! Come Again !                     -"<<endl;
		cout<<"------------------------------------------------"<<endl;
	}

	void  sales(double&price, double&totalquantity)
	{
		char answer, month[10], name[50];

		cout<<"Calculation of monthly sales [Y:Yes / N:No]: ";
		cin>>answer; 
		cout<<""<<endl;
		
		while((answer=='Y')||(answer=='y'))
		{
			cin.ignore();
			cout<<"Enter the name of the month: ";
			cin.getline(month,9);
			
			cout<<""<<endl;
			cout<<"Enter name of the  book: ";
			cin.getline(name,49);
			
				if(strcmpi(name,"Milk And Honey")==0)
				{
				price=31.98;
				}
				
				else if(strcmpi(name,"Persona")==0)
				{
				price=40.99; 
				}
				
				else if(strcmpi(name,"Maze Chaser")==0)
				{
				price=70.00;
				}
				
				else if(strcmpi(name,"Parry Potter")==0)
				{
				price=106.00;
				}
				
				else 
				{
				cout<<"Invalid name book ! Try again "<<endl;
				}
			
			cout<<"Price of a book: "<<price<<endl;
			cout<<""<<endl;
			
			cout<<"Total books sold for "<<month<<": ";
			cin>>totalquantity;
			
			cout<<""<<endl;
			cout<<"Do you wish to re-calculate the  of monthly sales ? [Y:Yes] / [N:No] ";
			cin>>answer;
		}
	
	}
