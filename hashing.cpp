#include <iostream>
#include <string>
using namespace std;

class  stock_details
{
    public:

    string name;
    int quantity;
    float  price;
   stock_details()
   {}
    stock_details(string n,int q,float  p)
    {
        name = n;
       quantity =q;
        price=p;
    }

};

class Node
{
    public:
    int key;
    stock_details s;
    Node* next;
    
    Node(int k,stock_details stock)
    {
          key=k;
          s=stock;
          next=nullptr;

    }
     
};

class inventory{

int size;
Node** table;
public:
   inventory(int s)
   {
    size=s;
     table = new Node*[size];
        for(int i=0;i<size;i++)
        {
            table[i]=nullptr;
        }
   }
     int hashvalue(int key)
     {
        return key%size;
     }
      
     void addproduct(int key,stock_details sd)
     {
        int index=hashvalue(key);
        Node* newn = new Node(key,sd);
        newn->next=table[index];
        table[index]=newn;
     }
     void display(){
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(table[i]==nullptr)
            {
                  count++;
            } 
        }
        if(count==size)
        {
            cout<<"\n \t\t No stock details are exist";
        }
        else{
            Node*temp;
            for(int i=0;i<size;i++)
            {
                temp=table[i];
                
                cout<<"Stock details at index"<<i<<endl;
                cout<<"Produtid \t Product_name \t produt_qunatity \t product_price ";
                 while(temp!=nullptr)
                 {
                    cout<<"\t "<<temp->key <<"\t"<< temp->s.name<<"\t"<<temp->s.quantity<<"\t"<<temp->s.price<<endl;
                    temp=temp->next;
                 }
                }
            }
        }
           void search(int key)
           {
            int index=hashvalue(key);
            Node* temp;
    
                temp=table[index];
                while(temp!=nullptr)
                {
                    if(temp->key==key)
                    {
                        cout<<"\t "<<temp->key <<"\t"<< temp->s.name<<"\t"<<temp->s.quantity<<"\t"<<temp->s.price;
                        return ;
                    }
                    temp=temp->next;

                }
                cout<<"\n produt was not found";
            }

            void deleteproduct(int key)

            {
                int index=hashvalue(key);
                Node* temp=table[index];
                Node* pre=nullptr;

                while(temp!=nullptr)
                {
                    if(temp->key==key)
                    {
                        if(pre==nullptr)
                        {
                           table[index]=temp->next;

                        }

                        else{
                            pre->next=temp->next;
                           
                        }
                          delete temp;
                          cout<<"deleted";
                          return;
                    }
                    pre=temp;
                    temp=temp->next;


                }
                cout<<"\n product  to be deleted was not found";

            }
};

   int main()
{
    int size;
    cout << "Enter hash table size: ";
    cin >> size;

    inventory inv(size);

    int choice;
    do
    {
        cout << "\n================ MENU ================\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Delete Product\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id, qty;
            float price;
            string name;

            cout << "\nEnter Product ID: ";
            cin >> id;

            cout << "Enter Product Name: ";
            cin >> name; // (for single word)

            cout << "Enter Quantity: ";
            cin >> qty;

            cout << "Enter Price: ";
            cin >> price;

            inv.addproduct(id, stock_details(name, qty, price));
        }
        else if (choice == 2)
        {
            inv.display();
        }
        else if (choice == 3)
        {
            int id;
            cout << "\nEnter Product ID to search: ";
            cin >> id;
            inv.search(id);
        }
        else if (choice == 4)
        {
            int id;
            cout << "\nEnter Product ID to delete: ";
            cin >> id;
            inv.deleteproduct(id);
        }
        else if (choice == 5)
        {
            cout << "\nExiting program... ✅\n";
        }
        else
        {
            cout << "\nInvalid choice ❌ Try again.\n";
        }

    } while (choice != 5);

    return 0;
}


