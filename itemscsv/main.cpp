/* 082739 MAUREEN MAINA
100249 TREVOR OMONDI*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void items()
{
    string A = "";
    string B = "";
    string C = "";
    string D = "";

    ofstream outfile;

    outfile.open( "items.csv");

    if(outfile){
         // write the file headers
        outfile << "Item Name" << "," << "Unit Price" << "," << "Quantity Remaining" << "," << "Reorder Levels" << endl;
        // i is just a variable to make numbers with in the file
        // write data to the file
        for (int counter = 0; counter < 4; counter++)
        {
            A = "Bread";
            B = "Milk";
            C ="Shoes";
            D = "soap";
            // write the data to the output file
            outfile<< A << "," << B << "," << C << "," << D <<endl;

        }
    }

    outfile.close();


}

void view_Items()
{
    ifstream infile;
    infile.open( "items.csv");

    string A = "";
    string B = "";
    string C = "";
    string D = "";

    infile >> A >> B >>C >> D;
     cout << "Item 1 is : \t" << A << "\n";
     cout << "Item 1 is : \t" << B<< "\n";
     cout << "Item 1 is : \t" << C << "\n";
     cout << "Item 1 is : \t" << D << "\n";
}

void admin_menu()
{
	int choice2;
		cout<<"\n\n\n\tADMIN MENU";
		cout<<"\n\n\t1.MAKE SALES";
		cout<<"\n\n\t2.VIEW SALES REPORT";
		cout<<"\n\n\t3.ADD USERS ";
		cout<<"\n\n\t4.QUIT";
		cout<<"\n\n\tPlease Enter Your Choice (1-4) ";
		cin>>choice2;
		switch(choice2)
		{
			case 1:
			    cout << "Make sales here.\n";
			break;
			case 2:
			    cout << "View Sales Report here. \n";
            break;

			case 3:
			   cout << "Add users here. \n";
			break;
			case 4:
			    cout << "You have exited the system. \n";
            break;
			default:cout<<"\a";admin_menu();
		}while(choice2!=4);
}

void MainMenu()
{
    int choice;

    cout<<"\n\n\n\tMAIN MENU";
	cout<<"\n\n\t1. CUSTOMER";
	cout<<"\n\n\t2. ADMINISTRATOR";
	cout<<"\n\n\t3. EXIT";
	cout<<"\n\n\tPlease Select Your Option (1-3) ";
	cin >> choice;

	switch(choice)
	{
		case 1:
		    if (choice==1)
		    cout << "Welcome. Please Proceed to place an order. \n";
		    view_Items();
		//place_order();
		//getch();
		break;

		case 2:
		//for(int i=1;i<4;i++)
		//{
		    if (choice == 2)
            cout<<"\n\n\nEnter ADMIN password: ";
            admin_menu();
			//gets(password);

			//if(strcmp("supermarket",password)==0)
			//{	i=4 ;
				//admin_menu();}
				//else
				//cout<<"\nIncorrect password!!! "<<3-i<<" tries remaining";
			//}
			break;

		case 3:
		    if (choice ==3)
		    cout << "You have existed the system. \n";

		default :cout<<"\a";

		}while(choice!='3');
}

int main()
{
    cout << "Welcome to \"THE SUPERMARKET\" \n";
    MainMenu();
    admin_menu();
    //admin_menu();

    return 0;

}
