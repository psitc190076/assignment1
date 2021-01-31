#include <iostream>
#include <string>


using namespace std;

int main()
{    const double Vat = 0.12;

    string name, printer, phone, table, choice;
  long double Amount,cost, balance,priceofprinter=800,priceofphone=500,priceoftable=200;
   double quantity,ID;
    cout << "*WELCOME TO ISSAICK'S ENTERPRISE \n";
    cout << "\n";
    cout << "-PURCHASING AN ITEM \n";
    cout << "List of items being sold: \n";

    string item1, item2, item3;
    item1 = "printer";
    item2 = "phone";
    item3 = "table";

    cout << "1. printer \n";
    cout << "2. phone \n";
    cout << "3. table \n";


    cout << "\n";
    cout << "-Please enter your name \n";
    cin >> name;

    cout << "\n";
    cout << "Please enter your ID number \n";
    cin >> ID;

    cout << "\n";
    cout << "-What do you wish to purchase? \n";
       cin>>choice;
    cout << "\n";
     if(choice==item1)
      {
          //cin>>choice;
          cout << "How many do you wish to purchase?" << endl;
          cin>>quantity;
          cout << "how much do you wish to pay?" << endl;
          cin>>Amount;
          cost=priceofprinter*quantity+Vat;
          cout << "\n";

         if(Amount>cost)
      {
          balance=Amount-cost;
       }

       else{

        cout<<" Sorry...your amount is insufficient to purchase this item"<<endl;
       }

        cout << "\n";
        cout<<"**********Receipt of Transaction made**********"<<endl;

     cout<<"Customer's name:"<<name<<endl;
     cout<<"Customer's ID number:"<<ID<<endl;
     cout<<"Item purchased:"<<"printer"<<endl;
     cout<<"Quantity of item purchased:"<<quantity<<endl;
     cout<<"Vat Amount:"<<Vat<<endl;
     cout<<"Total cost:$"<<cost<<endl;
     cout<<"Total Amount paid:$"<<Amount<<endl;
     cout<<"Balance:$ "<<balance<<endl;

       }

      else if (choice==item2)
      {
         //cin>>choice;
          cout << "How many do you wish to purchase?" << endl;
          cin>>quantity;
          cout << "how much do you wish to pay?" << endl;
          cin>>Amount;
          cost=priceofphone*quantity+Vat;
          cout << "\n";

         if(Amount>cost)
      {
          balance=Amount-cost;
       }

       else{

        cout<<" Sorry...your amount is insufficient to purchase this item"<<endl;
       }

        cout << "\n";
        cout<<"**********Receipt of Transaction made**********"<<endl;

     cout<<"Customer's name:"<<name<<endl;
     cout<<"Customer's ID number:"<<ID<<endl;
     cout<<"Item purchased:"<<"phone"<<endl;
     cout<<"Quantity of item purchased:"<<quantity<<endl;
     cout<<"Vat Amount:"<<Vat<<endl;
     cout<<"Total cost:$"<<cost<<endl;
     cout<<"Total Amount paid:$"<<Amount<<endl;
     cout<<"Balance:$ "<<balance<<endl;

      }
        else if (choice==item3)
        {
            //cin>>choice;
          cout << "How many do you wish to purchase?" << endl;
          cin>>quantity;
          cout << "how much do you wish to pay?" << endl;
          cin>>Amount;
          cost=priceoftable*quantity+Vat;
          cout << "\n";

         if(Amount>cost)
      {
          balance=Amount-cost;
       }

       else{

        cout<<" Sorry...your amount is insufficient to purchase this item"<<endl;
       }

        cout << "\n";
        cout<<"**********Receipt of Transaction made**********"<<endl;

     cout<<"Customer's name:"<<name<<endl;
     cout<<"Customer's ID number:"<<ID<<endl;
     cout<<"Item purchased:"<<"table"<<endl;
     cout<<"Quantity of item purchased:"<<quantity<<endl;
     cout<<"Vat Amount:"<<Vat<<endl;
     cout<<"Total cost:$"<<cost<<endl;
     cout<<"Total Amount paid:$"<<Amount<<endl;
     cout<<"Balance:$ "<<balance<<endl;

        }

        else {
            cout << "Sorry...This product is unidentified \n";

        }
        cout << "\n";
        cout << "THANK YOU FOR TRANSACTING WITH US \n";
    return 0;
}
